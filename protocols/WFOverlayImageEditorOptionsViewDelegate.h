
@protocol WFOverlayImageEditorOptionsViewDelegate

@required

- (void)cancelEditingImage;
- (void)finishEditingImage;
- (bool)opacitySliderVisible;
- (void)resetOverlayImageViewTransformations;
- (bool)rotationEnabled;
- (void)setOpacitySliderVisible:(bool)arg1;
- (void)setRotationEnabled:(bool)arg1;

@end
