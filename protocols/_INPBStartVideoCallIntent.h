
@protocol _INPBStartVideoCallIntent <NSObject>

@required

+ (Class)contactType;
+ (Class)targetContactsType;

- (int)StringAsAudioRoute:(NSString *)arg1;
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
- (bool)hasAudioRoute;
- (bool)hasCallRequestMetadata;
- (bool)hasIntentMetadata;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setAudioRoute:(int)arg1;
- (void)setCallRequestMetadata:(_INPBStartCallRequestMetadata *)arg1;
- (void)setContacts:(NSArray *)arg1;
- (void)setHasAudioRoute:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setTargetContacts:(NSArray *)arg1;
- (NSArray *)targetContacts;
- (_INPBDialingContact *)targetContactsAtIndex:(unsigned long long)arg1;
- (unsigned long long)targetContactsCount;

@end
