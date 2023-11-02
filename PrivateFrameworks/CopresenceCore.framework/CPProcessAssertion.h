
@interface CPProcessAssertion : NSObject {
    NSString * _bundleIdentifier;
    BKSProcessAssertion * _processAssertion;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, retain) BKSProcessAssertion *processAssertion;

+ (id)processAssertionNameForBundleIdentifier:(id)arg1;
+ (id)processAssertionWithBundleIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)acquireWithCompletionHandler:(id /* block */)arg1;
- (id)bundleIdentifier;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)processAssertion;
- (void)setProcessAssertion:(id)arg1;

@end
