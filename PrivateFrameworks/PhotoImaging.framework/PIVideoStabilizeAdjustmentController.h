
@interface PIVideoStabilizeAdjustmentController : PIAdjustmentController

@property (nonatomic) unsigned long long analysisType;
@property (nonatomic) double cropFraction;
@property (nonatomic, copy) NSArray *keyframes;
@property (nonatomic) struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; } stabCropRect;

+ (id)keyframesKey;
+ (id)stabCropRectKey;

- (unsigned long long)analysisType;
- (double)cropFraction;
- (bool)isEqual:(id)arg1 forKeys:(id)arg2;
- (id)keyframes;
- (id)pasteKeysForMediaType:(long long)arg1;
- (void)setAnalysisType:(unsigned long long)arg1;
- (void)setCropFraction:(double)arg1;
- (void)setKeyframes:(id)arg1;
- (void)setStabCropRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })stabCropRect;

@end
