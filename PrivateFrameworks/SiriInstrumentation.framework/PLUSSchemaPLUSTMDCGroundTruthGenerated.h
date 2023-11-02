
@interface PLUSSchemaPLUSTMDCGroundTruthGenerated : SISchemaInstrumentationMessage {
    PLUSSchemaPLUSTMDCGroundTruth * _groundTruth;
    bool  _hasGroundTruth;
    bool  _hasOriginalPlusId;
    bool  _hasOriginalRequestId;
    SISchemaUUID * _originalPlusId;
    SISchemaUUID * _originalRequestId;
}

@property (nonatomic, retain) PLUSSchemaPLUSTMDCGroundTruth *groundTruth;
@property (nonatomic) bool hasGroundTruth;
@property (nonatomic) bool hasOriginalPlusId;
@property (nonatomic) bool hasOriginalRequestId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *originalPlusId;
@property (nonatomic, retain) SISchemaUUID *originalRequestId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteGroundTruth;
- (void)deleteOriginalPlusId;
- (void)deleteOriginalRequestId;
- (id)dictionaryRepresentation;
- (id)groundTruth;
- (bool)hasGroundTruth;
- (bool)hasOriginalPlusId;
- (bool)hasOriginalRequestId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)originalPlusId;
- (id)originalRequestId;
- (bool)readFrom:(id)arg1;
- (void)setGroundTruth:(id)arg1;
- (void)setHasGroundTruth:(bool)arg1;
- (void)setHasOriginalPlusId:(bool)arg1;
- (void)setHasOriginalRequestId:(bool)arg1;
- (void)setOriginalPlusId:(id)arg1;
- (void)setOriginalRequestId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
