
@protocol CAMControlVisibilityDelegate <NSObject>

@required

- (bool)shouldHideElapsedTimeView;
- (bool)shouldHideFilterNameBadge;
- (bool)shouldHideFlashButton;
- (bool)shouldHideFlipButton;
- (bool)shouldHideHDRButton;
- (bool)shouldHideLightingControl;
- (bool)shouldHideLightingNameBadgeForOrientation:(long long)arg1;
- (bool)shouldHideLivePhotoButton;
- (bool)shouldHidePortraitModeInstructionLabel;
- (bool)shouldHideQRCodeInstructionLabel;
- (bool)shouldHideTimerButton;
- (bool)shouldHideTopBar;
- (bool)shouldLayoutLightingNameBadgeAtBottom;
- (bool)shouldShiftPreviewForUtilityBar;

@end
