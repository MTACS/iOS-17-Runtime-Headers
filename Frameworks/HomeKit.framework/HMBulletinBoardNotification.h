
@interface HMBulletinBoardNotification : NSObject <HMFLogging, HMFMessageReceiver, HMObjectMerge, NSSecureCoding> {
    NSPredicate * _condition;
    _HMContext * _context;
    bool  _enabled;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _logID;
    HMBulletinBoardNotificationServiceGroup * _notificationServiceGroup;
    HMService * _service;
    NSUUID * _targetUUID;
    NSUUID * _uniqueIdentifier;
}

@property (nonatomic, retain) NSPredicate *condition;
@property (nonatomic, retain) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *logID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) HMBulletinBoardNotificationServiceGroup *notificationServiceGroup;
@property (nonatomic, readonly) HMService *service;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *targetUUID;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1;
- (void)_callBulletinBoardNotificationUpdatedDelegate;
- (void)_commitWithCompletionHandler:(id /* block */)arg1;
- (void)_handleBulletinBoardNotificationUpdateNotification:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)_unconfigure;
- (void)_unconfigureContext;
- (void)commitWithCompletionHandler:(id /* block */)arg1;
- (id)condition;
- (id)context;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnabled:(bool)arg1 condition:(id)arg2;
- (bool)isEnabled;
- (id)logID;
- (id)logIdentifier;
- (bool)mergeFromNewObject:(id)arg1;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)notificationServiceGroup;
- (id)service;
- (void)setCondition:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (id)targetUUID;
- (id)uniqueIdentifier;

@end
