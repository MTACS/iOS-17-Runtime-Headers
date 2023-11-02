
@interface POMMESSchemaPOMMESClientEventMetadata : SISchemaInstrumentationMessage {
    struct { 
        unsigned int originProcess : 1; 
    }  _has;
    bool  _hasPommesId;
    bool  _hasRequestId;
    bool  _hasResultCandidateId;
    bool  _hasTrpId;
    int  _originProcess;
    SISchemaUUID * _pommesId;
    SISchemaUUID * _requestId;
    NSString * _resultCandidateId;
    SISchemaUUID * _trpId;
}

@property (nonatomic) bool hasOriginProcess;
@property (nonatomic) bool hasPommesId;
@property (nonatomic) bool hasRequestId;
@property (nonatomic) bool hasResultCandidateId;
@property (nonatomic) bool hasTrpId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int originProcess;
@property (nonatomic, retain) SISchemaUUID *pommesId;
@property (nonatomic, retain) SISchemaUUID *requestId;
@property (nonatomic, copy) NSString *resultCandidateId;
@property (nonatomic, retain) SISchemaUUID *trpId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteOriginProcess;
- (void)deletePommesId;
- (void)deleteRequestId;
- (void)deleteResultCandidateId;
- (void)deleteTrpId;
- (id)dictionaryRepresentation;
- (bool)hasOriginProcess;
- (bool)hasPommesId;
- (bool)hasRequestId;
- (bool)hasResultCandidateId;
- (bool)hasTrpId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)originProcess;
- (id)pommesId;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (id)resultCandidateId;
- (void)setHasOriginProcess:(bool)arg1;
- (void)setHasPommesId:(bool)arg1;
- (void)setHasRequestId:(bool)arg1;
- (void)setHasResultCandidateId:(bool)arg1;
- (void)setHasTrpId:(bool)arg1;
- (void)setOriginProcess:(int)arg1;
- (void)setPommesId:(id)arg1;
- (void)setRequestId:(id)arg1;
- (void)setResultCandidateId:(id)arg1;
- (void)setTrpId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)trpId;
- (void)writeTo:(id)arg1;

@end
