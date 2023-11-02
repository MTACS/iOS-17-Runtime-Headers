
@interface AAUICodeEntryPane : DevicePINPane {
    UIScrollView * _containerView;
    AAUICodeEntryContext * _context;
    UIButton * _footerButton;
    AAUIPaneHeaderView * _headerView;
    double  _keyboardOffset;
}

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_availableHeaderRect;
- (id)_createFooterButton;
- (double)_desiredMinPinHeight;
- (void)_didFinishResizingHeaderView;
- (void)_didFinishResizingPinView;
- (bool)_isSmallScreen;
- (bool)_isVerySmallScreen;
- (void)_keyboardLayoutChanged;
- (void)_layoutContainerView;
- (void)_layoutHeaderRect;
- (void)_layoutPinView;
- (void)_layoutSubviews;
- (void)_startListeningForKeyboardEvents;
- (void)dealloc;
- (void)handleEscapeAction:(id)arg1;
- (id)headerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)keyboardHeightOffset;
- (void)layoutSubviews;
- (void)setContext:(id)arg1;

@end
