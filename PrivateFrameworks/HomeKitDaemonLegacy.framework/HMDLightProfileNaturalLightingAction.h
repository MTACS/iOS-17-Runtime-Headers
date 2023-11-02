
@interface HMDLightProfileNaturalLightingAction : HMDAction {
    HMDLightProfile * _lightProfile;
    NSUUID * _lightProfileUUID;
    NSArray * _lightServices;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _naturalLightingEnabled;
    NSNotificationCenter * _notificationCenter;
}

@property (retain) HMDLightProfile *lightProfile;
@property (readonly, copy) NSUUID *lightProfileUUID;
@property (nonatomic, retain) NSArray *lightServices;
@property (getter=isNaturalLightingEnabled) bool naturalLightingEnabled;
@property (readonly) NSNotificationCenter *notificationCenter;

+ (id)actionWithDictionaryRepresentation:(id)arg1 actionSet:(id)arg2;
+ (id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2;
+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)associatedAccessories;
- (id)attributeDescriptions;
- (void)configureWithHome:(id)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (void)handleAccessoryProfileAddedNotification:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithModelObject:(id)arg1 parent:(id)arg2 error:(id*)arg3;
- (id)initWithUUID:(id)arg1 lightProfileUUID:(id)arg2 naturalLightingEnabled:(bool)arg3 actionSet:(id)arg4;
- (id)initWithUUID:(id)arg1 lightProfileUUID:(id)arg2 naturalLightingEnabled:(bool)arg3 actionSet:(id)arg4 notificationCenter:(id)arg5;
- (bool)isActionForCharacteristic:(id)arg1;
- (bool)isAssociatedWithAccessory:(id)arg1;
- (bool)isCompatibleWithAction:(id)arg1;
- (bool)isNaturalLightingEnabled;
- (bool)isUnsecuringAction;
- (id)lightProfile;
- (id)lightProfileUUID;
- (id)lightServices;
- (Class)modelClass;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)notificationCenter;
- (void)setLightProfile:(id)arg1;
- (void)setLightServices:(id)arg1;
- (void)setNaturalLightingEnabled:(bool)arg1;
- (id)stateDump;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (unsigned long long)type;
- (id)writeRequestForTransitionStartWithLightProfile:(id)arg1 startDate:(id)arg2 type:(unsigned long long)arg3;

@end
