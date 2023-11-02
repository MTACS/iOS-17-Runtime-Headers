
@interface ATXHistogramBundleIdTable : ATXHistogramTable <ATXBundleIdRemovableProtocol>

+ (id)sharedInstance;
+ (void)stopUsingTemporarySharedInstance;
+ (void)useTemporarySharedInstance:(id)arg1;

- (id)initWithDatastore:(id)arg1;
- (id)permutationFrom:(id)arg1;
- (void)removeBundleIds:(id)arg1;

@end
