
@interface MCProfileTitlePageOrganizationCell : UITableViewCell <MCUIScrollAnimationResponder> {
    NSString * _appleID;
    UILabel * _appleIDLabel;
    UILabel * _appleIDValueLabel;
    UIStackView * _labelStackView;
    UILabel * _organizationLabel;
    NSString * _organizationName;
    UILabel * _organizationValueLabel;
}

@property (nonatomic, copy) NSString *appleID;
@property (nonatomic, retain) UILabel *appleIDLabel;
@property (nonatomic, retain) UILabel *appleIDValueLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIStackView *labelStackView;
@property (nonatomic, retain) UILabel *organizationLabel;
@property (nonatomic, copy) NSString *organizationName;
@property (nonatomic, retain) UILabel *organizationValueLabel;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createHorizontalStackWithViews:(id)arg1;
- (id)_createLabelLabel;
- (id)_createValueLabel;
- (id)_createVerticalStackWithViews:(id)arg1;
- (void)_updateConstraintWithStack:(id)arg1;
- (id)appleID;
- (id)appleIDLabel;
- (id)appleIDValueLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)labelStackView;
- (id)organizationLabel;
- (id)organizationName;
- (id)organizationValueLabel;
- (void)setAppleID:(id)arg1;
- (void)setAppleIDLabel:(id)arg1;
- (void)setAppleIDValueLabel:(id)arg1;
- (void)setLabelStackView:(id)arg1;
- (void)setOrganizationLabel:(id)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setOrganizationValueLabel:(id)arg1;
- (void)updateProgressWithTranslationDistance:(double)arg1 referenceDistance:(double)arg2 isScrolling:(bool)arg3;

@end
