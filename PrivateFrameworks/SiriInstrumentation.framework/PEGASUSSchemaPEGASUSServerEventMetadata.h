
@interface PEGASUSSchemaPEGASUSServerEventMetadata : SISchemaInstrumentationMessage {
    bool  _hasPegasusId;
    bool  _hasResultCandidateId;
    SISchemaUUID * _pegasusId;
    NSString * _resultCandidateId;
}

@property (nonatomic) bool hasPegasusId;
@property (nonatomic) bool hasResultCandidateId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *pegasusId;
@property (nonatomic, copy) NSString *resultCandidateId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deletePegasusId;
- (void)deleteResultCandidateId;
- (id)dictionaryRepresentation;
- (bool)hasPegasusId;
- (bool)hasResultCandidateId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)pegasusId;
- (bool)readFrom:(id)arg1;
- (id)resultCandidateId;
- (void)setHasPegasusId:(bool)arg1;
- (void)setHasResultCandidateId:(bool)arg1;
- (void)setPegasusId:(id)arg1;
- (void)setResultCandidateId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
