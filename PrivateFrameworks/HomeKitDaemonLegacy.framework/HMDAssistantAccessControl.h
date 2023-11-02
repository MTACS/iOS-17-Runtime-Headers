
@interface HMDAssistantAccessControl : HMFObject <HMDBackingStoreObjectProtocol, HMFLogging, HMFObject, NSSecureCoding> {
    bool  _activityNotificationsEnabledForPersonalRequests;
    NSMutableSet * _appleMediaAccessories;
    unsigned long long  _cachedHash;
    NSObject<OS_dispatch_queue> * _clientQueue;
    bool  _enabled;
    NSMutableSet * _hapAccessoryIdentifiers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _options;
    HMDUser * _user;
}

@property (readonly, copy) NSArray *accessories;
@property (getter=areActivityNotificationsEnabledForPersonalRequests) bool activityNotificationsEnabledForPersonalRequests;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly) unsigned long long cachedHash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, readonly) bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly, copy) HMDAssistantAccessControlModel *model;
@property (readonly, copy) NSUUID *modelID;
@property unsigned long long options;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property HMDUser *user;

+ (id)accessControlWithMessage:(id)arg1 user:(id)arg2 currentAccessories:(id)arg3 error:(id*)arg4;
+ (bool)isAccessorySupported:(id)arg1;
+ (id)logCategory;
+ (id)modelIDNamespace;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessories;
- (void)addAccessory:(id)arg1;
- (bool)areActivityNotificationsEnabledForPersonalRequests;
- (id)assistantAccessControlModelWithRemovedAccessories:(id)arg1;
- (unsigned long long)cachedHash;
- (id)clientQueue;
- (void)configure;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)handleRemovedAccessory:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUser:(id)arg1;
- (id)initWithUser:(id)arg1 appleAccessories:(id)arg2 enabled:(bool)arg3;
- (id)initWithUser:(id)arg1 appleAccessories:(id)arg2 hapAccessoryIdentifiers:(id)arg3 enabled:(bool)arg4 activityNotificationsEnabledForPersonalRequests:(bool)arg5;
- (id)initWithUser:(id)arg1 model:(id)arg2;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (id)logIdentifier;
- (id)model;
- (id)modelID;
- (void)notifyClientOfUpdateWithMessage:(id)arg1;
- (unsigned long long)options;
- (id)propertyDescription;
- (void)removeAccessoriesAddedByOldController:(id)arg1;
- (void)removeAccessory:(id)arg1;
- (void)setActivityNotificationsEnabledForPersonalRequests:(bool)arg1;
- (void)setAppleMediaAccessories:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHapAccessoryIdentifiers:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setUser:(id)arg1;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;
- (id)user;

@end
