
@interface SCSchemaSCCorrectionChecked : SISchemaInstrumentationMessage {
    SCSchemaSCCheckCorrectionResponse * _checkCorrectionResponse;
    bool  _hasCheckCorrectionResponse;
}

@property (nonatomic, retain) SCSchemaSCCheckCorrectionResponse *checkCorrectionResponse;
@property (nonatomic) bool hasCheckCorrectionResponse;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)checkCorrectionResponse;
- (void)deleteCheckCorrectionResponse;
- (id)dictionaryRepresentation;
- (bool)hasCheckCorrectionResponse;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCheckCorrectionResponse:(id)arg1;
- (void)setHasCheckCorrectionResponse:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
