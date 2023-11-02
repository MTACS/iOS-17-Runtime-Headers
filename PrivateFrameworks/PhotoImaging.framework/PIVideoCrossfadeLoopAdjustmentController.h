
@interface PIVideoCrossfadeLoopAdjustmentController : PIAdjustmentController

@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } crossfadeDuration;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } loopTimeRange;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } startTime;

+ (id)crossfadeDurationTimescaleKey;
+ (id)crossfadeDurationValueKey;
+ (id)loopTimeRangeDurationTimescaleKey;
+ (id)loopTimeRangeDurationValueKey;
+ (id)loopTimeRangeStartTimescaleKey;
+ (id)loopTimeRangeStartValueKey;
+ (id)startTimeTimescaleKey;
+ (id)startTimeValueKey;

- (struct { long long x1; int x2; unsigned int x3; long long x4; })crossfadeDuration;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })loopTimeRange;
- (void)setCrossfadeDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setLoopTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })startTime;

@end
