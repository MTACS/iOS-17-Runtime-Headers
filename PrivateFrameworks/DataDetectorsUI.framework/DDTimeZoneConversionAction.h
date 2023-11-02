
@interface DDTimeZoneConversionAction : DDConversionAction {
    NSDate * _date;
    NSTimeZone * _tz;
}

+ (bool)actionAvailableForResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 16; unsigned int x_1_2_3 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 16; unsigned int x_2_2_2 : 16; unsigned int x_2_2_3 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)arg1;
+ (id)timeZoneFromResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 16; unsigned int x_1_2_3 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 16; unsigned int x_2_2_2 : 16; unsigned int x_2_2_3 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)arg1 date:(id*)arg2;

- (void).cxx_destruct;
- (id)_titleWithValue;
- (id)initWithURL:(id)arg1 result:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 16; unsigned int x_1_2_3 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 16; unsigned int x_2_2_2 : 16; unsigned int x_2_2_3 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)arg2 context:(id)arg3;
- (id)localizedName;

@end
