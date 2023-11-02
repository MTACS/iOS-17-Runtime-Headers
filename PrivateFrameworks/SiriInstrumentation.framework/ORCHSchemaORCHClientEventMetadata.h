
@interface ORCHSchemaORCHClientEventMetadata : SISchemaInstrumentationMessage {
    bool  _hasRequestId;
    bool  _hasResultCandidateId;
    SISchemaUUID * _requestId;
    NSString * _resultCandidateId;
}

@property (nonatomic) bool hasRequestId;
@property (nonatomic) bool hasResultCandidateId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *requestId;
@property (nonatomic, copy) NSString *resultCandidateId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteRequestId;
- (void)deleteResultCandidateId;
- (id)dictionaryRepresentation;
- (bool)hasRequestId;
- (bool)hasResultCandidateId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (id)resultCandidateId;
- (void)setHasRequestId:(bool)arg1;
- (void)setHasResultCandidateId:(bool)arg1;
- (void)setRequestId:(id)arg1;
- (void)setResultCandidateId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
