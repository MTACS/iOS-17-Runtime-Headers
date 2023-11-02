
@interface EKUIEventStatusButtonsView : UIView <UIPointerInteractionDelegate> {
    NSArray * _actions;
    bool  _allowAppliesToAll;
    NSArray * _buttons;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _buttonsTouchInsets;
    NSArray * _currentConstraints;
    <EKUIEventStatusButtonsViewDelegate> * _delegate;
    bool  _disableButtonHighlights;
    bool  _forcesSingleButtonToCenter;
    bool  _inboxStyle;
    NSLayoutConstraint * _leadingMarginConstraint;
    double  _outsideMargin;
    long long  _selectedAction;
    bool  _shouldUseVerticalLayout;
    long long  _textSizeMode;
    NSLayoutConstraint * _trailingMarginConstraint;
}

@property (nonatomic, retain) NSArray *actions;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } buttonsTouchInsets;
@property (nonatomic, readonly) UIButton *centerButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EKUIEventStatusButtonsViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableButtonHighlights;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIButton *leadingButton;
@property (nonatomic) long long selectedAction;
@property (nonatomic) bool shouldUseVerticalLayout;
@property (readonly) Class superclass;
@property (nonatomic) long long textSizeMode;
@property (nonatomic, readonly) UIButton *trailingButton;

+ (id)_appliesToAllTitleForAction:(long long)arg1;
+ (id)buttonTitleForAction:(long long)arg1 orb:(bool)arg2;
+ (id)imageForAction:(long long)arg1 selected:(bool)arg2;
+ (bool)isActionDestructive:(long long)arg1;

- (void).cxx_destruct;
- (long long)_actionForButton:(id)arg1;
- (void)_appliesToAllButtonTapped:(id)arg1;
- (double)_buttonFontSizeFromDelegate;
- (long long)_buttonIndexForAction:(long long)arg1;
- (void)_buttonTapped:(id)arg1;
- (void)_buttonTappedInternal:(id)arg1 appliesToAll:(bool)arg2;
- (double)_defaultFontSizeForButtons;
- (id)_fontWithSize:(double)arg1 selected:(bool)arg2;
- (id)_horizontalConstraintStringForMiddleButtonsStartingAt:(unsigned long long)arg1 endingAt:(unsigned long long)arg2 resultingViews:(id)arg3;
- (double)_minimumFontSize;
- (id)_newToolbarButton;
- (void)_setupButtons;
- (void)_setupConstraints;
- (bool)_shouldCenterButton;
- (void)_updateButtonFonts:(id)arg1;
- (void)_updateButtonFontsWithOverrideSize:(double)arg1;
- (void)_updateButtonFontsWithSize:(double)arg1;
- (double)_updateFontFromDelegate;
- (void)_updateSelectionToButton:(id)arg1;
- (id)actions;
- (id)buttonForAction:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })buttonsTouchInsets;
- (id)centerButton;
- (id)delegate;
- (bool)disableButtonHighlights;
- (void)findPointerInteractionWithButton:(id)arg1 actions:(id /* block */)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 actions:(id)arg2 delegate:(id)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 actions:(id)arg2 delegate:(id)arg3 options:(unsigned long long)arg4;
- (void)layoutSubviews;
- (id)leadingButton;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (long long)selectedAction;
- (void)setActions:(id)arg1;
- (void)setButtonsTouchInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableButtonHighlights:(bool)arg1;
- (void)setSelectedAction:(long long)arg1;
- (void)setShouldUseVerticalLayout:(bool)arg1;
- (void)setTextSizeMode:(long long)arg1;
- (bool)shouldUseVerticalLayout;
- (long long)textSizeMode;
- (id)trailingButton;
- (void)updateConstraints;
- (void)updateFonts;
- (void)updateForMiniBarState:(bool)arg1;

@end
