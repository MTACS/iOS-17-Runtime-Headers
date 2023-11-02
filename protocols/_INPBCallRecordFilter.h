
@protocol _INPBCallRecordFilter <NSObject>

@required

+ (Class)participantsType;

- (int)StringAsCallCapability:(NSString *)arg1;
- (int)StringAsCallTypes:(NSString *)arg1;
- (int)StringAsPreferredCallProvider:(NSString *)arg1;
- (void)addCallTypes:(int)arg1;
- (void)addParticipants:(_INPBContact *)arg1;
- (int)callCapability;
- (NSString *)callCapabilityAsString:(int)arg1;
- (int*)callTypes;
- (NSString *)callTypesAsString:(int)arg1;
- (int)callTypesAtIndex:(unsigned long long)arg1;
- (unsigned long long)callTypesCount;
- (void)clearCallTypes;
- (void)clearParticipants;
- (bool)hasCallCapability;
- (bool)hasPreferredCallProvider;
- (NSArray *)participants;
- (_INPBContact *)participantsAtIndex:(unsigned long long)arg1;
- (unsigned long long)participantsCount;
- (int)preferredCallProvider;
- (NSString *)preferredCallProviderAsString:(int)arg1;
- (void)setCallCapability:(int)arg1;
- (void)setCallTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setHasCallCapability:(bool)arg1;
- (void)setHasPreferredCallProvider:(bool)arg1;
- (void)setParticipants:(NSArray *)arg1;
- (void)setPreferredCallProvider:(int)arg1;

@end
