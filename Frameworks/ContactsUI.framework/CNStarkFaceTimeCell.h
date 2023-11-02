
@interface CNStarkFaceTimeCell : CNContactCell <CNStarkActionViewDelegate> {
    CNStarkActionView * _actionView;
    <CNPropertyCellDelegate> * _delegate;
    UILabel * _faceTimeLabel;
    NSDictionary * _labelTextAttributes;
}

@property (nonatomic, readonly) CNStarkActionView *actionView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNPropertyCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *faceTimeLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *labelTextAttributes;
@property (readonly) Class superclass;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_cnui_applyContactStyle;
- (id)actionView;
- (void)actionViewTapped:(id)arg1;
- (id)constantConstraints;
- (id)delegate;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)faceTimeLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)labelTextAttributes;
- (void)performDefaultAction;
- (void)setDelegate:(id)arg1;
- (void)setFaceTimeLabel:(id)arg1;
- (void)setLabelTextAttributes:(id)arg1;
- (void)setSeparatorStyle:(long long)arg1;
- (bool)shouldShowStar;
- (bool)supportsTintColorValue;
- (void)updateTransportButtons;
- (id)variableConstraints;

@end
