
@interface _HMAccessoryProfile : NSObject <HMFMessageReceiver, HMObjectMerge, NSSecureCoding> {
    HMAccessory * _accessory;
    NSString * _assistantIdentifier;
    _HMContext * _context;
    HMHome * _home;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSUUID * _profileUniqueIdentifier;
    NSArray * _services;
    NSUUID * _uniqueIdentifier;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, copy) NSString *assistantIdentifier;
@property (nonatomic, readonly) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly, copy) NSUUID *profileUniqueIdentifier;
@property (nonatomic, readonly) NSArray *services;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 accessory:(id)arg2;
- (void)_recomputeAssistantIdentifier;
- (void)_registerNotificationHandlers;
- (void)_unconfigure;
- (void)_unconfigureContext;
- (id)accessory;
- (id)assistantIdentifier;
- (id)context;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)handleRuntimeStateUpdate:(id)arg1;
- (unsigned long long)hash;
- (id)home;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 services:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)mergeFromNewObject:(id)arg1;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)profileUniqueIdentifier;
- (void)recomputeAssistantIdentifier;
- (id)services;
- (void)setAssistantIdentifier:(id)arg1;
- (id)uniqueIdentifier;

@end
