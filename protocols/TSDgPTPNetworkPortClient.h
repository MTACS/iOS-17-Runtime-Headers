
@protocol TSDgPTPNetworkPortClient <NSObject>

@optional

- (void)didAnnounceTimeoutForPort:(TSDgPTPNetworkPort *)arg1;
- (void)didChangeASCapable:(bool)arg1 forPort:(TSDgPTPNetworkPort *)arg2;
- (void)didChangeAdministrativeEnable:(bool)arg1 forPort:(TSDgPTPNetworkPort *)arg2;
- (void)didSyncTimeoutForPort:(TSDgPTPNetworkPort *)arg1;
- (void)didSyncTimeoutWithMean:(long long)arg1 median:(long long)arg2 standardDeviation:(unsigned long long)arg3 minimum:(long long)arg4 maximum:(long long)arg5 numberOfSamples:(unsigned int)arg6 forPort:(TSDgPTPNetworkPort *)arg7;
- (void)didTerminateServiceForPort:(TSDgPTPNetworkPort *)arg1;
- (void)didTimeoutOnMACLookupForPort:(TSDgPTPNetworkPort *)arg1;

@end
