
@protocol HMHomeManagerDelegate <NSObject>

@optional

- (void)homeManager:(HMHomeManager *)arg1 didAddHome:(HMHome *)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didReceiveAddAccessoryRequest:(HMAddAccessoryRequest *)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didRemoveHome:(HMHome *)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateAuthorizationStatus:(unsigned long long)arg2;
- (void)homeManagerDidUpdateHomes:(HMHomeManager *)arg1;
- (void)homeManagerDidUpdatePrimaryHome:(HMHomeManager *)arg1;

@end
