
@interface DIMSchemaDIMLocaleNotRecognized : SISchemaInstrumentationMessage {
    bool  _hasUnknownLocale;
    NSString * _unknownLocale;
}

@property (nonatomic) bool hasUnknownLocale;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *unknownLocale;

- (void).cxx_destruct;
- (void)deleteUnknownLocale;
- (id)dictionaryRepresentation;
- (bool)hasUnknownLocale;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasUnknownLocale:(bool)arg1;
- (void)setUnknownLocale:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)unknownLocale;
- (void)writeTo:(id)arg1;

@end
