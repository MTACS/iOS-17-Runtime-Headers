
@interface AAUISignInViewControllerTableFooterView : UITableViewHeaderFooterView {
    UIStackView * _actionButtonStackView;
    UIStackView * _continueButtonStackView;
    NSLayoutConstraint * _expandableHeight;
    UIView * _expandableView;
    UIStackView * _mainStack;
    UIViewController * _parentForPrivacyController;
    OBPrivacyLinkController * _privacyLinkController;
    NSArray * _privacyLinkIdentifiers;
}

@property (nonatomic, retain) UIView *expandableView;
@property (nonatomic) UIViewController *parentForPrivacyController;
@property (nonatomic, copy) NSArray *privacyLinkIdentifiers;

- (void).cxx_destruct;
- (void)addActionButtonStackView:(id)arg1;
- (void)addContinueButton:(id)arg1;
- (id)expandableView;
- (id)initWithReuseIdentifier:(id)arg1;
- (double)naturalSize;
- (id)parentForPrivacyController;
- (id)privacyLinkIdentifiers;
- (void)setExpandableView:(id)arg1;
- (void)setExpandableViewToHeight:(double)arg1;
- (void)setParentForPrivacyController:(id)arg1;
- (void)setPrivacyLinkIdentifiers:(id)arg1;

@end
