
@interface HMDBulletinBoardNotification : HMFObject <HMFDumpState, HMFLogging, HMFMessageReceiver, NSSecureCoding> {
    NSPredicate * _condition;
    bool  _enabled;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSUUID * _messageTargetUUID;
    HMFMessageDispatcher * _msgDispatcher;
    HMDBulletinBoardNotificationServiceGroup * _notificationServiceGroup;
    HMDService * _service;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSPredicate *condition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHome *home;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, retain) HMDBulletinBoardNotificationServiceGroup *notificationServiceGroup;
@property (nonatomic) HMDService *service;
@property (readonly) Class superclass;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;
+ (bool)supportsBulletinNotificationGroup:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_handleBulletinBoardNotificationCommitRequest:(id)arg1;
- (void)_updateLocalSettingsWithEnabled:(bool)arg1 condition:(id)arg2 forMessage:(id)arg3;
- (id)attributeDescriptions;
- (id)condition;
- (void)configureBulletinNotification;
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2;
- (void)dealloc;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (id)home;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithService:(id)arg1;
- (bool)isEnabled;
- (id)logIdentifier;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)notificationServiceGroup;
- (void)registerForCharacteristicNotifications;
- (void)registerNotificationHandlers;
- (id)service;
- (void)setCondition:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setNotificationServiceGroup:(id)arg1;
- (void)setService:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end
