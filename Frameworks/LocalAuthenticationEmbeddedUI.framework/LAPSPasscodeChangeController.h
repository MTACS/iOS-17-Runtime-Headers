
@interface LAPSPasscodeChangeController : NSObject <LAPSPasscodeChangeController, LAPSPasscodeChangeUIDelegate> {
    id /* block */  _handler;
    <LAPSPasscodeChangeSystem> * _system;
    <LAPSPasscodeChangeUI> * _ui;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_checkCanChangePasscodeWithCompletion:(id /* block */)arg1;
- (void)_fetchNewPasscode:(id)arg1 completion:(id /* block */)arg2;
- (void)_fetchOldPasscode:(id)arg1 completion:(id /* block */)arg2;
- (void)_notifyCompletionWithPasscode:(id)arg1 error:(id)arg2;
- (void)_runWithCompletion:(id /* block */)arg1;
- (void)cancel;
- (id)initWithSystem:(id)arg1 ui:(id)arg2;
- (void)passcodeRecoveryUI:(id)arg1 verifyNewPasscode:(id)arg2 completion:(id /* block */)arg3;
- (void)passcodeRecoveryUI:(id)arg1 verifyPasscode:(id)arg2 completion:(id /* block */)arg3;
- (void)startWithCompletion:(id /* block */)arg1;

@end
