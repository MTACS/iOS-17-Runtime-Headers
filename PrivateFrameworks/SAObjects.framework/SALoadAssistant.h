
@interface SALoadAssistant : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSData *activationToken;
@property (nonatomic, copy) NSString *appleConnectServiceTicket;
@property (nonatomic, copy) NSString *appleConnectSessionToken;
@property (nonatomic, copy) NSString *assistantId;
@property (nonatomic, copy) NSString *connectionMode;
@property (nonatomic, copy) NSString *connectionType;
@property (nonatomic, copy) NSString *dataSharingOptInStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSNumber *deviceAuthVersion;
@property (nonatomic, copy) NSArray *experiments;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *hubAssistantId;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *lastKnownAceHostOfCompanion;
@property (nonatomic, copy) NSString *linkedAssistantId;
@property (nonatomic, copy) NSData *linkedSessionValidationData;
@property (nonatomic, copy) NSString *linkedSpeechId;
@property (nonatomic, copy) NSString *loggableAssistantId;
@property (nonatomic, copy) NSString *loggableSharedUserId;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSData *sessionValidationData;
@property (nonatomic, copy) NSString *sharedUserId;
@property (nonatomic, copy) NSString *speechId;
@property (readonly) Class superclass;

+ (id)loadAssistant;
+ (id)loadAssistantWithDictionary:(id)arg1 context:(id)arg2;

- (id)activationToken;
- (id)appleConnectServiceTicket;
- (id)appleConnectSessionToken;
- (id)assistantId;
- (id)connectionMode;
- (id)connectionType;
- (id)dataSharingOptInStatus;
- (id)deviceAuthVersion;
- (id)encodedClassName;
- (id)experiments;
- (id)groupIdentifier;
- (id)hubAssistantId;
- (id)language;
- (id)lastKnownAceHostOfCompanion;
- (id)linkedAssistantId;
- (id)linkedSessionValidationData;
- (id)linkedSpeechId;
- (id)loggableAssistantId;
- (id)loggableSharedUserId;
- (bool)requiresResponse;
- (id)sessionValidationData;
- (void)setActivationToken:(id)arg1;
- (void)setAppleConnectServiceTicket:(id)arg1;
- (void)setAppleConnectSessionToken:(id)arg1;
- (void)setAssistantId:(id)arg1;
- (void)setConnectionMode:(id)arg1;
- (void)setConnectionType:(id)arg1;
- (void)setDataSharingOptInStatus:(id)arg1;
- (void)setDeviceAuthVersion:(id)arg1;
- (void)setExperiments:(id)arg1;
- (void)setHubAssistantId:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLastKnownAceHostOfCompanion:(id)arg1;
- (void)setLinkedAssistantId:(id)arg1;
- (void)setLinkedSessionValidationData:(id)arg1;
- (void)setLinkedSpeechId:(id)arg1;
- (void)setLoggableAssistantId:(id)arg1;
- (void)setLoggableSharedUserId:(id)arg1;
- (void)setSessionValidationData:(id)arg1;
- (void)setSharedUserId:(id)arg1;
- (void)setSpeechId:(id)arg1;
- (id)sharedUserId;
- (id)speechId;

@end
