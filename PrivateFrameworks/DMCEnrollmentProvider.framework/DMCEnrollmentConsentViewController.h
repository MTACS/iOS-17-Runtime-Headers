
@interface DMCEnrollmentConsentViewController : DMCEnrollmentTemplateTableViewController {
    DMCEnrollmentConfirmationView * _confirmationView;
    <DMCEnrollmentConsentViewControllerDelegate> * _delegate;
    DMCEnrollmentTableViewPlatterCell * _infoCell;
    NSString * _orgName;
    MCProfile * _profile;
    NSNumber * _requiredAppID;
    NSString * _serverURL;
    NSString * _username;
}

@property (nonatomic, retain) DMCEnrollmentConfirmationView *confirmationView;
@property <DMCEnrollmentConsentViewControllerDelegate> *delegate;
@property (nonatomic, retain) DMCEnrollmentTableViewPlatterCell *infoCell;
@property (nonatomic, copy) NSString *orgName;
@property (nonatomic, retain) MCProfile *profile;
@property (nonatomic, retain) NSNumber *requiredAppID;
@property (nonatomic, copy) NSString *serverURL;
@property (nonatomic, copy) NSString *username;

- (void).cxx_destruct;
- (id)_cellDataForESSOBYODDisclosure;
- (id)_commonCellDataForRegularBYODDisclosure;
- (id)_platterCellDataForRegularADDEDisclosure;
- (id)_platterCellDataForRegularADUEDisclosure;
- (id)_platterCellDataWithImage:(id)arg1 text:(id)arg2;
- (id)_requiredAppCellData;
- (id)_serverURLWithoutHTTP:(id)arg1;
- (void)_setupManagementDetailsLinkTextForCell:(id)arg1;
- (id)confirmationView;
- (id)delegate;
- (id)infoCell;
- (id)initWithDelegate:(id)arg1 username:(id)arg2 profile:(id)arg3;
- (bool)isEqual:(id)arg1;
- (void)loadView;
- (id)orgName;
- (id)profile;
- (id)requiredAppID;
- (id)serverURL;
- (void)setConfirmationView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInfoCell:(id)arg1;
- (void)setOrgName:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setRequiredAppID:(id)arg1;
- (void)setServerURL:(id)arg1;
- (void)setUsername:(id)arg1;
- (void)updateContinueButtonStatus;
- (id)username;
- (void)viewWillAppear:(bool)arg1;

@end
