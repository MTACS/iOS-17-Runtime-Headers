
@protocol HMDCarPlayDataSource

@required

- (bool)synchronouslyFetchIsCarPlayConnectedStatus;
- (bool)synchronouslyFetchIsCarPlayConnectedWirelessly;

@end
