
@interface FBSApplicationTerminationAssertion : NSObject {
    BKSTerminationAssertion * _assertion;
    long long  _assertionState;
    NSString * _bundleID;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _reason;
}

@property (nonatomic, readonly) long long assertionState;
@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, readonly, copy) NSString *reason;

+ (id)_queue;

- (void).cxx_destruct;
- (long long)assertionState;
- (id)bundleID;
- (void)dealloc;
- (id)description;
- (id)initWithBundleID:(id)arg1 reason:(id)arg2 acquisitionHandler:(id /* block */)arg3;
- (void)invalidate;
- (id)reason;

@end
