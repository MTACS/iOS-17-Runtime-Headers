
@interface TTMSchemaTTMOverrideTCUFailure : SISchemaInstrumentationMessage {
    NSArray * _failures;
    bool  _hasTcuId;
    SISchemaUUID * _tcuId;
}

@property (nonatomic, copy) NSArray *failures;
@property (nonatomic) bool hasTcuId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *tcuId;

- (void).cxx_destruct;
- (void)addFailures:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearFailures;
- (void)deleteFailures;
- (void)deleteTcuId;
- (id)dictionaryRepresentation;
- (id)failures;
- (id)failuresAtIndex:(unsigned long long)arg1;
- (unsigned long long)failuresCount;
- (bool)hasTcuId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setFailures:(id)arg1;
- (void)setHasTcuId:(bool)arg1;
- (void)setTcuId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)tcuId;
- (void)writeTo:(id)arg1;

@end
