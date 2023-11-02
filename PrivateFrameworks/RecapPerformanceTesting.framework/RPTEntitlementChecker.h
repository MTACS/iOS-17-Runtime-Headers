
@interface RPTEntitlementChecker : NSObject {
    LSBundleRecord * _bundleRecord;
}

@property (nonatomic, retain) LSBundleRecord *bundleRecord;

+ (id)checkerForCurrentProcess;

- (void).cxx_destruct;
- (id)bundleRecord;
- (bool)checkWithError:(out id*)arg1;
- (id)initWithBundleRecord:(id)arg1;
- (void)setBundleRecord:(id)arg1;

@end
