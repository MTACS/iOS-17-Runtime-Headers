
@interface AAUIBeneficiaryClaimNotificationHook : NSObject <AAUIServerHook> {
    <RUIServerHookDelegate> * _delegate;
    RUIObjectModel * _objectModel;
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
- (void)_beneficiaryContactNameForBeneficiaryID:(id)arg1 completion:(id /* block */)arg2;
- (id)delegate;
- (id)objectModel;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(id /* block */)arg4;
- (void)processObjectModel:(id)arg1 completion:(id /* block */)arg2;
- (id)serverHookResponse;
- (void)setDelegate:(id)arg1;
- (void)setObjectModel:(id)arg1;
- (void)setServerHookResponse:(id)arg1;
- (bool)shouldMatchElement:(id)arg1;
- (bool)shouldMatchModel:(id)arg1;

@end
