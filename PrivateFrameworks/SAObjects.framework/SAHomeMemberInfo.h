
@interface SAHomeMemberInfo : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSArray *attributes;
@property (nonatomic, copy) NSString *companionAssistantId;
@property (nonatomic, copy) NSString *companionSpeechId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *enrollmentName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAHomeMemberSettings *homeMemberSettings;
@property (nonatomic, copy) NSString *lastVisitedAceHost;
@property (nonatomic, copy) NSString *loggableCompanionAssistantId;
@property (nonatomic, copy) NSString *loggableMultiUserSharedUserId;
@property (nonatomic, copy) NSString *loggableSharedUserId;
@property (nonatomic, copy) NSString *sharedUserId;
@property (nonatomic, copy) NSString *speechId;
@property (readonly) Class superclass;

+ (id)homeMemberInfo;
+ (id)homeMemberInfoWithDictionary:(id)arg1 context:(id)arg2;

- (id)attributes;
- (id)companionAssistantId;
- (id)companionSpeechId;
- (id)encodedClassName;
- (id)enrollmentName;
- (id)groupIdentifier;
- (id)homeMemberSettings;
- (id)lastVisitedAceHost;
- (id)loggableCompanionAssistantId;
- (id)loggableMultiUserSharedUserId;
- (id)loggableSharedUserId;
- (void)setAttributes:(id)arg1;
- (void)setCompanionAssistantId:(id)arg1;
- (void)setCompanionSpeechId:(id)arg1;
- (void)setEnrollmentName:(id)arg1;
- (void)setHomeMemberSettings:(id)arg1;
- (void)setLastVisitedAceHost:(id)arg1;
- (void)setLoggableCompanionAssistantId:(id)arg1;
- (void)setLoggableMultiUserSharedUserId:(id)arg1;
- (void)setLoggableSharedUserId:(id)arg1;
- (void)setSharedUserId:(id)arg1;
- (void)setSpeechId:(id)arg1;
- (id)sharedUserId;
- (id)speechId;

@end
