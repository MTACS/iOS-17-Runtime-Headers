
@interface SISchemaLocaleIdentifier : SISchemaInstrumentationMessage {
    NSString * _countryCode;
    bool  _hasCountryCode;
    bool  _hasLanguageCode;
    NSString * _languageCode;
}

@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic) bool hasCountryCode;
@property (nonatomic) bool hasLanguageCode;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *languageCode;

- (void).cxx_destruct;
- (id)countryCode;
- (void)deleteCountryCode;
- (void)deleteLanguageCode;
- (id)dictionaryRepresentation;
- (bool)hasCountryCode;
- (bool)hasLanguageCode;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)languageCode;
- (bool)readFrom:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setHasCountryCode:(bool)arg1;
- (void)setHasLanguageCode:(bool)arg1;
- (void)setLanguageCode:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
