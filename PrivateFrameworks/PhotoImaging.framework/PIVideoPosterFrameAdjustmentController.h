
@interface PIVideoPosterFrameAdjustmentController : PIAdjustmentController

@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } posterFrameTime;

+ (id)scaleKey;
+ (id)timeKey;

- (id)initWithAdjustment:(id)arg1;
- (id)pasteKeysForMediaType:(long long)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })posterFrameTime;
- (void)setPosterFrameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
