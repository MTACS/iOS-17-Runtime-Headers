
@interface _HMAccessorySettingGroup : NSObject <HMFLogging, HMFMerging, HMFMessageReceiver, NSSecureCoding> {
    HMAccessorySettings * _accessorySettings;
    _HMContext * _context;
    <_HMAccessorySettingGroupDelegate> * _delegate;
    NSMutableSet * _groups;
    NSUUID * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
    NSMutableSet * _settings;
}

@property (nonatomic) HMAccessorySettings *accessorySettings;
@property (nonatomic, retain) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property <_HMAccessorySettingGroupDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *groups;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSArray *settings;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)shortDescription;
+ (id)supportedGroupsClasses;
+ (id)supportedSettingsClasses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_unconfigure;
- (void)_unconfigureContext;
- (id)accessorySettings;
- (void)addGroup:(id)arg1;
- (void)addSetting:(id)arg1;
- (id)clientQueue;
- (void)configureWithAccessorySettings:(id)arg1 context:(id)arg2;
- (id)context;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)groups;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)logIdentifier;
- (bool)mergeGroups:(id)arg1;
- (bool)mergeObject:(id)arg1;
- (bool)mergeSettings:(id)arg1;
- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)name;
- (void)notifyDelegateOfAddedGroup:(id)arg1;
- (void)notifyDelegateOfAddedSetting:(id)arg1;
- (void)notifyDelegateOfRemovedGroup:(id)arg1;
- (void)notifyDelegateOfRemovedSetting:(id)arg1;
- (void)removeGroup:(id)arg1;
- (void)removeSetting:(id)arg1;
- (void)resetGroups;
- (void)resetSettings;
- (void)setAccessorySettings:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)settings;
- (id)shortDescription;

@end
