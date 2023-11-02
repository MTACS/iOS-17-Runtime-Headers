
@interface CoreIDVUI.CIDVUIInternalBiometricReplacementFlowManager : CoreIDVUI.CIDVUIInternalBiometricFlowManager {
    void completion;
}

- (void).cxx_destruct;
- (void)beginBiometricReplacementForTarget:(long long)arg1 withAuthHandler:(id /* block */)arg2 andCompletionHandler:(id /* block */)arg3;
- (id)init;

@end
