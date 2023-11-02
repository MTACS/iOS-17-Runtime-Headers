
@interface SAPhoneApplicationLauncher : NSObject <SAApplicationLauncher> {
    NSMutableDictionary * _assertionMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addAssertion:(id)arg1 forProcessId:(int)arg2;
- (void)cleanupInvalidAssertions;
- (id)init;
- (void)openApplicationInBackgroundWithBundleId:(id)arg1 withReason:(long long)arg2 completion:(id /* block */)arg3;

@end
