
@interface TSXgPTPNetworkPortExported : NSObject <TSXgPTPNetworkPortClientProtocol> {
    TSXgPTPNetworkPort * _object;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) TSXgPTPNetworkPort *object;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)announceTimeout;
- (void)changedASCapable:(bool)arg1;
- (void)changedAdministrativeEnable:(bool)arg1;
- (id)object;
- (void)setObject:(id)arg1;
- (void)syncTimeoutWithMean:(long long)arg1 median:(long long)arg2 standardDeviation:(unsigned long long)arg3 minimum:(long long)arg4 maximum:(long long)arg5 numberOfSamples:(unsigned int)arg6;
- (void)terminatedService;
- (void)timedoutMACLookup;
- (void)updatedPortProperties:(id)arg1;

@end
