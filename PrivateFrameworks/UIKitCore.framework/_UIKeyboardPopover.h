
@interface _UIKeyboardPopover : UIView <UITextEffectsOrdering> {
    _UIPopoverView * _popoverView;
}

- (void).cxx_destruct;
- (void)_setRenderConfig:(id)arg1;
- (id)initWithPopoverView:(id)arg1;
- (int)textEffectsVisibilityLevel;
- (int)textEffectsVisibilityLevelInKeyboardWindow;

@end
