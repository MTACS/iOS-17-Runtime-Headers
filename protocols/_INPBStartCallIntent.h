
@protocol _INPBStartCallIntent <NSObject>

@required

+ (Class)callGroupsType;
+ (Class)contactsType;

- (int)StringAsAudioRoute:(NSString *)arg1;
- (int)StringAsCallCapability:(NSString *)arg1;
- (int)StringAsDestinationType:(NSString *)arg1;
- (int)StringAsPreferredCallProvider:(NSString *)arg1;
- (int)StringAsRecordTypeForRedialing:(NSString *)arg1;
- (int)StringAsTTYType:(NSString *)arg1;
- (void)addCallGroups:(_INPBCallGroup *)arg1;
- (void)addContacts:(_INPBContact *)arg1;
- (int)audioRoute;
- (NSString *)audioRouteAsString:(int)arg1;
- (int)callCapability;
- (NSString *)callCapabilityAsString:(int)arg1;
- (NSArray *)callGroups;
- (_INPBCallGroup *)callGroupsAtIndex:(unsigned long long)arg1;
- (unsigned long long)callGroupsCount;
- (_INPBCallRecordFilter *)callRecordFilter;
- (_INPBCallRecordValue *)callRecordToCallBack;
- (_INPBStartCallRequestMetadata *)callRequestMetadata;
- (void)clearCallGroups;
- (void)clearContacts;
- (NSArray *)contacts;
- (_INPBContact *)contactsAtIndex:(unsigned long long)arg1;
- (unsigned long long)contactsCount;
- (int)destinationType;
- (NSString *)destinationTypeAsString:(int)arg1;
- (NSString *)faceTimeLink;
- (bool)hasAudioRoute;
- (bool)hasCallCapability;
- (bool)hasCallRecordFilter;
- (bool)hasCallRecordToCallBack;
- (bool)hasCallRequestMetadata;
- (bool)hasDestinationType;
- (bool)hasFaceTimeLink;
- (bool)hasIntentMetadata;
- (bool)hasIsGroupCall;
- (bool)hasNotificationThreadIdentifier;
- (bool)hasPreferredCallProvider;
- (bool)hasRecordTypeForRedialing;
- (bool)hasTtyType;
- (_INPBIntentMetadata *)intentMetadata;
- (bool)isGroupCall;
- (NSString *)notificationThreadIdentifier;
- (int)preferredCallProvider;
- (NSString *)preferredCallProviderAsString:(int)arg1;
- (int)recordTypeForRedialing;
- (NSString *)recordTypeForRedialingAsString:(int)arg1;
- (void)setAudioRoute:(int)arg1;
- (void)setCallCapability:(int)arg1;
- (void)setCallGroups:(NSArray *)arg1;
- (void)setCallRecordFilter:(_INPBCallRecordFilter *)arg1;
- (void)setCallRecordToCallBack:(_INPBCallRecordValue *)arg1;
- (void)setCallRequestMetadata:(_INPBStartCallRequestMetadata *)arg1;
- (void)setContacts:(NSArray *)arg1;
- (void)setDestinationType:(int)arg1;
- (void)setFaceTimeLink:(NSString *)arg1;
- (void)setHasAudioRoute:(bool)arg1;
- (void)setHasCallCapability:(bool)arg1;
- (void)setHasDestinationType:(bool)arg1;
- (void)setHasIsGroupCall:(bool)arg1;
- (void)setHasPreferredCallProvider:(bool)arg1;
- (void)setHasRecordTypeForRedialing:(bool)arg1;
- (void)setHasTtyType:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setIsGroupCall:(bool)arg1;
- (void)setNotificationThreadIdentifier:(NSString *)arg1;
- (void)setPreferredCallProvider:(int)arg1;
- (void)setRecordTypeForRedialing:(int)arg1;
- (void)setTtyType:(int)arg1;
- (int)ttyType;
- (NSString *)ttyTypeAsString:(int)arg1;

@end
