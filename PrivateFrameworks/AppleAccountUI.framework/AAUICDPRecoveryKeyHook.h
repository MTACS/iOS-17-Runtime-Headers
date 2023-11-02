
@interface AAUICDPRecoveryKeyHook : NSObject <RUIServerHook> {
    <RUIServerHookDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RUIServerHookDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) RUIObjectModel *objectModel;
@property (nonatomic, retain) RUIServerHookResponse *serverHookResponse;
@property (readonly) Class superclass;

+ (id)helperWithPresenter:(id)arg1 forceInline:(bool)arg2;

- (void).cxx_destruct;
- (void)_deleteRecoveryKey:(id /* block */)arg1;
- (void)_generateRecoveryKeyWithType:(long long)arg1 attributes:(id)arg2 completion:(id /* block */)arg3;
- (bool)_shouldMatchAction:(id)arg1;
- (void)_verifyRecoveryKeyWithType:(long long)arg1 attributes:(id)arg2 completion:(id /* block */)arg3;
- (id)delegate;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(id /* block */)arg4;
- (void)processObjectModel:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (bool)shouldMatchElement:(id)arg1;
- (bool)shouldMatchModel:(id)arg1;

@end
