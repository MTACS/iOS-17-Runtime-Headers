
@interface TSKernelClock : TSClock {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _clientLock;
    NSPointerArray * _clients;
    TSDCKernelClock * _implDC;
    TSXKernelClock * _implXPC;
    id /* block */  _interruptionHandler;
}

@property (nonatomic, copy) id /* block */ interruptionHandler;

+ (id)availableKernelClockIdentifiers;
+ (id)clockNameForClockIdentifier:(unsigned long long)arg1;
+ (id)diagnosticDescriptionForInfo:(id)arg1 withIndent:(id)arg2;
+ (id)keyPathsForValuesAffectingClockName;
+ (id)keyPathsForValuesAffectingHostRateRatio;
+ (id)keyPathsforvaluesaffectingLockState;

- (void).cxx_destruct;
- (void)addClient:(id)arg1;
- (id)clockName;
- (unsigned long long)convertFromDomainIntervalToMachAbsoluteInterval:(unsigned long long)arg1;
- (unsigned long long)convertFromDomainIntervalToTimeSyncTimeInterval:(unsigned long long)arg1;
- (bool)convertFromDomainTime:(unsigned long long*)arg1 toMachAbsoluteTime:(unsigned long long*)arg2 withCount:(unsigned int)arg3;
- (bool)convertFromDomainTime:(unsigned long long*)arg1 toTimeSyncTime:(unsigned long long*)arg2 withCount:(unsigned int)arg3;
- (unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)arg1;
- (unsigned long long)convertFromDomainToTimeSyncTime:(unsigned long long)arg1;
- (unsigned long long)convertFromMachAbsoluteIntervalToDomainInterval:(unsigned long long)arg1;
- (bool)convertFromMachAbsoluteTime:(unsigned long long*)arg1 toDomainTime:(unsigned long long*)arg2 withCount:(unsigned int)arg3;
- (unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)arg1;
- (bool)convertFromTimeSyncTime:(unsigned long long*)arg1 toDomainTime:(unsigned long long*)arg2 withCount:(unsigned int)arg3;
- (unsigned long long)convertFromTimeSyncTimeIntervalToDomainInterval:(unsigned long long)arg1;
- (unsigned long long)convertFromTimeSyncToDomainTime:(unsigned long long)arg1;
- (void)dealloc;
- (void)didBeginClockGrandmasterChange;
- (void)didBeginClockGrandmasterChangeWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2;
- (void)didChangeClockMaster;
- (void)didChangeLocalPortWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2;
- (void)didChangeLockStateTo:(int)arg1;
- (void)didEndClockGrandmasterChange;
- (void)didEndClockGrandmasterChangeWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2;
- (void)didProcessSync;
- (void)didResetClock;
- (bool)getMachAbsoluteRateRatioNumerator:(unsigned long long*)arg1 denominator:(unsigned long long*)arg2 machAnchor:(unsigned long long*)arg3 andDomainAnchor:(unsigned long long*)arg4 withError:(id*)arg5;
- (bool)getTimeSyncTimeRateRatioNumerator:(unsigned long long*)arg1 denominator:(unsigned long long*)arg2 timeSyncAnchor:(unsigned long long*)arg3 andDomainAnchor:(unsigned long long*)arg4 withError:(id*)arg5;
- (double)hostRateRatio;
- (id)initWithClockIdentifier:(unsigned long long)arg1;
- (id)initWithImplDC:(id)arg1;
- (id)initWithImplXPC:(id)arg1;
- (void)interruptedConnection;
- (id /* block */)interruptionHandler;
- (int)lockState;
- (void)removeClient:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setPropertyUpdateQueue:(id)arg1;

@end
