
@interface SBFAlwaysOnLiveRenderingAssertionWeakCollection : NSObject {
    NSHashTable * _assertions;
}

- (void).cxx_destruct;
- (void)addAssertion:(id)arg1;
- (long long)count;
- (id)init;
- (void)invalidateAll;
- (bool)isEmpty;
- (id)mostRecentlyCreatedValidAssertion;
- (void)removeAll;
- (void)removeAssertion:(id)arg1;

@end
