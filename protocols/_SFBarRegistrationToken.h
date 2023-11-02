
@protocol _SFBarRegistrationToken <NSObject>

@required

- (bool)containsBarItem:(long long)arg1;
- (<_SFPopoverSourceInfo> *)popoverSourceInfoForItem:(long long)arg1;
- (void)setBarItem:(long long)arg1 enabled:(bool)arg2;
- (void)setBarItem:(long long)arg1 menu:(UIMenu *)arg2;
- (void)updateBarAnimated:(bool)arg1;

@optional

- (UIBarButtonItem *)UIBarButtonItemForItem:(long long)arg1;
- (_SWCollaborationButtonView *)collaborationButton;
- (long long)contentMode;
- (UIButton *)microphoneButton;
- (unsigned long long)pageFormatItemState;
- (void)pulseBarItem:(long long)arg1;
- (void)setAttributedTitle:(NSAttributedString *)arg1 forBarItem:(long long)arg2;
- (void)setBarItem:(long long)arg1 hidden:(bool)arg2;
- (void)setBarItem:(long long)arg1 selected:(bool)arg2;
- (void)setCollaborationButton:(_SWCollaborationButtonView *)arg1;
- (void)setContentMode:(long long)arg1;
- (void)setCustomActivityImage:(UIImage *)arg1 accessibilityLabel:(NSString *)arg2;
- (void)setImage:(UIImage *)arg1 forBarItem:(long long)arg2;
- (void)setPageFormatItemState:(unsigned long long)arg1;
- (void)setProgress:(double)arg1 forBarItem:(long long)arg2;
- (void)setState:(long long)arg1;
- (void)setTitle:(NSString *)arg1 forBarItem:(long long)arg2;
- (long long)state;
- (UIView<UISpringLoadedInteractionSupporting> *)viewForBarItem:(long long)arg1;

@end
