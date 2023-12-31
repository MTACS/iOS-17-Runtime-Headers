
@interface GKRecoveryAttempter : NSObject {
    id /* block */  _attemptRecovery;
}

+ (id)recoveryAttempterUsingHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (bool)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void*)arg5;

@end
