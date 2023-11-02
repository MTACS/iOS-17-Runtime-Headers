
@interface HMDPresenceEvent : HMDEvent <HMDHomeMessageReceiver, HMDTriggerEventProtocol, HMFDumpState, HMFLogging, NSSecureCoding> {
    HMPresenceEventActivation * _activation;
    bool  _currentStatus;
    HMDEventTriggerExecutionSession * _executionSession;
    <HMDFeaturesDataSource> * _featuresDataSource;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _presenceType;
    NSArray * _userUUIDs;
    NSDictionary * _users;
}

@property (nonatomic, readonly) HMPresenceEventActivation *activation;
@property (nonatomic, readonly) unsigned long long activationGranularity;
@property bool currentStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property HMDEventTriggerExecutionSession *executionSession;
@property (readonly) <HMDFeaturesDataSource> *featuresDataSource;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (retain) NSString *presenceType;
@property (readonly) Class superclass;
@property (copy) NSArray *userUUIDs;
@property (copy) NSDictionary *users;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_activate:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)_addUser:(id)arg1;
- (void)_evaluatePresenceEventForHomePresenceUpdate:(id)arg1;
- (bool)_evaluateWithHomePresence:(id)arg1 presenceType:(id)arg2 users:(id)arg3;
- (void)_handleHomePresenceUpdate:(id)arg1;
- (void)_handleUpdateRequest:(id)arg1;
- (id)_presenceTypeForClient;
- (void)_registerForMessages;
- (void)_removeAllUsers;
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)_updateUsers:(id)arg1 home:(id)arg2;
- (id)activation;
- (unsigned long long)activationGranularity;
- (id)analyticsPresenceEventData;
- (id)analyticsTriggerEventData;
- (bool)compatibleWithUser:(id)arg1;
- (void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3 delegate:(id)arg4;
- (id)createClientPayload;
- (id)createDaemonPayload;
- (id)createPayload;
- (id)createPresenceEventPayload:(bool)arg1;
- (bool)currentStatus;
- (void)dealloc;
- (id)description;
- (void)didEndExecutionSession:(id)arg1;
- (id)emptyModelObject;
- (void)encodeWithCoder:(id)arg1;
- (bool)evaluateWithHomePresence:(id)arg1;
- (bool)evaluateWithHomePresenceUpdate:(id)arg1 presenceType:(id)arg2;
- (bool)evaluateWithUserPresence:(id)arg1 presenceType:(id)arg2;
- (id)executionSession;
- (id)featuresDataSource;
- (void)handleRemovalOfUser:(id)arg1 transaction:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithModel:(id)arg1 home:(id)arg2;
- (id)initWithModel:(id)arg1 home:(id)arg2 featuresDataSource:(id)arg3;
- (bool)isActive;
- (bool)isCompatibleWithEvent:(id)arg1;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (id)presenceType;
- (void)setCurrentStatus:(bool)arg1;
- (void)setExecutionSession:(id)arg1;
- (void)setPresenceType:(id)arg1;
- (void)setUserUUIDs:(id)arg1;
- (void)setUsers:(id)arg1;
- (id)thisUser;
- (id)userUUIDs;
- (id)users;

@end
