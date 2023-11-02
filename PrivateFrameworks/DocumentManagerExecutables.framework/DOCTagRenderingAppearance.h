
@interface DOCTagRenderingAppearance : NSObject <DOCTagRenderingAppearanceProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly) double defaultBorderWidth;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool outlineTagsToIndicateMixedState;
@property (readonly) Class superclass;
@property (readonly) UIColor *underlyingColorForNoneTag;

- (double)_defaultBorderWidth;
- (id)_init;
- (double)defaultBorderWidth;
- (long long)imageWeightForVariant:(unsigned long long)arg1;
- (bool)outlineTagsToIndicateMixedState;
- (id)underlyingColorForNoneTag;

@end
