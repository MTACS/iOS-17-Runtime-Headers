
@interface AAUIAuthKitAuthenticatonHook : NSObject <RUIServerHook> {
    NSString * _altDSID;
    NSString * _appleId;
    <RUIServerHookDelegate> * _delegate;
    RUIServerHookResponse * _serverHookResponse;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RUIServerHookDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) RUIObjectModel *objectModel;
@property (nonatomic, retain) RUIServerHookResponse *serverHookResponse;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_authContextFromAttributes:(id)arg1;
- (void)_reauthenticateWithServerAttributes:(id)arg1 completion:(id /* block */)arg2;
- (void)_updateResponseWithAuthResults:(id)arg1;
- (id)delegate;
- (id)initWithUsername:(id)arg1 altDSID:(id)arg2;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(id /* block */)arg4;
- (void)processObjectModel:(id)arg1 completion:(id /* block */)arg2;
- (id)serverHookResponse;
- (void)setDelegate:(id)arg1;
- (void)setServerHookResponse:(id)arg1;
- (bool)shouldMatchElement:(id)arg1;
- (bool)shouldMatchModel:(id)arg1;

@end
