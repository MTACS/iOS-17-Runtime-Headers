
@interface DSShareLocationController : DSTableWelcomeController <CNContactPickerDelegate, DSController, UITableViewDataSource, UITableViewDelegate> {
    CNContactPickerViewController * _contactsViewController;
    <DSNavigationDelegate> * _delegate;
    FMFSession * _fmfSession;
    NSArray * _locationSharingTypeNames;
    CNContact * _selectedContact;
    long long  _selectedLocationSharingType;
}

@property (nonatomic, retain) CNContactPickerViewController *contactsViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DSNavigationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FMFSession *fmfSession;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *locationSharingTypeNames;
@property (nonatomic, retain) CNContact *selectedContact;
@property (nonatomic) long long selectedLocationSharingType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bestDefaultContactProperty;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (id)contactsViewController;
- (id)delegate;
- (id)endDateFromNowForOfferTimespan:(long long)arg1;
- (id)fmfHandleFromContactProperty:(id)arg1;
- (id)fmfHandlesFromContact:(id)arg1;
- (id)fmfSession;
- (id)init;
- (id)locationSharingTypeNames;
- (void)manageBoldButton;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)pickContact;
- (void)presentSharingFailedAlert;
- (id)selectedContact;
- (long long)selectedLocationSharingType;
- (void)setContactsViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFmfSession:(id)arg1;
- (void)setLocationSharingTypeNames:(id)arg1;
- (void)setSelectedContact:(id)arg1;
- (void)setSelectedLocationSharingType:(long long)arg1;
- (void)shareLocation;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
