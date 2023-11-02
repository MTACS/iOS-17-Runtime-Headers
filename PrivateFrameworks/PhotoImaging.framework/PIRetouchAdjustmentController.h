
@interface PIRetouchAdjustmentController : PIAdjustmentController

@property (nonatomic, copy) NSArray *detectedFaces;

+ (id)clipRectKey;
+ (id)detectedFacesKey;
+ (id)enabledKey;
+ (id)inputStrokesKey;
+ (id)modeKey;
+ (id)sourceOffsetKey;
+ (id)sourceOffsetXKey;
+ (id)sourceOffsetYKey;

- (void)appendStroke:(id)arg1;
- (id)detectedFaces;
- (void)setDetectedFaces:(id)arg1;

@end
