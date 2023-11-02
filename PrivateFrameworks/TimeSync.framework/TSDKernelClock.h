
@interface TSDKernelClock : NSObject {
    unsigned long long  _asyncCallbackRefcon;
    NSPointerArray * _clients;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _clientsLock;
    unsigned long long  _clockIdentifier;
    IODConnection * _connection;
    IOKInterestNotification * _interestNotification;
    int  _lockState;
    IOKNotificationPort * _notificationPort;
    NSObject<OS_dispatch_queue> * _notificationsQueue;
    NSObject<OS_dispatch_queue> * _propertyUpdateQueue;
    IOKService * _service;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _serviceLock;
}

@property (nonatomic) unsigned long long clockIdentifier;
@property (nonatomic, readonly, copy) NSString *clockName;
@property (nonatomic, readonly) IODConnection *connection;
@property (nonatomic, readonly) double hostRateRatio;
@property (nonatomic) int lockState;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyUpdateQueue;
@property (nonatomic, readonly) IOKService *service;

+ (id)availableKernelClockIdentifiers;
+ (id)clockNameForClockIdentifier:(unsigned long long)arg1;
+ (id)diagnosticInfoForClockIdentifier:(unsigned long long)arg1;
+ (id)diagnosticInfoForService:(id)arg1;
+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)arg1;
+ (id)serviceForClockIdentifier:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_handleInterestNotification:(unsigned int)arg1 withArgument:(void*)arg2;
- (void)_handleNotification:(unsigned int)arg1 withArg1:(unsigned long long)arg2 andArg2:(unsigned long long)arg3;
- (void)_handleNotification:(unsigned int)arg1 withArgs:(unsigned long long*)arg2 ofCount:(unsigned int)arg3;
- (void)_handleRefreshConnection;
- (int)_lockState;
- (void)_refreshLockStateOnNotificationQueue;
- (void)addClient:(id)arg1;
- (id)clients;
- (unsigned long long)clockIdentifier;
- (id)clockName;
- (id)connection;
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
- (bool)deregisterAsyncCallback;
- (void)finalizeNotifications;
- (bool)getMachAbsoluteRateRatioNumerator:(unsigned long long*)arg1 denominator:(unsigned long long*)arg2 machAnchor:(unsigned long long*)arg3 andDomainAnchor:(unsigned long long*)arg4 withError:(id*)arg5;
- (bool)getTimeSyncTimeRateRatioNumerator:(unsigned long long*)arg1 denominator:(unsigned long long*)arg2 timeSyncAnchor:(unsigned long long*)arg3 andDomainAnchor:(unsigned long long*)arg4 withError:(id*)arg5;
- (double)hostRateRatio;
- (id)initWithClockIdentifier:(unsigned long long)arg1;
- (id)initWithClockIdentifier:(unsigned long long)arg1 pid:(int)arg2;
- (int)lockState;
- (id)notificationQueue;
- (id)propertyUpdateQueue;
- (bool)registerAsyncCallback;
- (void)removeClient:(id)arg1;
- (id)service;
- (void)setClockIdentifier:(unsigned long long)arg1;
- (void)setLockState:(int)arg1;
- (void)setPropertyUpdateQueue:(id)arg1;

@end
