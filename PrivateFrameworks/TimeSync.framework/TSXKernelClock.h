
@interface TSXKernelClock : TSXAnonymousClient <TSXKernelClockClientProtocol> {
    TSKernelClock * _client;
    unsigned long long  _clockIdentifier;
    double  _hostRateRatio;
    int  _internalLockState;
    int  _lockState;
    NSObject<OS_dispatch_queue> * _propertyUpdateQueue;
    struct { 
        unsigned long long timeSyncTime; 
        unsigned long long domainTime; 
        unsigned long long timeSyncTimeInterval; 
        unsigned long long domainTimeInterval; 
    }  _timeInfo;
    TSClock * _translationClock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _updateLock;
    unsigned int  _validIndex;
}

@property (nonatomic) TSKernelClock *client;
@property (nonatomic) unsigned long long clockIdentifier;
@property (nonatomic, readonly, copy) NSString *clockName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double hostRateRatio;
@property (nonatomic) int lockState;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyUpdateQueue;
@property (readonly) Class superclass;

+ (id)clientProtocol;
+ (id)clockWithIdentifier:(unsigned long long)arg1;
+ (id)serverProtocol;

- (void).cxx_destruct;
- (void)_getInitialSyncInfo;
- (void)changedClockMaster;
- (id)client;
- (unsigned long long)clockIdentifier;
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
- (id)exportedObject;
- (bool)getClockIdentifier:(unsigned long long*)arg1;
- (bool)getMachAbsoluteRateRatioNumerator:(unsigned long long*)arg1 denominator:(unsigned long long*)arg2 machAnchor:(unsigned long long*)arg3 andDomainAnchor:(unsigned long long*)arg4 withError:(id*)arg5;
- (bool)getTimeSyncTimeRateRatioNumerator:(unsigned long long*)arg1 denominator:(unsigned long long*)arg2 timeSyncAnchor:(unsigned long long*)arg3 andDomainAnchor:(unsigned long long*)arg4 withError:(id*)arg5;
- (double)hostRateRatio;
- (id)initWithEndpoint:(id)arg1 clockIdentifier:(unsigned long long)arg2;
- (void)interruptedConnection;
- (void)invalidatedConnection;
- (int)lockState;
- (void)postLockStateChange:(int)arg1;
- (id)propertyUpdateQueue;
- (void)resetClock;
- (void)setClient:(id)arg1;
- (void)setClockIdentifier:(unsigned long long)arg1;
- (void)setHostRateRatio:(double)arg1;
- (void)setLockState:(int)arg1;
- (void)setPropertyUpdateQueue:(id)arg1;
- (void)updateLockState:(int)arg1;
- (void)updateTimeSyncTime:(unsigned long long)arg1 timeSyncInterval:(unsigned long long)arg2 domainTime:(unsigned long long)arg3 domainInterval:(unsigned long long)arg4;

@end
