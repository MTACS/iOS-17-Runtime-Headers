
@interface BWDroppedSample : NSObject {
    NSArray * _backPressureSemaphoresToIgnore;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _pts;
    NSString * _reason;
}

@property (readonly) NSArray *backPressureSemaphoresToIgnore;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } pts;
@property (readonly) NSString *reason;

+ (id)newDroppedSampleFromDroppedSample:(id)arg1 backPressureSemaphoresToIgnore:(id)arg2;
+ (id)newDroppedSampleWithReason:(id)arg1 pts:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;

- (id)backPressureSemaphoresToIgnore;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })pts;
- (id)reason;

@end
