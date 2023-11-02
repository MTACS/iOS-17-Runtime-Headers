
@interface CNMeCardSharingOnboardingViewController : OBTableWelcomeController {
    OBBoldTrayButton * _confirmButton;
    CNContact * _contact;
    CNContactStore * _contactStore;
    NSLayoutConstraint * _tableViewHeightConstraint;
}

@property (nonatomic, retain) OBBoldTrayButton *confirmButton;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, retain) NSLayoutConstraint *tableViewHeightConstraint;

+ (id)headerText;

- (void).cxx_destruct;
- (id)confirmButton;
- (id)confirmButtonTitle;
- (id)contact;
- (id)contactStore;
- (void)didTapDoneButton:(id)arg1;
- (void)handleConfirmButtonTapped;
- (void)setConfirmButton:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setTableViewHeightConstraint:(id)arg1;
- (id)tableViewHeightConstraint;
- (void)updateForContentSizeCategoryChange;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
