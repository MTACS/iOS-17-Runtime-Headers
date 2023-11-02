
@interface LCServiceBlacklistedFields : SISchemaInstrumentationMessage {
    NSArray * _blackListedFields;
}

@property (nonatomic, copy) NSArray *blackListedFields;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addBlackListedFields:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)blackListedFields;
- (id)blackListedFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)blackListedFieldsCount;
- (void)clearBlackListedFields;
- (void)deleteBlackListedFields;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setBlackListedFields:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
