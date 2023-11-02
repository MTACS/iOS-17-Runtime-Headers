
@interface CIStarShineGenerator : CIFilter {
    CIVector * inputCenter;
    CIColor * inputColor;
    NSNumber * inputCrossAngle;
    NSNumber * inputCrossOpacity;
    NSNumber * inputCrossScale;
    NSNumber * inputCrossWidth;
    NSNumber * inputEpsilon;
    NSNumber * inputRadius;
}

@property (nonatomic, retain) CIVector *inputCenter;
@property (nonatomic, retain) CIColor *inputColor;
@property (nonatomic, retain) NSNumber *inputCrossAngle;
@property (nonatomic, retain) NSNumber *inputCrossOpacity;
@property (nonatomic, retain) NSNumber *inputCrossScale;
@property (nonatomic, retain) NSNumber *inputCrossWidth;
@property (nonatomic, retain) NSNumber *inputEpsilon;
@property (nonatomic, retain) NSNumber *inputRadius;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputCenter;
- (id)inputColor;
- (id)inputCrossAngle;
- (id)inputCrossOpacity;
- (id)inputCrossScale;
- (id)inputCrossWidth;
- (id)inputEpsilon;
- (id)inputRadius;
- (id)outputImage;
- (void)setInputCenter:(id)arg1;
- (void)setInputColor:(id)arg1;
- (void)setInputCrossAngle:(id)arg1;
- (void)setInputCrossOpacity:(id)arg1;
- (void)setInputCrossScale:(id)arg1;
- (void)setInputCrossWidth:(id)arg1;
- (void)setInputEpsilon:(id)arg1;
- (void)setInputRadius:(id)arg1;

@end
