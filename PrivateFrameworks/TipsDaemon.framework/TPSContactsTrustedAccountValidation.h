
@interface TPSContactsTrustedAccountValidation : TPSTargetingValidation {
    id /* block */  _completionHandler;
    bool  _desiredValue;
    ACAccount * _primaryAccount;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) bool desiredValue;
@property (nonatomic, retain) ACAccount *primaryAccount;

- (void).cxx_destruct;
- (void)_hasAssignmentForTrustedAccountType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (bool)_primaryAccountCanHaveTrustedAccountType:(unsigned long long)arg1;
- (id /* block */)completionHandler;
- (bool)desiredValue;
- (id)primaryAccount;
- (void)reportCompletionWithResult:(bool)arg1 error:(id)arg2;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDesiredValue:(bool)arg1;
- (void)setPrimaryAccount:(id)arg1;
- (void)validateBeneficiaryAssignmentWithCompletion:(id /* block */)arg1;
- (void)validateCustodianAssignmentWithCompletion:(id /* block */)arg1;
- (void)validateWithCompletion:(id /* block */)arg1;

@end
