
@interface SGMBundleIdsMissingEntitlement : NSObject {
    PETScalarEventTracker * _tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 bundleId:(id)arg2 entitlement:(id)arg3;
- (id)tracker;

@end
