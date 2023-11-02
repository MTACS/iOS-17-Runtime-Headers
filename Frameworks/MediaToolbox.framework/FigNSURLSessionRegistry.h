
@interface FigNSURLSessionRegistry : NSObject {
    NSMutableArray * _sessionArray;
    NSObject<OS_dispatch_queue> * _workQueue;
}

- (void)_checkForDoom:(id)arg1;
- (void)copySessionAndAssertionForClientBundleIdentifier:(id)arg1 clientPersonaIdentifier:(id)arg2 dispatchQueue:(id)arg3 outSession:(id*)arg4 outAssertion:(struct FigOpaqueAssertion {}**)arg5;
- (void)dealloc;
- (id)init;
- (void)releaseSession:(id)arg1;

@end
