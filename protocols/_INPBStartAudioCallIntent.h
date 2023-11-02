
@protocol _INPBStartAudioCallIntent <NSObject>

@required

+ (Class)contactType;
+ (Class)targetContactsType;

- (int)StringAsAudioRoute:(NSString *)arg1;
- (int)StringAsDestinationType:(NSString *)arg1;
- (int)StringAsPreferredCallProvider:(NSString *)arg1;
- (int)StringAsRecordTypeForRedialing:(NSString *)arg1;
- (int)StringAsTTYType:(NSString *)arg1;
- (void)addContact:(_INPBDialingContact *)arg1;
- (void)addTargetContacts:(_INPBDialingContact *)arg1;
- (int)audioRoute;
- (NSString *)audioRouteAsString:(int)arg1;
- (_INPBStartCallRequestMetadata *)callRequestMetadata;
- (void)clearContacts;
- (void)clearTargetContacts;
- (_INPBDialingContact *)contactAtIndex:(unsigned long long)arg1;
- (NSArray *)contacts;
- (unsigned long long)contactsCount;
- (int)destinationType;
- (NSString *)destinationTypeAsString:(int)arg1;
- (bool)hasAudioRoute;
- (bool)hasCallRequestMetadata;
- (bool)hasDestinationType;
- (bool)hasIntentMetadata;
- (bool)hasPreferredCallProvider;
- (bool)hasRecordTypeForRedialing;
- (bool)hasTtyType;
- (_INPBIntentMetadata *)intentMetadata;
- (int)preferredCallProvider;
- (NSString *)preferredCallProviderAsString:(int)arg1;
- (int)recordTypeForRedialing;
- (NSString *)recordTypeForRedialingAsString:(int)arg1;
- (void)setAudioRoute:(int)arg1;
- (void)setCallRequestMetadata:(_INPBStartCallRequestMetadata *)arg1;
- (void)setContacts:(NSArray *)arg1;
- (void)setDestinationType:(int)arg1;
- (void)setHasAudioRoute:(bool)arg1;
- (void)setHasDestinationType:(bool)arg1;
- (void)setHasPreferredCallProvider:(bool)arg1;
- (void)setHasRecordTypeForRedialing:(bool)arg1;
- (void)setHasTtyType:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setPreferredCallProvider:(int)arg1;
- (void)setRecordTypeForRedialing:(int)arg1;
- (void)setTargetContacts:(NSArray *)arg1;
- (void)setTtyType:(int)arg1;
- (NSArray *)targetContacts;
- (_INPBDialingContact *)targetContactsAtIndex:(unsigned long long)arg1;
- (unsigned long long)targetContactsCount;
- (int)ttyType;
- (NSString *)ttyTypeAsString:(int)arg1;

@end
