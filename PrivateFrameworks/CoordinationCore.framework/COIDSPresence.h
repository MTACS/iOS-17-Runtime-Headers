
@interface COIDSPresence : NSObject <SKPresenceDelegate> {
    NSMutableSet * _devices;
    NSMapTable * _observers;
    bool  _presenceAsserted;
    SKPresence * _presenceChannel;
    SKPresencePayload * _presencePayload;
    unsigned long long  _retryAttempts;
    NSObject<OS_dispatch_source> * _retryTimer;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableSet *devices;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) NSMapTable *observers;
@property (nonatomic) bool presenceAsserted;
@property (nonatomic, readonly, retain) SKPresence *presenceChannel;
@property (nonatomic, readonly) SKPresencePayload *presencePayload;
@property (nonatomic) unsigned long long retryAttempts;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *retryTimer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)presenceForMesh:(id)arg1;

- (void).cxx_destruct;
- (void)_informObserver:(id)arg1 aboutRecord:(id)arg2 added:(bool)arg3;
- (void)_informObserversAboutDevice:(id)arg1 added:(bool)arg2;
- (id)_recordForDevice:(id)arg1;
- (void)_retrainSubscriptionWithRetryCounter:(unsigned long long)arg1;
- (void)_start;
- (void)_synchronizeInitiate;
- (void)_synchronizePresence:(bool)arg1;
- (void)_usersChangedInHome:(id)arg1;
- (void)_usersChangedInHomeNotification:(id)arg1;
- (void)addObserver:(id)arg1 queue:(id)arg2;
- (id)devices;
- (id)identifier;
- (id)initWithPresenceProvider:(id /* block */)arg1;
- (id)observers;
- (bool)presenceAsserted;
- (id)presenceChannel;
- (id)presencePayload;
- (void)presentDevicesChangedForPresence:(id)arg1;
- (void)removeObserver:(id)arg1;
- (unsigned long long)retryAttempts;
- (id)retryTimer;
- (void)setDevices:(id)arg1;
- (void)setPresenceAsserted:(bool)arg1;
- (void)setRetryAttempts:(unsigned long long)arg1;
- (void)setRetryTimer:(id)arg1;
- (id)workQueue;

@end
