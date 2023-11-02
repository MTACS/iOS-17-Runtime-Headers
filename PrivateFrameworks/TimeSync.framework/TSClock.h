
@interface TSClock : NSObject {
    NSPointerArray * _clients;
    unsigned long long  _clockIdentifier;
    int  _lockState;
    NSObject<OS_dispatch_queue> * _notificationsQueue;
    NSObject<OS_dispatch_queue> * _propertyUpdateQueue;
}

@property (nonatomic, readonly, retain) NSMutableArray *clients;
@property (nonatomic) unsigned long long clockIdentifier;
@property (nonatomic, readonly, copy) NSString *clockName;
@property (nonatomic, readonly) double hostRateRatio;
@property (nonatomic) int lockState;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyUpdateQueue;

+ (unsigned long long)_mach_absolute_time;
+ (id)clockNameForClockIdentifier:(unsigned long long)arg1;
+ (id)diagnosticDescriptionForInfo:(id)arg1 withIndent:(id)arg2;

- (void).cxx_destruct;
- (void)addClient:(id)arg1;
- (id)clients;
- (unsigned long long)clockIdentifier;
- (id)clockName;
- (unsigned long long)convertFromDomainIntervalToMachAbsoluteInterval:(unsigned long long)arg1;
- (unsigned long long)convertFromDomainIntervalToTimeSyncTimeInterval:(unsigned long long)arg1;
- (bool)convertFromDomainTime:(unsigned long long*)arg1 toMachAbsoluteTime:(unsigned long long*)arg2 withCount:(unsigned int)arg3;
- (bool)convertFromDomainTime:(unsigned long long*)arg1 toTimeSyncTime:(unsigned long long*)arg2 withCount:(unsigned int)arg3;
- (unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)arg1;
- (unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)arg1 withFlags:(unsigned int*)arg2;
- (unsigned long long)convertFromDomainToTimeSyncTime:(unsigned long long)arg1;
- (unsigned long long)convertFromMachAbsoluteIntervalToDomainInterval:(unsigned long long)arg1;
- (bool)convertFromMachAbsoluteTime:(unsigned long long*)arg1 toDomainTime:(unsigned long long*)arg2 withCount:(unsigned int)arg3;
- (unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)arg1;
- (unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)arg1 withFlags:(unsigned int*)arg2;
- (bool)convertFromTimeSyncTime:(unsigned long long*)arg1 toDomainTime:(unsigned long long*)arg2 withCount:(unsigned int)arg3;
- (unsigned long long)convertFromTimeSyncTimeIntervalToDomainInterval:(unsigned long long)arg1;
- (unsigned long long)convertFromTimeSyncToDomainTime:(unsigned long long)arg1;
- (bool)getMachAbsoluteRateRatioNumerator:(unsigned long long*)arg1 denominator:(unsigned long long*)arg2 machAnchor:(unsigned long long*)arg3 andDomainAnchor:(unsigned long long*)arg4 withError:(id*)arg5;
- (bool)getRateRatioNumerator:(unsigned long long*)arg1 denominator:(unsigned long long*)arg2 machAnchor:(unsigned long long*)arg3 andDomainAnchor:(unsigned long long*)arg4 withError:(id*)arg5;
- (bool)getTimeSyncTimeRateRatioNumerator:(unsigned long long*)arg1 denominator:(unsigned long long*)arg2 timeSyncAnchor:(unsigned long long*)arg3 andDomainAnchor:(unsigned long long*)arg4 withError:(id*)arg5;
- (double)hostRateRatio;
- (id)init;
- (id)initWithClockIdentifier:(unsigned long long)arg1;
- (int)lockState;
- (id)notificationQueue;
- (id)propertyUpdateQueue;
- (void)removeClient:(id)arg1;
- (void)setClockIdentifier:(unsigned long long)arg1;
- (void)setLockState:(int)arg1;
- (void)setPropertyUpdateQueue:(id)arg1;

@end
