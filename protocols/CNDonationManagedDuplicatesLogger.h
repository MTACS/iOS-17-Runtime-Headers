
@protocol CNDonationManagedDuplicatesLogger <NSObject>

@required

- (void)didFailRefreshingDuplicates:(NSString *)arg1;
- (void)didRefreshDuplicates;
- (void)didSkipRefreshDuplicates:(NSDate *)arg1;
- (void)managedDuplicateServiceCheckingIn;
- (void)managedDuplicateServiceCriteria:(NSObject<OS_xpc_object> *)arg1;
- (void)willRefreshDuplicates;

@end
