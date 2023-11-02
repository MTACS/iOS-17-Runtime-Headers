
@interface SBKeyboardSuppressionManager : NSObject {
    NSMutableDictionary * _keyboardSuppressionAssertions;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_setKeyboardSuppressed:(bool)arg1 forReason:(id)arg2 withPredicate:(id /* block */)arg3 displayIdentity:(id)arg4;
- (id)acquireKeyboardSuppressionAssertionWithReason:(id)arg1 predicate:(id /* block */)arg2 displayIdentity:(id)arg3;
- (id)description;
- (id)init;
- (void)startSuppressingKeyboardWithReason:(id)arg1 predicate:(id /* block */)arg2 displayIdentity:(id)arg3;
- (void)stopSuppressingKeyboardWithReason:(id)arg1;

@end
