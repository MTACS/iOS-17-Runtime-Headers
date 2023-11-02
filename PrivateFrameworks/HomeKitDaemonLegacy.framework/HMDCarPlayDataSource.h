
@interface HMDCarPlayDataSource : HMFObject <HMDCarPlayDataSource>

- (bool)synchronouslyFetchIsCarPlayConnectedStatus;
- (bool)synchronouslyFetchIsCarPlayConnectedWirelessly;

@end
