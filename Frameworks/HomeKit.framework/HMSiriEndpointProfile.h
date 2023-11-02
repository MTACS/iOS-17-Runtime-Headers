
@interface HMSiriEndpointProfile : HMAccessoryProfile <HMFLogging, HMFObject, _HMSiriEndpointProfileDelegate> {
    <HMSiriEndpointProfileDelegate> * _delegate;
}

@property (readonly) NSNumber *activeIdentifier;
@property (readonly) NSArray *assistants;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly) unsigned long long capability;
@property (readonly) NSString *capabilityToString;
@property (readonly) HMSiriEndpointProfileAssistant *currentAssistant;
@property (readonly, copy) NSString *debugDescription;
@property <HMSiriEndpointProfileDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool manuallyDisabled;
@property (readonly) long long multifunctionButton;
@property (getter=isNeedsOnboarding, readonly) bool needsOnboarding;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSUUID *sessionHubIdentifier;
@property (readonly) long long sessionState;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) NSString *siriEndpointVersion;
@property (readonly) NSString *siriEngineVersion;
@property (readonly) Class superclass;
@property (readonly) bool supportsOnboarding;

+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)activeIdentifier;
- (void)applyOnboardingSelections:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)assistants;
- (id)attributeDescriptions;
- (unsigned long long)capability;
- (id)capabilityToString;
- (id)currentAssistant;
- (id)delegate;
- (void)deleteSiriHistoryWithCompletionHandler:(id /* block */)arg1;
- (id)description;
- (id)init;
- (id)initWithSiriEndpointProfile:(id)arg1;
- (bool)isNeedsOnboarding;
- (id)logIdentifier;
- (bool)manuallyDisabled;
- (bool)mergeFromNewObject:(id)arg1;
- (long long)multifunctionButton;
- (id)privateDescription;
- (void)refreshStateWithCompletionHandler:(id /* block */)arg1;
- (id)sessionHubIdentifier;
- (long long)sessionState;
- (void)setDelegate:(id)arg1;
- (void)setNotifications:(bool)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)shortDescription;
- (id)siriEndpointProfile;
- (void)siriEndpointProfile:(id)arg1 didUpdateActiveIdentifier:(id)arg2;
- (void)siriEndpointProfile:(id)arg1 didUpdateAssistants:(id)arg2;
- (void)siriEndpointProfile:(id)arg1 didUpdateManuallyDisabled:(bool)arg2;
- (void)siriEndpointProfile:(id)arg1 didUpdateMultifunctionButton:(long long)arg2;
- (void)siriEndpointProfile:(id)arg1 didUpdateNeedsOnboarding:(bool)arg2;
- (void)siriEndpointProfile:(id)arg1 didUpdateSessionHubIdentifier:(id)arg2;
- (void)siriEndpointProfile:(id)arg1 didUpdateSessionState:(long long)arg2;
- (void)siriEndpointProfile:(id)arg1 didUpdateSiriEngineVersion:(id)arg2;
- (void)siriEndpointProfile:(id)arg1 didUpdateSupportsOnboarding:(bool)arg2;
- (id)siriEndpointVersion;
- (id)siriEngineVersion;
- (bool)supportsOnboarding;

@end
