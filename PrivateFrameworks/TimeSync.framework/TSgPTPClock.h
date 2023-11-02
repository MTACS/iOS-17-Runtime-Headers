
@interface TSgPTPClock : TSKernelClock {
    TSDCgPTPClock * _implDC;
    TSXgPTPClock * _implXPC;
}

@property (nonatomic, readonly) unsigned char clockAccuracy;
@property (nonatomic, readonly) unsigned char clockClass;
@property (nonatomic, readonly) unsigned long long clockIdentity;
@property (nonatomic, readonly) unsigned char clockPriority1;
@property (nonatomic, readonly) unsigned char clockPriority2;
@property (nonatomic, copy) NSArray *gptpPath;
@property (nonatomic) unsigned long long grandmasterIdentity;
@property (nonatomic, readonly, copy) NSArray *ports;

+ (id)clockNameForClockIdentifier:(unsigned long long)arg1;
+ (id)diagnosticDescriptionForInfo:(id)arg1 withIndent:(id)arg2;
+ (id)keyPathsForValuesAffectingClockAccuracy;
+ (id)keyPathsForValuesAffectingClockClass;
+ (id)keyPathsForValuesAffectingClockIdentity;
+ (id)keyPathsForValuesAffectingClockPriority1;
+ (id)keyPathsForValuesAffectingClockPriority2;
+ (id)keyPathsForValuesAffectingGptpPath;
+ (id)keyPathsForValuesAffectingGrandmasterIdentity;
+ (id)keyPathsForValuesAffectingPorts;

- (void).cxx_destruct;
- (bool)addLinkLayerPortOnInterfaceNamed:(id)arg1 allocatedPortNumber:(unsigned short*)arg2 error:(id*)arg3;
- (bool)addLinkLayerPortOnInterfaceNamed:(id)arg1 error:(id*)arg2;
- (bool)addReverseSyncOnInterfaceNamed:(id)arg1 withDomainNumner:(unsigned char)arg2 syncInterval:(unsigned int)arg3 error:(id*)arg4;
- (bool)addUnicastLinkLayerEtEPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 allocatedPortNumber:(unsigned short*)arg3 error:(id*)arg4;
- (bool)addUnicastLinkLayerEtEPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 error:(id*)arg3;
- (bool)addUnicastLinkLayerPtPPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 allocatedPortNumber:(unsigned short*)arg3 error:(id*)arg4;
- (bool)addUnicastLinkLayerPtPPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 error:(id*)arg3;
- (bool)addUnicastUDPv4EtEPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned int)arg2 allocatedPortNumber:(unsigned short*)arg3 error:(id*)arg4;
- (bool)addUnicastUDPv4EtEPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned int)arg2 error:(id*)arg3;
- (bool)addUnicastUDPv4PtPPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned int)arg2 allocatedPortNumber:(unsigned short*)arg3 error:(id*)arg4;
- (bool)addUnicastUDPv4PtPPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned int)arg2 error:(id*)arg3;
- (bool)addUnicastUDPv6EtEPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 allocatedPortNumber:(unsigned short*)arg3 error:(id*)arg4;
- (bool)addUnicastUDPv6EtEPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 error:(id*)arg3;
- (bool)addUnicastUDPv6PtPPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 allocatedPortNumber:(unsigned short*)arg3 error:(id*)arg4;
- (bool)addUnicastUDPv6PtPPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 error:(id*)arg3;
- (unsigned char)clockAccuracy;
- (unsigned char)clockClass;
- (unsigned long long)clockIdentity;
- (unsigned char)clockPriority1;
- (unsigned char)clockPriority2;
- (unsigned long long)convertFrom128BitgPTPTimeToMachAbsoluteTime:(struct { unsigned long long x1; unsigned long long x2; })arg1 grandmasterUsed:(unsigned long long*)arg2 portNumber:(unsigned short*)arg3;
- (unsigned long long)convertFrom128BitgPTPTimeToTimeSyncTime:(struct { unsigned long long x1; unsigned long long x2; })arg1 grandmasterUsed:(unsigned long long*)arg2 portNumber:(unsigned short*)arg3;
- (bool)convertFrom32BitASTime:(unsigned int*)arg1 toMachAbsoluteTime:(unsigned long long*)arg2 withCount:(unsigned int)arg3;
- (bool)convertFrom32BitASTime:(unsigned int*)arg1 toTimeSyncTime:(unsigned long long*)arg2 withCount:(unsigned int)arg3;
- (unsigned long long)convertFrom32BitASToMachAbsoluteTime:(unsigned int)arg1;
- (unsigned long long)convertFrom32BitASToMachAbsoluteTime:(unsigned int)arg1 withFlags:(unsigned int*)arg2;
- (unsigned long long)convertFrom32BitASToTimeSyncTime:(unsigned int)arg1;
- (unsigned long long)convertFromDomainTimeToTimeSyncTime:(unsigned long long)arg1 grandmasterUsed:(unsigned long long*)arg2 portNumber:(unsigned short*)arg3;
- (unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)arg1 grandmasterUsed:(unsigned long long*)arg2 portNumber:(unsigned short*)arg3;
- (struct { unsigned long long x1; unsigned long long x2; })convertFromMachAbsoluteTo128BitgPTPTime:(unsigned long long)arg1 grandmasterUsed:(unsigned long long*)arg2 portNumber:(unsigned short*)arg3;
- (unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)arg1 grandmasterUsed:(unsigned long long*)arg2;
- (unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)arg1 grandmasterUsed:(unsigned long long*)arg2 portNumber:(unsigned short*)arg3;
- (struct { unsigned long long x1; unsigned long long x2; })convertFromTimeSyncTimeTo128BitgPTPTime:(unsigned long long)arg1 grandmasterUsed:(unsigned long long*)arg2 portNumber:(unsigned short*)arg3;
- (unsigned long long)convertFromTimeSyncTimeToDomainTime:(unsigned long long)arg1 grandmasterUsed:(unsigned long long*)arg2 portNumber:(unsigned short*)arg3;
- (void)dealloc;
- (id)gPTPTimeFromMachAbsoluteTime:(unsigned long long)arg1;
- (id)gPTPTimeFromTimeSyncTime:(unsigned long long)arg1;
- (bool)getMachAbsoluteRateRatioNumerator:(unsigned long long*)arg1 denominator:(unsigned long long*)arg2 machAnchor:(unsigned long long*)arg3 andDomainAnchor:(unsigned long long*)arg4 forGrandmasterIdentity:(unsigned long long*)arg5 portNumber:(unsigned short*)arg6 withError:(id*)arg7;
- (bool)getTimeSyncTimeRateRatioNumerator:(unsigned long long*)arg1 denominator:(unsigned long long*)arg2 timeSyncAnchor:(unsigned long long*)arg3 andDomainAnchor:(unsigned long long*)arg4 forGrandmasterIdentity:(unsigned long long*)arg5 portNumber:(unsigned short*)arg6 withError:(id*)arg7;
- (id)gptpPath;
- (unsigned long long)grandmasterIdentity;
- (id)initWithImplDC:(id)arg1;
- (id)initWithImplXPC:(id)arg1;
- (unsigned long long)machAbsoluteFromgPTPTime:(id)arg1;
- (id)portWithPortNumber:(unsigned short)arg1;
- (id)ports;
- (bool)removeLinkLayerPortFromInterfaceNamed:(id)arg1 error:(id*)arg2;
- (bool)removeReverseSyncFromInterfaceNamed:(id)arg1 withDomainNumner:(unsigned char)arg2 error:(id*)arg3;
- (bool)removeUnicastLinkLayerEtEPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 error:(id*)arg3;
- (bool)removeUnicastLinkLayerPtPPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 error:(id*)arg3;
- (bool)removeUnicastUDPv4EtEPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned int)arg2 error:(id*)arg3;
- (bool)removeUnicastUDPv4PtPPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned int)arg2 error:(id*)arg3;
- (bool)removeUnicastUDPv6EtEPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 error:(id*)arg3;
- (bool)removeUnicastUDPv6PtPPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 error:(id*)arg3;
- (unsigned long long)timeSyncTimeFromgPTPTime:(id)arg1;

@end
