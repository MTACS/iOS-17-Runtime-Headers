
@interface PISlomoAdjustmentController : PIAdjustmentController

@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } endTime;
@property (nonatomic) double rate;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } startTime;

+ (id)endKey;
+ (id)endScaleKey;
+ (id)rateKey;
+ (id)startKey;
+ (id)startScaleKey;

- (struct { long long x1; int x2; unsigned int x3; long long x4; })endTime;
- (id)pasteKeysForMediaType:(long long)arg1;
- (double)rate;
- (void)setEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setRate:(double)arg1;
- (void)setStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })startTime;

@end
