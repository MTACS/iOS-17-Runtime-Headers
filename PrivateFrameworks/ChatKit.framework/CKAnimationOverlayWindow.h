
@interface CKAnimationOverlayWindow : UIWindow {
    UIView * _keyboardSnapshotView;
}

@property (nonatomic, retain) UIView *keyboardSnapshotView;

- (void).cxx_destruct;
- (bool)canBecomeFirstResponder;
- (bool)canBecomeKeyWindow;
- (void)dismiss;
- (id)keyboardSnapshotView;
- (void)setKeyboardSnapshotView:(id)arg1;
- (void)showInWindowScene:(id)arg1;

@end
