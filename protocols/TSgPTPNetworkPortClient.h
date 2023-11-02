
@protocol TSgPTPNetworkPortClient <NSObject>

@optional

- (void)didAnnounceTimeoutForPort:(TSgPTPNetworkPort *)arg1;
- (void)didChangeASCapable:(bool)arg1 forPort:(TSgPTPNetworkPort *)arg2;
- (void)didChangeAdministrativeEnable:(bool)arg1 forPort:(TSgPTPNetworkPort *)arg2;
- (void)didSyncTimeoutForPort:(TSgPTPNetworkPort *)arg1;
- (void)didSyncTimeoutWithMean:(long long)arg1 median:(long long)arg2 standardDeviation:(unsigned long long)arg3 minimum:(long long)arg4 maximum:(long long)arg5 numberOfSamples:(unsigned int)arg6 forPort:(TSgPTPNetworkPort *)arg7;
- (void)didTerminateServiceForPort:(TSgPTPNetworkPort *)arg1;
- (void)didTimeoutOnMACLookupForPort:(TSgPTPNetworkPort *)arg1;

@end
