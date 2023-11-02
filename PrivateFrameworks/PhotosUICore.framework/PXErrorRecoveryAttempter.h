
@interface PXErrorRecoveryAttempter : NSObject {
    NSArray * _recoveryOptions;
}

@property (nonatomic, copy) NSArray *recoveryOptions;

- (void).cxx_destruct;
- (long long)_alertActionStyleForRecoveryOptionAtIndex:(unsigned long long)arg1;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void*)arg5;
- (id)recoveryOptions;
- (void)setRecoveryOptions:(id)arg1;

@end
