
@interface UIKBUndoInteractionHUD : UIView {
    UIKBUndoControl * _aCopyButtonView;
    UIKBUndoControl * _aCutButtonView;
    UIKBUndoControl * _aPasteButtonView;
    <UIInteractiveUndoHUDActionDelegate> * _actionDelegate;
    NSDate * _appearanceDate;
    UIVisualEffectView * _backgroundEffectView;
    UIView * _containerView;
    UILabel * _instructionalLabel;
    UIKBUndoControl * _leftButtonView;
    long long  _mode;
    UIKBUndoControl * _rightButtonView;
    UIVisualEffectView * _shadowView;
    UIKBUndoStyling * _style;
}

@property (nonatomic, retain) UIKBUndoControl *aCopyButtonView;
@property (nonatomic, retain) UIKBUndoControl *aCutButtonView;
@property (nonatomic, retain) UIKBUndoControl *aPasteButtonView;
@property (nonatomic) <UIInteractiveUndoHUDActionDelegate> *actionDelegate;
@property (nonatomic, retain) NSDate *appearanceDate;
@property (nonatomic, retain) UIVisualEffectView *backgroundEffectView;
@property (nonatomic, retain) UIView *containerView;
@property (nonatomic, retain) UILabel *instructionalLabel;
@property (nonatomic, retain) UIKBUndoControl *leftButtonView;
@property (nonatomic) long long mode;
@property (nonatomic, retain) UIKBUndoControl *rightButtonView;
@property (nonatomic, retain) UIVisualEffectView *shadowView;
@property (nonatomic, retain) UIKBUndoStyling *style;

- (void).cxx_destruct;
- (id)aCopyButtonView;
- (id)aCutButtonView;
- (id)aPasteButtonView;
- (id)actionDelegate;
- (id)appearanceDate;
- (bool)availableOfControl:(id)arg1;
- (id)backgroundEffectView;
- (id)containerView;
- (void)controlActionDown:(id)arg1;
- (void)controlActionUpInside:(id)arg1 forEvent:(id)arg2;
- (void)controlActionUpOutside:(id)arg1;
- (id)controlForType:(long long)arg1;
- (id)createSeparatorView;
- (id)initWithKeyboardAppearance:(long long)arg1 isRTL:(bool)arg2 mode:(long long)arg3 sceneBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)instructionalLabel;
- (id)leftButtonView;
- (long long)mode;
- (void)performDelegateRedoAndUpdateHUDIfNeeded;
- (void)performDelegateUndoAndUpdateHUDIfNeeded;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)rightButtonView;
- (void)setACopyButtonView:(id)arg1;
- (void)setACutButtonView:(id)arg1;
- (void)setAPasteButtonView:(id)arg1;
- (void)setActionDelegate:(id)arg1;
- (void)setAppearanceDate:(id)arg1;
- (void)setBackgroundEffectView:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setInstructionalLabel:(id)arg1;
- (void)setLeftButtonView:(id)arg1;
- (void)setMode:(long long)arg1;
- (void)setRightButtonView:(id)arg1;
- (void)setShadowView:(id)arg1;
- (void)setStyle:(id)arg1;
- (id)shadowView;
- (id)style;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateControlWithDirection:(long long)arg1 travelProgress:(double)arg2 isRTL:(bool)arg3;
- (void)updateHUDControlState;
- (void)willMoveToWindow:(id)arg1;

@end
