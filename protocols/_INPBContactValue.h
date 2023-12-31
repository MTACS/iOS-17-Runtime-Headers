
@protocol _INPBContactValue <NSObject>

@required

+ (Class)aliasesType;

- (int)StringAsSearchProvider:(NSString *)arg1;
- (int)StringAsSuggestionType:(NSString *)arg1;
- (void)addAliases:(_INPBContactHandle *)arg1;
- (NSArray *)aliases;
- (_INPBContactHandle *)aliasesAtIndex:(unsigned long long)arg1;
- (unsigned long long)aliasesCount;
- (void)clearAliases;
- (_INPBContactHandle *)contactHandle;
- (NSString *)customIdentifier;
- (NSString *)firstName;
- (NSString *)fullName;
- (NSString *)handle;
- (bool)hasContactHandle;
- (bool)hasCustomIdentifier;
- (bool)hasFirstName;
- (bool)hasFullName;
- (bool)hasHandle;
- (bool)hasImage;
- (bool)hasIsContactSuggestion;
- (bool)hasIsMe;
- (bool)hasLastName;
- (bool)hasMiddleName;
- (bool)hasNamePrefix;
- (bool)hasNameSuffix;
- (bool)hasNickName;
- (bool)hasPhonemeData;
- (bool)hasPhoneticFirstName;
- (bool)hasPhoneticLastName;
- (bool)hasPhoneticMiddleName;
- (bool)hasPhoneticNamePrefix;
- (bool)hasPhoneticNameSuffix;
- (bool)hasRelationship;
- (bool)hasSearchProvider;
- (bool)hasSuggestionType;
- (bool)hasValueMetadata;
- (_INPBImageValue *)image;
- (bool)isContactSuggestion;
- (bool)isMe;
- (NSString *)lastName;
- (NSString *)middleName;
- (NSString *)namePrefix;
- (NSString *)nameSuffix;
- (NSString *)nickName;
- (NSString *)phonemeData;
- (NSString *)phoneticFirstName;
- (NSString *)phoneticLastName;
- (NSString *)phoneticMiddleName;
- (NSString *)phoneticNamePrefix;
- (NSString *)phoneticNameSuffix;
- (NSString *)relationship;
- (int)searchProvider;
- (NSString *)searchProviderAsString:(int)arg1;
- (void)setAliases:(NSArray *)arg1;
- (void)setContactHandle:(_INPBContactHandle *)arg1;
- (void)setCustomIdentifier:(NSString *)arg1;
- (void)setFirstName:(NSString *)arg1;
- (void)setFullName:(NSString *)arg1;
- (void)setHandle:(NSString *)arg1;
- (void)setHasIsContactSuggestion:(bool)arg1;
- (void)setHasIsMe:(bool)arg1;
- (void)setHasSearchProvider:(bool)arg1;
- (void)setHasSuggestionType:(bool)arg1;
- (void)setImage:(_INPBImageValue *)arg1;
- (void)setIsContactSuggestion:(bool)arg1;
- (void)setIsMe:(bool)arg1;
- (void)setLastName:(NSString *)arg1;
- (void)setMiddleName:(NSString *)arg1;
- (void)setNamePrefix:(NSString *)arg1;
- (void)setNameSuffix:(NSString *)arg1;
- (void)setNickName:(NSString *)arg1;
- (void)setPhonemeData:(NSString *)arg1;
- (void)setPhoneticFirstName:(NSString *)arg1;
- (void)setPhoneticLastName:(NSString *)arg1;
- (void)setPhoneticMiddleName:(NSString *)arg1;
- (void)setPhoneticNamePrefix:(NSString *)arg1;
- (void)setPhoneticNameSuffix:(NSString *)arg1;
- (void)setRelationship:(NSString *)arg1;
- (void)setSearchProvider:(int)arg1;
- (void)setSuggestionType:(int)arg1;
- (void)setValueMetadata:(_INPBValueMetadata *)arg1;
- (int)suggestionType;
- (NSString *)suggestionTypeAsString:(int)arg1;
- (_INPBValueMetadata *)valueMetadata;

@end
