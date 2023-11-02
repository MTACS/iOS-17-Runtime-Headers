
@interface FLOWSchemaFLOWEventMetadata : SISchemaInstrumentationMessage {
    SISchemaUUID * _flowId;
    bool  _hasFlowId;
    bool  _hasRequestId;
    bool  _hasResultCandidateId;
    bool  _hasTaskId;
    bool  _hasTrpId;
    bool  _hasVersion;
    SISchemaUUID * _requestId;
    NSString * _resultCandidateId;
    SISchemaUUID * _taskId;
    SISchemaUUID * _trpId;
    SISchemaVersion * _version;
}

@property (nonatomic, retain) SISchemaUUID *flowId;
@property (nonatomic) bool hasFlowId;
@property (nonatomic) bool hasRequestId;
@property (nonatomic) bool hasResultCandidateId;
@property (nonatomic) bool hasTaskId;
@property (nonatomic) bool hasTrpId;
@property (nonatomic) bool hasVersion;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *requestId;
@property (nonatomic, copy) NSString *resultCandidateId;
@property (nonatomic, retain) SISchemaUUID *taskId;
@property (nonatomic, retain) SISchemaUUID *trpId;
@property (nonatomic, retain) SISchemaVersion *version;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteFlowId;
- (void)deleteRequestId;
- (void)deleteResultCandidateId;
- (void)deleteTaskId;
- (void)deleteTrpId;
- (void)deleteVersion;
- (id)dictionaryRepresentation;
- (id)flowId;
- (bool)hasFlowId;
- (bool)hasRequestId;
- (bool)hasResultCandidateId;
- (bool)hasTaskId;
- (bool)hasTrpId;
- (bool)hasVersion;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (id)resultCandidateId;
- (void)setFlowId:(id)arg1;
- (void)setHasFlowId:(bool)arg1;
- (void)setHasRequestId:(bool)arg1;
- (void)setHasResultCandidateId:(bool)arg1;
- (void)setHasTaskId:(bool)arg1;
- (void)setHasTrpId:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setRequestId:(id)arg1;
- (void)setResultCandidateId:(id)arg1;
- (void)setTaskId:(id)arg1;
- (void)setTrpId:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)taskId;
- (id)trpId;
- (id)version;
- (void)writeTo:(id)arg1;

@end
