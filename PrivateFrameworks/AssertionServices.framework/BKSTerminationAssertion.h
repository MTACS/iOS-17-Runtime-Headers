
@interface BKSTerminationAssertion : BKSAssertion {
    NSString * _bundleIdentifier;
    BKSTerminationContext * _context;
    unsigned long long  _efficacy;
}

@property (nonatomic, readonly, copy) BKSTerminationContext *context;
@property (nonatomic, readonly) unsigned long long efficacy;
@property (nonatomic, readonly, copy) NSString *targetBundleIdentifier;

- (void).cxx_destruct;
- (unsigned long long)_bksErrorForRBSRequestError:(unsigned long long)arg1;
- (bool)acquire;
- (id)context;
- (unsigned long long)efficacy;
- (id)initWithBundleIdentifier:(id)arg1 efficacy:(unsigned long long)arg2 name:(id)arg3 context:(id)arg4 withHandler:(id /* block */)arg5;
- (id)initWithBundleIdentifier:(id)arg1 efficacy:(unsigned long long)arg2 name:(id)arg3 withHandler:(id /* block */)arg4;
- (void)invalidate;
- (id)targetBundleIdentifier;

@end
