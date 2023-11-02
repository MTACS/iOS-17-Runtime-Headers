
@protocol AVTAvatarColorSliderContainerViewDelegate

@required

- (void)colorSliderDidFinishChangingVariation:(double)arg1 forItem:(AVTAvatarAttributeEditorSectionColorItem *)arg2;
- (void)colorSliderVariationChanged:(double)arg1 forItem:(AVTAvatarAttributeEditorSectionColorItem *)arg2;

@end
