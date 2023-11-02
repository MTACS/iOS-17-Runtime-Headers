
@interface HMDHomePresenceMonitor : HMDHomePresenceBase <HMFLogging, NSSecureCoding> {
    HMDHomePresence * _currentHomePresence;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _presenceMap;
    NSString * _timerID;
}

@property (nonatomic, retain) HMDHomePresence *currentHomePresence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDHomePresenceUpdate *homePresenceUpdate;
@property (nonatomic, readonly, copy) NSDictionary *presenceMap;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *timerID;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addUser:(id)arg1;
- (void)_auditPresenceMap;
- (void)_evaluatePresence:(id)arg1 newUserPresence:(id)arg2 presenceStatusUpdateReason:(id)arg3;
- (void)_preparePresenceMap;
- (void)_reEvaluatePresenceWithReason:(id)arg1;
- (void)_registerForMessages;
- (void)_removeNonExistingUsers;
- (void)_startAuditTimer;
- (void)_updateUserPresence:(id)arg1 presenceAuth:(id)arg2 completion:(id /* block */)arg3;
- (void)addNewUser:(id)arg1;
- (void)configure:(id)arg1 messageDispatcher:(id)arg2;
- (id)currentHomePresence;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)handleHomeDataLoadedNotification:(id)arg1;
- (void)handleTimerFiredNotification:(id)arg1;
- (void)handleUserHomePresencePayload:(id)arg1 device:(id)arg2 user:(id)arg3 completion:(id /* block */)arg4;
- (void)handleUserPresenceUpdate:(id)arg1;
- (void)handleUserPresenceUpdateNotification:(id)arg1;
- (id)homePresenceUpdate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)presenceMap;
- (void)removeUser:(id)arg1;
- (void)residentChanged;
- (void)setCurrentHomePresence:(id)arg1;
- (id)timerID;

@end
