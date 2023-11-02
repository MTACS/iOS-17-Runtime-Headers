
@interface AKPasswordGeneratorHook : NSObject <RUIServerHook> {
    <RUIServerHookDelegate> * _delegate;
    SFStrongPasswordGenerator * _passwordGenerator;
    RUIServerHookResponse * _serverHookResponse;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RUIServerHookDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) RUIObjectModel *objectModel;
@property (nonatomic, retain) SFStrongPasswordGenerator *passwordGenerator;
@property (nonatomic, retain) RUIServerHookResponse *serverHookResponse;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_autogeneratePasswordForObjectModel:(id)arg1 completion:(id /* block */)arg2;
- (id)_fetchAndPopulatePasswordRows:(id)arg1 objectModel:(id)arg2 password:(id)arg3;
- (id)_generatePasswordForAppWithAppID:(id)arg1 passwordRules:(id)arg2;
- (id)_tableViewRowWithID:(id)arg1 inObjectModel:(id)arg2;
- (id)delegate;
- (id)init;
- (id)passwordGenerator;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(id /* block */)arg4;
- (void)processObjectModel:(id)arg1 completion:(id /* block */)arg2;
- (id)serverHookResponse;
- (void)setDelegate:(id)arg1;
- (void)setPasswordGenerator:(id)arg1;
- (void)setServerHookResponse:(id)arg1;
- (bool)shouldMatchElement:(id)arg1;
- (bool)shouldMatchModel:(id)arg1;

@end
