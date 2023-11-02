
@protocol PRPosterContentStyleVariationSupporting <NSObject>

@required

- (<PRPosterContentStyle> *)copyWithVariation:(double)arg1;
- (double)maxVariation;
- (double)minVariation;
- (double)variation;
- (NSArray *)variationAppliedColors;

@end
