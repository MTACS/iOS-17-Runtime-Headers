
@protocol SRAuthorizationStoreDelegate <NSObject>

@optional

- (void)authorizationStore:(SRAuthorizationStore *)arg1 didDetermineInitialAuthorizationValues:(NSDictionary *)arg2;
- (void)authorizationStore:(SRAuthorizationStore *)arg1 didUpdateAuthorizationsForBundleId:(NSString *)arg2 sensors:(NSSet *)arg3;

@end
