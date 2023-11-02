
@protocol DDSAssetTracking <NSObject>

@required

- (void)addAssertionForQuery:(DDSAssetQuery *)arg1 policy:(DDSAssetPolicy *)arg2 assertionID:(NSString *)arg3 clientID:(NSString *)arg4;
- (NSArray *)allAssertions;
- (NSArray *)assertionDueForUpdateSinceDate:(NSDate *)arg1;
- (DDSAssertion *)assertionForQuery:(DDSAssetQuery *)arg1;
- (NSSet *)assertionIDsForClientID:(NSString *)arg1;
- (<DDSAssetTrackingDelegate> *)delegate;
- (void)didUpdateAssertion:(DDSAssertion *)arg1 atDate:(NSDate *)arg2;
- (void)modifyUpdateStatusForAssertion:(DDSAssertion *)arg1 toStatus:(long long)arg2;
- (void)removeAssertionWithID:(NSString *)arg1;
- (void)resetAssertionDueDatesForAssetType:(NSString *)arg1;
- (void)setDelegate:(id <DDSAssetTrackingDelegate>)arg1;
- (NSSet *)trackedAssetTypes;
- (long long)updateStatusForAssertion:(DDSAssertion *)arg1;

@end
