
@interface PITrimAdjustmentController : PIAdjustmentController

@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } endTime;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } startTime;

+ (id)endKey;
+ (id)endScaleKey;
+ (id)startKey;
+ (id)startScaleKey;

- (struct { long long x1; int x2; unsigned int x3; long long x4; })endTime;
- (id)pasteKeysForMediaType:(long long)arg1;
- (void)setEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })startTime;

@end
