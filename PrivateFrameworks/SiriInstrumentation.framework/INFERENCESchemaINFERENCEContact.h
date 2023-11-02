
@interface INFERENCESchemaINFERENCEContact : SISchemaInstrumentationMessage {
    NSString * _anonymizedContactIdentifier;
    NSArray * _anonymizedHandleValues;
    bool  _hasAnonymizedContactIdentifier;
}

@property (nonatomic, copy) NSString *anonymizedContactIdentifier;
@property (nonatomic, copy) NSArray *anonymizedHandleValues;
@property (nonatomic) bool hasAnonymizedContactIdentifier;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addAnonymizedHandleValues:(id)arg1;
- (id)anonymizedContactIdentifier;
- (id)anonymizedHandleValues;
- (id)anonymizedHandleValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)anonymizedHandleValuesCount;
- (void)clearAnonymizedHandleValues;
- (void)deleteAnonymizedContactIdentifier;
- (void)deleteAnonymizedHandleValues;
- (id)dictionaryRepresentation;
- (bool)hasAnonymizedContactIdentifier;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAnonymizedContactIdentifier:(id)arg1;
- (void)setAnonymizedHandleValues:(id)arg1;
- (void)setHasAnonymizedContactIdentifier:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
