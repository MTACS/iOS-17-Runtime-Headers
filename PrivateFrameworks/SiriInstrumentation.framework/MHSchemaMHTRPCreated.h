
@interface MHSchemaMHTRPCreated : SISchemaInstrumentationMessage {
    bool  _hasResultCandidateId;
    bool  _hasTrpId;
    NSString * _resultCandidateId;
    SISchemaUUID * _trpId;
}

@property (nonatomic) bool hasResultCandidateId;
@property (nonatomic) bool hasTrpId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *resultCandidateId;
@property (nonatomic, retain) SISchemaUUID *trpId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteResultCandidateId;
- (void)deleteTrpId;
- (id)dictionaryRepresentation;
- (bool)hasResultCandidateId;
- (bool)hasTrpId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)resultCandidateId;
- (void)setHasResultCandidateId:(bool)arg1;
- (void)setHasTrpId:(bool)arg1;
- (void)setResultCandidateId:(id)arg1;
- (void)setTrpId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)trpId;
- (void)writeTo:(id)arg1;

@end
