
@interface HMBulletinBoardNotificationServiceGroup : NSObject <HMFLogging, HMFMessageReceiver, HMObjectMerge, NSSecureCoding> {
    NSSet * _associatedServiceUUIDs;
    NSArray * _associatedServices;
    HMBulletinBoardNotification * _bulletinBoardNotification;
    NSSet * _cameraProfileUUIDs;
    NSArray * _cameraProfiles;
    _HMContext * _context;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _logID;
    NSUUID * _targetUUID;
    NSUUID * _uniqueIdentifier;
}

@property (nonatomic, retain) NSSet *associatedServiceUUIDs;
@property (nonatomic, retain) NSArray *associatedServices;
@property (nonatomic, readonly) HMBulletinBoardNotification *bulletinBoardNotification;
@property (nonatomic, retain) NSSet *cameraProfileUUIDs;
@property (nonatomic, retain) NSArray *cameraProfiles;
@property (nonatomic, retain) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *logID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *targetUUID;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1;
- (void)_callServiceGroupUpdate;
- (void)_findObjects;
- (void)_handleBulletinBoardNotificationServiceGroupUpdateNotification:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)_requestServiceGroup;
- (void)_unconfigure;
- (void)_unconfigureContext;
- (id)associatedServiceUUIDs;
- (id)associatedServices;
- (id)bulletinBoardNotification;
- (id)cameraProfileUUIDs;
- (id)cameraProfiles;
- (id)context;
- (void)encodeWithCoder:(id)arg1;
- (void)handleConfigureNotification:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)logID;
- (id)logIdentifier;
- (bool)mergeFromNewObject:(id)arg1;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)setAssociatedServiceUUIDs:(id)arg1;
- (void)setAssociatedServices:(id)arg1;
- (void)setCameraProfileUUIDs:(id)arg1;
- (void)setCameraProfiles:(id)arg1;
- (void)setContext:(id)arg1;
- (id)targetUUID;
- (id)uniqueIdentifier;

@end
