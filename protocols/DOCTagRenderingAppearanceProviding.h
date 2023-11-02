
@protocol DOCTagRenderingAppearanceProviding <DOCUIAppearanceValues>

@required

- (double)defaultBorderWidth;
- (long long)imageWeightForVariant:(unsigned long long)arg1;
- (bool)outlineTagsToIndicateMixedState;
- (UIColor *)underlyingColorForNoneTag;

@end
