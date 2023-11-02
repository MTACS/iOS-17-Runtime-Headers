
@interface FPBlockRecoveryAttempter : NSObject {
    NSError * _expectedError;
    <FPXOperationService> * _fpxOperationService;
    id /* block */  _recoveryBlock;
}

@property (nonatomic) NSError *expectedError;

- (void).cxx_destruct;
- (bool)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (id)expectedError;
- (id)initWithBlock:(id /* block */)arg1 operationService:(id)arg2;
- (void)setExpectedError:(id)arg1;

@end
