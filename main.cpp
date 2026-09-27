#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// محاكاة استدعاء نظام Syscon للتحكم بالمروحة والقراءة
void set_fan_speed(int speed_percent) {
    printf("[Syscon] Fan speed set to: %d%%\n", speed_percent);
}

int get_cpu_temp() {
    // قراءة حرارة المعالج الحالية
    return 65; // قيمة افتراضية للعرض
}

int main() {
    printf("PS4 AI Companion Started...\n");

    while(1) {
        int current_temp = get_cpu_temp();

        // نظام الحماية الحرارية (Overriding Safety)
        if (current_temp > 75) {
            set_fan_speed(100); // إجبار المروحة على 100% لحماية العتاد
            printf("CRITICAL TEMP! Safety override engaged.\n");
        } else {
            // حالة التفاعل العادي (مثال: غضب الشخصية = رفع المروحة إلى 85%)
            set_fan_speed(85); 
        }

        sleep(5); // فحص كل 5 ثوانٍ
    }
    return 0;
}
