
@interface UIKBUndoStateHUD : UIView {
    UIView * _containerView;
    long long  _controlType;
    UILabel * _labelView;
    UIVisualEffectView * _shadowView;
    UIKBUndoStyling * _style;
    NSLayoutConstraint * _undoStateHUDHeightConstraint;
    NSLayoutConstraint * _undoStateHUDWidthConstraint;
}

@property (nonatomic, retain) UIView *containerView;
@property (nonatomic) long long controlType;
@property (nonatomic, retain) UILabel *labelView;
@property (nonatomic, retain) UIVisualEffectView *shadowView;
@property (nonatomic, retain) UIKBUndoStyling *style;
@property (nonatomic, retain) NSLayoutConstraint *undoStateHUDHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *undoStateHUDWidthConstraint;

- (void).cxx_destruct;
- (id)containerView;
- (long long)controlType;
- (id)initWithKeyboardAppearance:(long long)arg1;
- (id)labelView;
- (void)setContainerView:(id)arg1;
- (void)setControlType:(long long)arg1;
- (void)setLabelView:(id)arg1;
- (void)setShadowView:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)setUndoStateHUDHeightConstraint:(id)arg1;
- (void)setUndoStateHUDWidthConstraint:(id)arg1;
- (id)shadowView;
- (id)style;
- (void)traitCollectionDidChange:(id)arg1;
- (id)undoStateHUDHeightConstraint;
- (id)undoStateHUDWidthConstraint;
- (void)updateUndoStateHUDControlType:(long long)arg1 available:(bool)arg2;

@end
