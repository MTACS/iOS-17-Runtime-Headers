
@interface DDCopyAction : DDAction {
    long long  _dataOwner;
    NSString * _query;
}

+ (bool)actionAvailableForContact:(id)arg1;

- (void).cxx_destruct;
- (void)_copyURL:(id)arg1;
- (bool)canBePerformedWhenDeviceIsLocked;
- (void)copyStringOnly:(id)arg1;
- (id)iconName;
- (id)initWithQueryString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 context:(id)arg3;
- (id)initWithURL:(id)arg1 result:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 16; unsigned int x_1_2_3 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 16; unsigned int x_2_2_2 : 16; unsigned int x_2_2_3 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)arg2 context:(id)arg3;
- (id)localizedName;
- (void)performFromView:(id)arg1;

@end
