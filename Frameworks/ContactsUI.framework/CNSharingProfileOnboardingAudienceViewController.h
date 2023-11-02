
@interface CNSharingProfileOnboardingAudienceViewController : OBTableWelcomeController <CNSharingProfileOnboardingAudienceController, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    OBBoldTrayButton * _confirmButton;
    CNMutableContact * _contact;
    <CNSharingProfileOnboardingAudienceControllerDelegate> * _delegate;
    UITextField * _familyNameField;
    UITextField * _givenNameField;
    double  _keyboardHeight;
    long long  _nameOrder;
    CNSharingProfileAudienceDataSource * _sharingAudienceDataSource;
    NSLayoutConstraint * _tableViewHeightConstraint;
    id  _traitCollectionChangeToken;
}

@property (nonatomic, retain) OBBoldTrayButton *confirmButton;
@property (nonatomic, retain) CNMutableContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNSharingProfileOnboardingAudienceControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UITextField *familyNameField;
@property (nonatomic, retain) UITextField *givenNameField;
@property (readonly) unsigned long long hash;
@property (nonatomic) double keyboardHeight;
@property (nonatomic) long long nameOrder;
@property (nonatomic, retain) CNSharingProfileAudienceDataSource *sharingAudienceDataSource;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSLayoutConstraint *tableViewHeightConstraint;
@property (nonatomic, retain) id traitCollectionChangeToken;

+ (id)descriptorForRequiredKeys;
+ (id)headerText;

- (void).cxx_destruct;
- (id)cellForNameInTableView:(id)arg1;
- (id)confirmButton;
- (id)confirmButtonTitle;
- (id)contact;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)familyNameDidChange:(id)arg1;
- (id)familyNameField;
- (void)givenNameDidChange:(id)arg1;
- (id)givenNameField;
- (void)handleConfirmButtonTapped:(id)arg1;
- (id)initWithContact:(id)arg1 selectedSharingAudience:(unsigned long long)arg2;
- (double)keyboardHeight;
- (long long)nameOrder;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFamilyNameField:(id)arg1;
- (void)setGivenNameField:(id)arg1;
- (void)setKeyboardHeight:(double)arg1;
- (void)setNameOrder:(long long)arg1;
- (void)setSharingAudienceDataSource:(id)arg1;
- (void)setTableViewHeightConstraint:(id)arg1;
- (void)setTraitCollectionChangeToken:(id)arg1;
- (id)sharingAudienceDataSource;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableViewHeightConstraint;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)traitCollectionChangeToken;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConfirmButtonEnabledState;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
