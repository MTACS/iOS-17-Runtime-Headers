
@interface _HMSiriEndpointProfile : _HMAccessoryProfile <HMFLogging, HMFObject> {
    NSNumber * _activeIdentifier;
    NSArray * _assistants;
    unsigned long long  _capability;
    <_HMSiriEndpointProfileDelegate> * _delegate;
    bool  _manuallyDisabled;
    HMSiriEndpointProfilesMessenger * _messenger;
    long long  _multifunctionButton;
    NSUUID * _sessionHubIdentifier;
    long long  _sessionState;
    NSString * _siriEndpointVersion;
    NSString * _siriEngineVersion;
}

@property (retain) NSNumber *activeIdentifier;
@property (retain) NSArray *assistants;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (nonatomic) unsigned long long capability;
@property (readonly, copy) NSString *debugDescription;
@property <_HMSiriEndpointProfileDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool manuallyDisabled;
@property (retain) HMSiriEndpointProfilesMessenger *messenger;
@property long long multifunctionButton;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (retain) NSUUID *sessionHubIdentifier;
@property long long sessionState;
@property (readonly, copy) NSString *shortDescription;
@property (retain) NSString *siriEndpointVersion;
@property (retain) NSString *siriEngineVersion;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 accessory:(id)arg2;
- (void)_handleUpdateProfileState:(id)arg1;
- (bool)_mergeAssistants:(id)arg1;
- (void)_registerNotificationHandlers;
- (id)activeIdentifier;
- (void)applyOnboardingSelections:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)assistants;
- (id)attributeDescriptions;
- (unsigned long long)capability;
- (id)delegate;
- (void)deleteSiriHistoryWithCompletionHandler:(id /* block */)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)logIdentifier;
- (bool)manuallyDisabled;
- (bool)mergeFromNewObject:(id)arg1;
- (id)messageDestination;
- (id)messenger;
- (long long)multifunctionButton;
- (void)notifyClientDidUpdateSessionState;
- (id)privateDescription;
- (void)refreshStateWithCompletionHandler:(id /* block */)arg1;
- (id)sessionHubIdentifier;
- (long long)sessionState;
- (void)setActiveIdentifier:(id)arg1;
- (void)setAssistants:(id)arg1;
- (void)setCapability:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setManuallyDisabled:(bool)arg1;
- (void)setMessenger:(id)arg1;
- (void)setMultifunctionButton:(long long)arg1;
- (void)setNotifications:(bool)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)setSessionHubIdentifier:(id)arg1;
- (void)setSessionState:(long long)arg1;
- (void)setSiriEndpointVersion:(id)arg1;
- (void)setSiriEngineVersion:(id)arg1;
- (id)shortDescription;
- (id)siriEndpointVersion;
- (id)siriEngineVersion;

@end
