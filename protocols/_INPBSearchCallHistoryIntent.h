
@protocol _INPBSearchCallHistoryIntent <NSObject>

@required

- (int)StringAsCallCapabilities:(NSString *)arg1;
- (int)StringAsCallType:(NSString *)arg1;
- (int)StringAsCallTypes:(NSString *)arg1;
- (int)StringAsCapabilities:(NSString *)arg1;
- (int)StringAsPreferredCallProvider:(NSString *)arg1;
- (void)addCallCapabilities:(int)arg1;
- (void)addCallTypes:(int)arg1;
- (void)addCapabilities:(int)arg1;
- (int*)callCapabilities;
- (NSString *)callCapabilitiesAsString:(int)arg1;
- (int)callCapabilitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)callCapabilitiesCount;
- (int)callType;
- (NSString *)callTypeAsString:(int)arg1;
- (int*)callTypes;
- (NSString *)callTypesAsString:(int)arg1;
- (int)callTypesAtIndex:(unsigned long long)arg1;
- (unsigned long long)callTypesCount;
- (int*)capabilities;
- (NSString *)capabilitiesAsString:(int)arg1;
- (int)capabilitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)capabilitiesCount;
- (void)clearCallCapabilities;
- (void)clearCallTypes;
- (void)clearCapabilities;
- (_INPBDateTimeRange *)dateCreated;
- (bool)hasCallType;
- (bool)hasDateCreated;
- (bool)hasIntentMetadata;
- (bool)hasPreferredCallProvider;
- (bool)hasRecipient;
- (bool)hasTargetContact;
- (bool)hasUnseen;
- (_INPBIntentMetadata *)intentMetadata;
- (int)preferredCallProvider;
- (NSString *)preferredCallProviderAsString:(int)arg1;
- (_INPBContact *)recipient;
- (void)setCallCapabilities:(int*)arg1 count:(unsigned long long)arg2;
- (void)setCallType:(int)arg1;
- (void)setCallTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setCapabilities:(int*)arg1 count:(unsigned long long)arg2;
- (void)setDateCreated:(_INPBDateTimeRange *)arg1;
- (void)setHasCallType:(bool)arg1;
- (void)setHasPreferredCallProvider:(bool)arg1;
- (void)setHasUnseen:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setPreferredCallProvider:(int)arg1;
- (void)setRecipient:(_INPBContact *)arg1;
- (void)setTargetContact:(_INPBContact *)arg1;
- (void)setUnseen:(bool)arg1;
- (_INPBContact *)targetContact;
- (bool)unseen;

@end
