
@interface SPUILockScreenFooterView : NUIContainerBoxView {
    TLKTextButton * _unlockScreenButton;
}

@property (retain) TLKTextButton *unlockScreenButton;

- (void).cxx_destruct;
- (id)init;
- (void)setUnlockScreenButton:(id)arg1;
- (void)unlockButtonPressed:(id)arg1;
- (id)unlockScreenButton;
- (void)updateTitle;

@end
