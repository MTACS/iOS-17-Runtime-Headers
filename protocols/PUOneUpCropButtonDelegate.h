
@protocol PUOneUpCropButtonDelegate

@required

- (void)oneUpCropButton:(PUOneUpCropButton *)arg1 didSelectAspectRatio:(struct CGSize { double x1; double x2; })arg2;
- (void)oneUpCropButton:(PUOneUpCropButton *)arg1 menuPresentedDidChange:(bool)arg2;
- (void)oneUpCropButton:(PUOneUpCropButton *)arg1 pointerTargetDidChange:(bool)arg2;
- (struct CGSize { double x1; double x2; })oneUpCropButtonBoundingSize:(PUOneUpCropButton *)arg1;
- (struct CGSize { double x1; double x2; })oneUpCropButtonCurrentAspectRatio:(PUOneUpCropButton *)arg1;
- (struct CGSize { double x1; double x2; })oneUpCropButtonOriginalAspectRatio:(PUOneUpCropButton *)arg1;

@end
