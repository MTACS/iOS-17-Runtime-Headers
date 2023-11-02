
@protocol _INPBCallRecordValue <NSObject>

@required

+ (Class)participantsType;

- (int)StringAsCallCapability:(NSString *)arg1;
- (int)StringAsCallType:(NSString *)arg1;
- (int)StringAsPreferredCallProvider:(NSString *)arg1;
- (void)addParticipants:(_INPBContactValue *)arg1;
- (int)callCapability;
- (NSString *)callCapabilityAsString:(int)arg1;
- (_INPBCallMetrics *)callMetrics;
- (int)callType;
- (NSString *)callTypeAsString:(int)arg1;
- (_INPBContactValue *)caller;
- (void)clearParticipants;
- (_INPBDateTime *)dateCreated;
- (bool)hasCallCapability;
- (bool)hasCallMetrics;
- (bool)hasCallType;
- (bool)hasCaller;
- (bool)hasDateCreated;
- (bool)hasIdentifier;
- (bool)hasIsCallerIdBlocked;
- (bool)hasNumberOfCalls;
- (bool)hasPreferredCallProvider;
- (bool)hasProviderBundleId;
- (bool)hasProviderId;
- (bool)hasUnseen;
- (NSString *)identifier;
- (bool)isCallerIdBlocked;
- (_INPBInteger *)numberOfCalls;
- (NSArray *)participants;
- (_INPBContactValue *)participantsAtIndex:(unsigned long long)arg1;
- (unsigned long long)participantsCount;
- (int)preferredCallProvider;
- (NSString *)preferredCallProviderAsString:(int)arg1;
- (NSString *)providerBundleId;
- (NSString *)providerId;
- (void)setCallCapability:(int)arg1;
- (void)setCallMetrics:(_INPBCallMetrics *)arg1;
- (void)setCallType:(int)arg1;
- (void)setCaller:(_INPBContactValue *)arg1;
- (void)setDateCreated:(_INPBDateTime *)arg1;
- (void)setHasCallCapability:(bool)arg1;
- (void)setHasCallType:(bool)arg1;
- (void)setHasIsCallerIdBlocked:(bool)arg1;
- (void)setHasPreferredCallProvider:(bool)arg1;
- (void)setHasUnseen:(bool)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setIsCallerIdBlocked:(bool)arg1;
- (void)setNumberOfCalls:(_INPBInteger *)arg1;
- (void)setParticipants:(NSArray *)arg1;
- (void)setPreferredCallProvider:(int)arg1;
- (void)setProviderBundleId:(NSString *)arg1;
- (void)setProviderId:(NSString *)arg1;
- (void)setUnseen:(bool)arg1;
- (bool)unseen;

@end
