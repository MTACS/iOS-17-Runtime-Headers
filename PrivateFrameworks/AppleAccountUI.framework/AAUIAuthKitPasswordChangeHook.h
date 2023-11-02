
@interface AAUIAuthKitPasswordChangeHook : NSObject <RUIServerHook, RUITextFieldChangeObserver> {
    ACAccount * _appleAccount;
    NSString * _newPassword;
    RUITableViewRow * _newPasswordRow;
    NSString * _oldPassword;
    RUITableViewRow * _oldPasswordRow;
    <RUIServerHookDelegate> * delegate;
}

@property (nonatomic, retain) ACAccount *appleAccount;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RUIServerHookDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) RUIObjectModel *objectModel;
@property (nonatomic, retain) RUIServerHookResponse *serverHookResponse;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleChangeForObjectModel:(id)arg1 completion:(id /* block */)arg2;
- (void)_harvestDataFromServerHTTPResponse:(id)arg1;
- (id)_tableViewRowWithID:(id)arg1 inObjectModel:(id)arg2;
- (void)_updateiCloudAccountWithCompletion:(id /* block */)arg1;
- (id)appleAccount;
- (id)delegate;
- (void)harvestDataFromResponse:(id)arg1;
- (id)initWithAltDSID:(id)arg1;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(id /* block */)arg4;
- (void)processObjectModel:(id)arg1 completion:(id /* block */)arg2;
- (void)setAppleAccount:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldMatchElement:(id)arg1;
- (bool)shouldMatchModel:(id)arg1;
- (void)textFieldEditingDidEnd:(id)arg1;

@end
