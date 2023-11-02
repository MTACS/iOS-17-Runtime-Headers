
@interface CDPUICustodianRecoveryController : NSObject {
    CDPContext * _context;
    AACustodianController * _custodianController;
    NSString * _recoverySession;
}

- (void).cxx_destruct;
- (void)_fetchRecoveryInfoWithCompletion:(id /* block */)arg1;
- (id)initWithContext:(id)arg1;
- (void)startRecoverySessionWithCompletion:(id /* block */)arg1;
- (void)validateRecoveryCode:(id)arg1 withCompletion:(id /* block */)arg2;

@end
