
@interface CDPPassphraseEntryPane : DevicePINPane {
    UIScrollView * _containerView;
    long long  _deviceIdiom;
    CDPPaneHeaderView * _headerView;
    double  _keyboardOffset;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } availableHeaderRect;

- (void).cxx_destruct;
- (void)_keyboardLayoutChanged;
- (void)_keyboardWillShow:(id)arg1;
- (void)_layoutContainerView;
- (void)_layoutHeaderRect;
- (void)_layoutPinView;
- (void)_layoutSubviews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })availableHeaderRect;
- (void)dealloc;
- (double)desiredMinPinHeight;
- (void)didFinishResizingHeaderView;
- (void)didFinishResizingPinView;
- (id)headerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isSmallScreen;
- (bool)isVerySmallScreen;
- (double)keyboardHeightOffset;
- (void)layoutSubviews;
- (void)startListeningForKeyboardEvents;

@end
