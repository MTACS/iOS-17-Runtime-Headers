
@interface HMTrigger : NSObject <HFHomeKitObject, HFStateDumpBuildable, HFTriggerProtocol, HMFLogging, HMFMessageReceiver, HMObjectMerge, HMTriggerConfiguration, NSSecureCoding> {
    NSString * _assistantIdentifier;
    NSString * _configuredName;
    _HMContext * _context;
    HMMutableArray * _currentActionSets;
    bool  _enabled;
    HMHome * _home;
    NSDate * _lastFireDate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
    HMUser * _owner;
    HMDevice * _ownerDevice;
    HMTriggerPolicy * _policy;
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
}

@property (nonatomic, readonly, copy) NSArray *actionSets;
@property (nonatomic, copy) NSString *assistantIdentifier;
@property (nonatomic, copy) NSString *configuredName;
@property (nonatomic, readonly) _HMContext *context;
@property (nonatomic, readonly) HMUser *creator;
@property (nonatomic, readonly) HMDevice *creatorDevice;
@property (nonatomic, retain) HMMutableArray *currentActionSets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *hf_anonymousActions;
@property (nonatomic, readonly) bool hf_isBuilder;
@property (nonatomic, readonly) bool hf_isShortcutOwned;
@property (nonatomic, readonly) bool hf_requiresConfirmationToRun;
@property (nonatomic) HMHome *home;
@property (nonatomic, copy) NSDate *lastFireDate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) HMUser *owner;
@property (nonatomic, retain) HMDevice *ownerDevice;
@property (nonatomic, readonly) HMTriggerPolicy *policy;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, retain) NSUUID *uuid;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (void)_addActionSetOfType:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_enable:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)_handleTriggerFired:(id)arg1;
- (void)_handleTriggerFiredNotification:(id)arg1;
- (void)_recomputeAssistantIdentifier;
- (void)_registerNotificationHandlers;
- (id)_serializeForAdd;
- (void)_unconfigure;
- (void)_unconfigureContext;
- (void)_updateActionSet:(id)arg1 add:(bool)arg2 completionHandler:(id /* block */)arg3;
- (bool)_updateActionSetFromResponse:(id)arg1 responsePayload:(id)arg2;
- (void)_updateClientWithResults:(id /* block */)arg1 withError:(id)arg2;
- (bool)_updateTriggerNameFromResponse:(id /* block */)arg1 responsePayload:(id)arg2;
- (id)actionSets;
- (void)addActionSet:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addActionSetOfType:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addActionSetWithCompletionHandler:(id /* block */)arg1;
- (id)assistantIdentifier;
- (bool)compatibleWithApp;
- (id)configuredName;
- (id)context;
- (id)copyAsBuilder;
- (id)creator;
- (id)creatorDevice;
- (id)currentActionSets;
- (void)enable:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)home;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 home:(id)arg2;
- (id)initWithName:(id)arg1 configuredName:(id)arg2;
- (bool)isEnabled;
- (id)lastFireDate;
- (id)logIdentifier;
- (bool)mergeFromNewObject:(id)arg1;
- (bool)mergeFromNewObjectForBuilderUpdates:(id)arg1;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)name;
- (id)owner;
- (id)ownerDevice;
- (id)policy;
- (void)recomputeAssistantIdentifier;
- (void)removeActionSet:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removePolicy:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setAssistantIdentifier:(id)arg1;
- (void)setConfiguredName:(id)arg1;
- (void)setCurrentActionSets:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHome:(id)arg1;
- (void)setLastFireDate:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setOwnerDevice:(id)arg1;
- (void)setPolicy:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uniqueIdentifier;
- (void)updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateName:(id)arg1 configuredName:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)updatePolicy:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)hf_localizedStringForSignficantEvent:(id)arg1 offset:(id)arg2;
+ (id)hf_newTriggerWithBuilder:(id)arg1 inHome:(id)arg2;
+ (id)hf_sanitizeTriggerName:(id)arg1 home:(id)arg2;

- (id)_hf_naturalLanguageDetailsSentenceElementsWithOptions:(id)arg1;
- (bool)hf_affectsCharacteristics:(id)arg1;
- (bool)hf_affectsHomeKitObject:(id)arg1;
- (bool)hf_affectsProfiles:(id)arg1;
- (id)hf_anonymousActions;
- (id)hf_copyAsBuilder;
- (id)hf_forceDisableReasons;
- (bool)hf_isBuilder;
- (bool)hf_isShortcutOwned;
- (id)hf_naturalLanguageNameWithHome:(id)arg1 type:(unsigned long long)arg2;
- (id)hf_naturalLanguageNameWithOptions:(id)arg1;
- (id)hf_naturalLangugeDetailsWithOptions:(id)arg1;
- (bool)hf_requiresConfirmationToRun;
- (bool)hf_shouldDisplayTrigger;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (unsigned long long)hf_triggerType;
- (id)hf_updateWithBuilder:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeRecommendationEngine.framework/HomeRecommendationEngine

+ (id)_hre_hashForPresenceEvent:(id)arg1 inHome:(id)arg2 verbose:(bool)arg3;
+ (id)hre_verboseHashForEvent:(id)arg1 inHome:(id)arg2;

- (id)hre_triggerComparisonIdentifierInHome:(id)arg1;

@end
