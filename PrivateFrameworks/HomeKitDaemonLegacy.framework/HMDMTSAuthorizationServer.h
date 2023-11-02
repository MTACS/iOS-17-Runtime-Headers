
@interface HMDMTSAuthorizationServer : HMFObject <HMFLogging, MTSAuthorizationServerInterface> {
    HMDAppleAccountManager * _accountManager;
    id /* block */  _systemPreferenceReader;
    HMDUIDialogPresenter * _uiDialogPresenter;
}

@property (nonatomic, readonly) HMDAppleAccountManager *accountManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id /* block */ systemPreferenceReader;
@property (nonatomic, readonly) HMDUIDialogPresenter *uiDialogPresenter;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)accountManager;
- (void)checkRestrictedCharacteristicsAccessAllowedWithCompletionHandler:(id /* block */)arg1;
- (id)initWithAccountManager:(id)arg1;
- (id)initWithUIDialogPresenter:(id)arg1 accountManager:(id)arg2 systemPreferenceReader:(id /* block */)arg3;
- (void)showRestrictedCharacteristicsAccessWarningAlert;
- (id /* block */)systemPreferenceReader;
- (id)uiDialogPresenter;

@end
