
@interface TSUserFilteredClock : TSKernelClock {
    TSDCUserFilteredClock * _implDC;
    TSXUserFilteredClock * _implXPC;
}

@property (getter=isAdaptive, nonatomic, readonly) bool adaptive;
@property (nonatomic, readonly) unsigned char filterShift;
@property (nonatomic, readonly) unsigned long long nominalDomainInterval;
@property (nonatomic, readonly) unsigned long long nominalMachInterval;

+ (id)diagnosticDescriptionForInfo:(id)arg1 withIndent:(id)arg2;
+ (id)keyPathsForValuesAffectingAdaptive;
+ (id)keyPathsForValuesAffectingFilterShift;
+ (id)keyPathsForValuesAffectingNominalDomainInterval;
+ (id)keyPathsForValuesAffectingNominalMachInterval;

- (void).cxx_destruct;
- (bool)addTimestampWithMachAbsolute:(unsigned long long)arg1 andDomainTime:(unsigned long long)arg2 error:(id*)arg3;
- (unsigned char)filterShift;
- (id)initWithImplDC:(id)arg1;
- (id)initWithImplXPC:(id)arg1;
- (bool)isAdaptive;
- (unsigned long long)nominalDomainInterval;
- (unsigned long long)nominalMachInterval;
- (bool)resetFilterToNominal:(bool)arg1 error:(id*)arg2;
- (bool)resetSyncServiceWithError:(id*)arg1;
- (bool)waitTimeSyncTimeUpdate;

@end
