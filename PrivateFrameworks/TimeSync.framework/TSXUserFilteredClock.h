
@interface TSXUserFilteredClock : TSXKernelClock

@property (getter=isAdaptive, nonatomic, readonly) bool adaptive;
@property (nonatomic, readonly) unsigned char filterShift;
@property (nonatomic, readonly) unsigned long long nominalDomainInterval;
@property (nonatomic, readonly) unsigned long long nominalMachInterval;

+ (id)clientProtocol;
+ (id)serverProtocol;

- (bool)addTimestampWithMachAbsolute:(unsigned long long)arg1 andDomainTime:(unsigned long long)arg2 error:(id*)arg3;
- (unsigned long long)convertFromDomainIntervalToMachAbsoluteInterval:(unsigned long long)arg1;
- (unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)arg1;
- (unsigned long long)convertFromMachAbsoluteIntervalToDomainInterval:(unsigned long long)arg1;
- (unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)arg1;
- (id)exportedObject;
- (unsigned char)filterShift;
- (bool)getMachAbsoluteRateRatioNumerator:(unsigned long long*)arg1 denominator:(unsigned long long*)arg2 machAnchor:(unsigned long long*)arg3 andDomainAnchor:(unsigned long long*)arg4 withError:(id*)arg5;
- (bool)isAdaptive;
- (unsigned long long)nominalDomainInterval;
- (unsigned long long)nominalMachInterval;
- (bool)resetFilterToNominal:(bool)arg1 error:(id*)arg2;
- (bool)resetSyncServiceWithError:(id*)arg1;

@end
