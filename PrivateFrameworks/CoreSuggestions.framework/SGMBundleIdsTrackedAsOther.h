
@interface SGMBundleIdsTrackedAsOther : NSObject {
    PETScalarEventTracker * _tracker;
}

@property (nonatomic, readonly) PETScalarEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(unsigned long long)arg1 bundleId:(id)arg2;
- (id)tracker;

@end
