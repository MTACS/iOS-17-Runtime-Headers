
@protocol BLSHUserIdleProvidingDelegate <NSObject>

@required

- (void)idleProviderDidIdle:(id <BLSHUserIdleProviding>)arg1;
- (void)idleProviderDidUnidle:(id <BLSHUserIdleProviding>)arg1;

@end
