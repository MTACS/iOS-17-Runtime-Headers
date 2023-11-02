
@protocol VTUIVoiceSelectionContaining <NSObject>

@required

- (UIButton *)chooseRandomVoiceButton;
- (UIButton *)continueButton;
- (UIButton *)dismissButton;
- (void)setChooseRandomVoiceButton:(UIButton *)arg1;
- (void)setContentView:(UIView *)arg1;
- (void)setContinueButton:(UIButton *)arg1;
- (void)setDismissButton:(UIButton *)arg1;

@optional

- (void)setShouldHideCompactBackgroundCardView:(bool)arg1;
- (void)updateContainerConstraintsForOrientationChangeToSize:(struct CGSize { double x1; double x2; })arg1;

@end
