
@interface HAPPowerManager : NSObject <HMFLogging> {
    NSMapTable * _delegatesMap;
    unsigned int  _systemPowerMgr;
    unsigned int  _systemPowerNotifier;
    struct IONotificationPort { } * _systemPowerPort;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSMapTable *delegatesMap;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int systemPowerMgr;
@property (nonatomic, readonly) unsigned int systemPowerNotifier;
@property (nonatomic, readonly) struct IONotificationPort { }*systemPowerPort;

+ (id)logCategory;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)deRegisterFromSleepWake:(id)arg1;
- (void)dealloc;
- (id)delegatesMap;
- (id)init;
- (void)registerForSleepWake:(id)arg1 queue:(id)arg2;
- (void)setDelegatesMap:(id)arg1;
- (void)systemPowerChanged:(unsigned int)arg1 notificationID:(void*)arg2;
- (unsigned int)systemPowerMgr;
- (unsigned int)systemPowerNotifier;
- (struct IONotificationPort { }*)systemPowerPort;

@end
