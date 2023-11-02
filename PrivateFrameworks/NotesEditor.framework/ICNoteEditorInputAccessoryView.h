
@interface ICNoteEditorInputAccessoryView : UIView {
    NSLayoutConstraint * _bottomConstraint;
    UIView * _bottomMarginView;
    NSLayoutConstraint * _bottomMarginViewTopConstraint;
    UIView * _containerView;
    <ICNoteEditorInputAccessoryViewDelegate> * _delegate;
    ICNoteEditorToolbarDisclosureView * _disclosureView;
    NSLayoutConstraint * _disclosureViewBottomConstraint;
    float  _disclosureViewCloseTrailingOffset;
    NSLayoutConstraint * _disclosureViewTrailingConstraint;
    NSLayoutConstraint * _heightConstraint;
    UIToolbar * _toolbar;
    NSLayoutConstraint * _toolbarTopConstraint;
}

@property (nonatomic, retain) NSLayoutConstraint *bottomConstraint;
@property (nonatomic, retain) UIView *bottomMarginView;
@property (nonatomic, retain) NSLayoutConstraint *bottomMarginViewTopConstraint;
@property (nonatomic) bool buttonsVisible;
@property (nonatomic, retain) UIView *containerView;
@property (nonatomic) <ICNoteEditorInputAccessoryViewDelegate> *delegate;
@property (nonatomic, retain) ICNoteEditorToolbarDisclosureView *disclosureView;
@property (nonatomic, retain) NSLayoutConstraint *disclosureViewBottomConstraint;
@property (nonatomic) float disclosureViewCloseTrailingOffset;
@property (nonatomic, retain) NSLayoutConstraint *disclosureViewTrailingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;
@property (nonatomic, retain) UIToolbar *toolbar;
@property (nonatomic, retain) NSLayoutConstraint *toolbarTopConstraint;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)accessibilityElements;
- (id)bottomConstraint;
- (id)bottomMarginView;
- (id)bottomMarginViewTopConstraint;
- (bool)buttonsVisible;
- (id)containerView;
- (id)delegate;
- (void)disclosureTapRecognizer:(id)arg1;
- (id)disclosureView;
- (id)disclosureViewBottomConstraint;
- (float)disclosureViewCloseTrailingOffset;
- (id)disclosureViewTrailingConstraint;
- (id)heightConstraint;
- (void)hide;
- (void)hideDisclosureViewForTransition:(bool)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)safeAreaInsetsDidChange;
- (void)setBottomConstraint:(id)arg1;
- (void)setBottomMarginView:(id)arg1;
- (void)setBottomMarginViewTopConstraint:(id)arg1;
- (void)setButtonsVisible:(bool)arg1;
- (void)setContainerView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisclosureView:(id)arg1;
- (void)setDisclosureViewBottomConstraint:(id)arg1;
- (void)setDisclosureViewCloseTrailingOffset:(float)arg1;
- (void)setDisclosureViewTrailingConstraint:(id)arg1;
- (void)setHeightConstraint:(id)arg1;
- (void)setToolbar:(id)arg1;
- (void)setToolbarTopConstraint:(id)arg1;
- (void)showWithDelay:(double)arg1;
- (void)toggleDisclosureViewCloseStateWithTap:(bool)arg1;
- (id)toolbar;
- (id)toolbarTopConstraint;
- (void)updateDisclosureViewTrailingConstraint;
- (void)updateLayoutWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateToolbarColorsWithForceUpdate:(bool)arg1;

@end
