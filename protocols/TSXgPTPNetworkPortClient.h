
@protocol TSXgPTPNetworkPortClient <NSObject>

@optional

- (void)didAnnounceTimeoutForPort:(TSXgPTPNetworkPort *)arg1;
- (void)didChangeASCapable:(bool)arg1 forPort:(TSXgPTPNetworkPort *)arg2;
- (void)didChangeAdministrativeEnable:(bool)arg1 forPort:(TSXgPTPNetworkPort *)arg2;
- (void)didSyncTimeoutForPort:(TSXgPTPNetworkPort *)arg1;
- (void)didSyncTimeoutWithMean:(long long)arg1 median:(long long)arg2 standardDeviation:(unsigned long long)arg3 minimum:(long long)arg4 maximum:(long long)arg5 numberOfSamples:(unsigned int)arg6 forPort:(TSXgPTPNetworkPort *)arg7;
- (void)didTerminateServiceForPort:(TSXgPTPNetworkPort *)arg1;
- (void)didTimeoutOnMACLookupForPort:(TSXgPTPNetworkPort *)arg1;

@end
