
@protocol HFHomeManagerObserver <HMHomeManagerDelegatePrivate>

@optional

- (void)homeKitDispatcher:(HFHomeKitDispatcher *)arg1 manager:(HMHomeManager *)arg2 didChangeHome:(HMHome *)arg3;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateLocationSensingAvailability:(bool)arg2;
- (void)homeManagerDidFinishInitialDatabaseLoad:(HMHomeManager *)arg1;
- (void)homeManagerDidFinishUnknownChange:(HMHomeManager *)arg1;

@end
