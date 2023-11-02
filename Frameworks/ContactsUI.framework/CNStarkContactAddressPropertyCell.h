
@interface CNStarkContactAddressPropertyCell : CNPropertyPostalAddressCell <CNStarkActionViewDelegate> {
    CNStarkActionView * _actionView;
    NSLayoutConstraint * _contentViewBottomAnchorConstraint;
    NSLayoutConstraint * _labelViewFirstBaselineAnchorConstraint;
    NSLayoutConstraint * _valueViewFirstBaselineAnchorConstraint;
}

@property (nonatomic, readonly) CNStarkActionView *actionView;
@property (nonatomic, retain) NSLayoutConstraint *contentViewBottomAnchorConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *labelViewFirstBaselineAnchorConstraint;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSLayoutConstraint *valueViewFirstBaselineAnchorConstraint;

- (void).cxx_destruct;
- (void)_cnui_applyContactStyle;
- (id)actionView;
- (void)actionViewTapped:(id)arg1;
- (id)constantConstraints;
- (id)contentViewBottomAnchorConstraint;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)labelViewFirstBaselineAnchorConstraint;
- (void)performDefaultAction;
- (void)setContentViewBottomAnchorConstraint:(id)arg1;
- (void)setLabelViewFirstBaselineAnchorConstraint:(id)arg1;
- (void)setSeparatorStyle:(long long)arg1;
- (void)setValueViewFirstBaselineAnchorConstraint:(id)arg1;
- (bool)shouldShowStar;
- (bool)supportsTintColorValue;
- (bool)supportsValueColorUsesLabelColor;
- (void)updateTransportButtons;
- (id)valueViewFirstBaselineAnchorConstraint;
- (id)variableConstraints;

@end
