
@interface NLXSchemaNLXClientEventMetadata : SISchemaInstrumentationMessage {
    int  _componentInvocationSource;
    struct { 
        unsigned int componentInvocationSource : 1; 
    }  _has;
    bool  _hasNlId;
    bool  _hasRequestId;
    bool  _hasResultCandidateId;
    bool  _hasTrpId;
    SISchemaUUID * _nlId;
    SISchemaUUID * _requestId;
    NSString * _resultCandidateId;
    SISchemaUUID * _trpId;
}

@property (nonatomic) int componentInvocationSource;
@property (nonatomic) bool hasComponentInvocationSource;
@property (nonatomic) bool hasNlId;
@property (nonatomic) bool hasRequestId;
@property (nonatomic) bool hasResultCandidateId;
@property (nonatomic) bool hasTrpId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *nlId;
@property (nonatomic, retain) SISchemaUUID *requestId;
@property (nonatomic, copy) NSString *resultCandidateId;
@property (nonatomic, retain) SISchemaUUID *trpId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)componentInvocationSource;
- (void)deleteComponentInvocationSource;
- (void)deleteNlId;
- (void)deleteRequestId;
- (void)deleteResultCandidateId;
- (void)deleteTrpId;
- (id)dictionaryRepresentation;
- (bool)hasComponentInvocationSource;
- (bool)hasNlId;
- (bool)hasRequestId;
- (bool)hasResultCandidateId;
- (bool)hasTrpId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)nlId;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (id)resultCandidateId;
- (void)setComponentInvocationSource:(int)arg1;
- (void)setHasComponentInvocationSource:(bool)arg1;
- (void)setHasNlId:(bool)arg1;
- (void)setHasRequestId:(bool)arg1;
- (void)setHasResultCandidateId:(bool)arg1;
- (void)setHasTrpId:(bool)arg1;
- (void)setNlId:(id)arg1;
- (void)setRequestId:(id)arg1;
- (void)setResultCandidateId:(id)arg1;
- (void)setTrpId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)trpId;
- (void)writeTo:(id)arg1;

@end
