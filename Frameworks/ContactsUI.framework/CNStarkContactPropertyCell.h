
@interface CNStarkContactPropertyCell : CNPropertyPhoneNumberCell <CNStarkActionViewDelegate> {
    CNStarkActionView * _actionView1;
    CNStarkActionView * _actionView2;
    bool  _allowsFocus;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    NSLayoutConstraint * _contentViewBottomAnchorConstraint;
    NSLayoutConstraint * _labelViewFirstBaselineAnchorConstraint;
    NSLayoutConstraint * _valueViewFirstBaselineAnchorConstraint;
}

@property (nonatomic, readonly) CNStarkActionView *actionView1;
@property (nonatomic, readonly) CNStarkActionView *actionView2;
@property (nonatomic) bool allowsFocus;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic, retain) NSLayoutConstraint *contentViewBottomAnchorConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *labelViewFirstBaselineAnchorConstraint;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSLayoutConstraint *valueViewFirstBaselineAnchorConstraint;

+ (double)contentViewBottomAnchorConstraintConstant;
+ (double)labelViewFirstBaselineAnchorConstraintConstant;
+ (double)minimumContentHeight;
+ (double)valueLabelFirstBaselineAnchorConstraintConstant;
+ (bool)wantsHorizontalLayout;

- (void).cxx_destruct;
- (void)_cnui_applyContactStyle;
- (id)actionView1;
- (id)actionView2;
- (void)actionViewTapped:(id)arg1;
- (bool)allowsCellSelection;
- (bool)allowsFocus;
- (bool)canBecomeFocused;
- (id)constantConstraints;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)contentViewBottomAnchorConstraint;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)labelViewFirstBaselineAnchorConstraint;
- (void)performActionForMessage;
- (void)performDefaultAction;
- (void)setAllowsFocus:(bool)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentViewBottomAnchorConstraint:(id)arg1;
- (void)setLabelViewFirstBaselineAnchorConstraint:(id)arg1;
- (void)setSeparatorStyle:(long long)arg1;
- (void)setValueViewFirstBaselineAnchorConstraint:(id)arg1;
- (bool)shouldShowStar;
- (bool)supportsTintColorValue;
- (bool)supportsValueColorUsesLabelColor;
- (long long)transportTypeForActionType:(id)arg1;
- (void)updateTransportButtons;
- (id)valueViewFirstBaselineAnchorConstraint;
- (id)variableConstraints;

@end
