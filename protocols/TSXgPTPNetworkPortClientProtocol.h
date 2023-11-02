
@protocol TSXgPTPNetworkPortClientProtocol <TSXgPTPPortClientProtocol>

@required

- (void)announceTimeout;
- (void)changedASCapable:(bool)arg1;
- (void)changedAdministrativeEnable:(bool)arg1;
- (void)syncTimeoutWithMean:(long long)arg1 median:(long long)arg2 standardDeviation:(unsigned long long)arg3 minimum:(long long)arg4 maximum:(long long)arg5 numberOfSamples:(unsigned int)arg6;
- (void)terminatedService;
- (void)timedoutMACLookup;

@end
