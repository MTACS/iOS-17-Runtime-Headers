
@interface PILivePhotoKeyFrameAdjustmentController : PIAdjustmentController

@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } keyFrameTime;

+ (id)scaleKey;
+ (id)timeKey;

- (id)initWithAdjustment:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })keyFrameTime;
- (id)pasteKeysForMediaType:(long long)arg1;
- (void)setKeyFrameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
