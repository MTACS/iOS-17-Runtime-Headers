
@protocol FxPlugAPIDelegate

@required

- (void)abortAndWait;
- (void*)baseChannel;
- (void)beginOperationWithChannel:(struct OZChannelBase { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; }*)arg1;
- (void*)beginTimingOperation:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forChannel:(struct OZChannelBase { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; }*)arg2;
- (struct OZChannelBase { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; }*)channelWithID:(int)arg1;
- (double)convertFromFigTime:(const struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })convertToFigTime:(double)arg1;
- (NSString *)displayName;
- (void)endOperationWithChannel:(struct OZChannelBase { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; }*)arg1;
- (void)endTimingOperation:(void*)arg1;
- (union { double x1; struct { /* ? */ } *x2; })figTimeToFxTime:(const struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1 withConversionData:(void*)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })fxTimeToFigTime:(union { double x1; struct { /* ? */ } *x2; })arg1 withConversionData:(void*)arg2;
- (void)markForDynamicParameterUsage;
- (struct OZChannelBase { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; }*)parameterAtIndex:(unsigned int)arg1;
- (unsigned int)parameterCount;
- (void)postChannelChange:(struct OZChannelBase { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; }*)arg1 flagsOnly:(bool)arg2;
- (void)preChannelChange:(struct OZChannelBase { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; }*)arg1 flagsOnly:(bool)arg2;
- (void)removeParameter:(unsigned int)arg1;
- (void)updateInspector;
- (void)updateKeyframeEditor;
- (bool)usesRationalTime;

@end
