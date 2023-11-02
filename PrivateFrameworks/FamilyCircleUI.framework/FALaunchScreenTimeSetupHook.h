
@interface FALaunchScreenTimeSetupHook : NSObject <RUIServerHook> {
    <FAACAccountStoreProtocol> * _accountStore;
    <FASTChildSetupControllerProviderProtocol> * _childSetupControllerProvider;
    id /* block */  _completionAction;
    <RUIServerHookDelegate> * _delegate;
    NSDictionary * _ephemeralAuthResults;
    bool  _isChildDevice;
    <FAScreenTimeRequestProviderProtocol> * _screenTimeRequestProvider;
}

@property (nonatomic, retain) <FAACAccountStoreProtocol> *accountStore;
@property (nonatomic, retain) <FASTChildSetupControllerProviderProtocol> *childSetupControllerProvider;
@property (nonatomic, copy) id /* block */ completionAction;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RUIServerHookDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDictionary *ephemeralAuthResults;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isChildDevice;
@property (nonatomic, retain) RUIObjectModel *objectModel;
@property (nonatomic, retain) <FAScreenTimeRequestProviderProtocol> *screenTimeRequestProvider;
@property (nonatomic, retain) RUIServerHookResponse *serverHookResponse;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_enableScreentimeWithIntroductionModel:(id)arg1 account:(id)arg2 dsidNum:(id)arg3 completion:(id /* block */)arg4;
- (id)_extractAgeFromObjectModel:(id)arg1;
- (id)_extractNameFromObjectModel:(id)arg1;
- (void)_launchScreenTimeSettings;
- (void)_launchScreenTimeSetupForUser:(id)arg1 inObjectModel:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)accountStore;
- (id)childSetupControllerProvider;
- (id /* block */)completionAction;
- (id)delegate;
- (id)ephemeralAuthResults;
- (id)init;
- (id)initWithAccountStore:(id)arg1 screenTimeRequestProvider:(id)arg2 childSetupControllerProvider:(id)arg3;
- (bool)isChildDevice;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(id /* block */)arg4;
- (void)processObjectModel:(id)arg1 completion:(id /* block */)arg2;
- (id)screenTimeRequestProvider;
- (void)setAccountStore:(id)arg1;
- (void)setChildSetupControllerProvider:(id)arg1;
- (void)setCompletionAction:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEphemeralAuthResults:(id)arg1;
- (void)setIsChildDevice:(bool)arg1;
- (void)setScreenTimeRequestProvider:(id)arg1;
- (bool)shouldMatchElement:(id)arg1;
- (bool)shouldMatchModel:(id)arg1;

@end
