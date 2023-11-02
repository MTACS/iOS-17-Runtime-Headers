
@interface AKFidoHook : NSObject <RUIServerHook> {
    ACAccount * _account;
    <RUIServerHookDelegate> * _delegate;
    RUIServerHookResponse * _serverHookResponse;
}

@property (nonatomic, retain) ACAccount *account;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RUIServerHookDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) RUIObjectModel *objectModel;
@property (nonatomic, retain) RUIServerHookResponse *serverHookResponse;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_isUserCancelError:(id)arg1;
- (void)_startFidoRegistrationWithAttributes:(id)arg1 completion:(id /* block */)arg2;
- (void)_startFidoVerificationWithAttributes:(id)arg1 completion:(id /* block */)arg2;
- (id)account;
- (id)delegate;
- (id)initWithAccount:(id)arg1;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(id /* block */)arg4;
- (void)processObjectModel:(id)arg1 completion:(id /* block */)arg2;
- (id)serverHookResponse;
- (void)setAccount:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setServerHookResponse:(id)arg1;
- (bool)shouldMatchElement:(id)arg1;
- (bool)shouldMatchModel:(id)arg1;

@end
