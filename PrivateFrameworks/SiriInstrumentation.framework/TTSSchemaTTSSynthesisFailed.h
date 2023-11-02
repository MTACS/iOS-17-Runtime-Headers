
@interface TTSSchemaTTSSynthesisFailed : SISchemaInstrumentationMessage {
    NSArray * _errorCodes;
}

@property (nonatomic, copy) NSArray *errorCodes;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addErrorCodes:(int)arg1;
- (void)clearErrorCodes;
- (void)deleteErrorCodes;
- (id)dictionaryRepresentation;
- (id)errorCodes;
- (int)errorCodesAtIndex:(unsigned long long)arg1;
- (unsigned long long)errorCodesCount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setErrorCodes:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
