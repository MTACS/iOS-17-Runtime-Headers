
@interface CAMSchemaCAMClientEventMetadata : SISchemaInstrumentationMessage {
    SISchemaUUID * _camId;
    int  _feature;
    struct { 
        unsigned int feature : 1; 
    }  _has;
    bool  _hasCamId;
    bool  _hasRequestId;
    bool  _hasResultCandidateId;
    bool  _hasTrpId;
    SISchemaUUID * _requestId;
    NSString * _resultCandidateId;
    SISchemaUUID * _trpId;
}

@property (nonatomic, retain) SISchemaUUID *camId;
@property (nonatomic) int feature;
@property (nonatomic) bool hasCamId;
@property (nonatomic) bool hasFeature;
@property (nonatomic) bool hasRequestId;
@property (nonatomic) bool hasResultCandidateId;
@property (nonatomic) bool hasTrpId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *requestId;
@property (nonatomic, copy) NSString *resultCandidateId;
@property (nonatomic, retain) SISchemaUUID *trpId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)camId;
- (void)deleteCamId;
- (void)deleteFeature;
- (void)deleteRequestId;
- (void)deleteResultCandidateId;
- (void)deleteTrpId;
- (id)dictionaryRepresentation;
- (int)feature;
- (bool)hasCamId;
- (bool)hasFeature;
- (bool)hasRequestId;
- (bool)hasResultCandidateId;
- (bool)hasTrpId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (id)resultCandidateId;
- (void)setCamId:(id)arg1;
- (void)setFeature:(int)arg1;
- (void)setHasCamId:(bool)arg1;
- (void)setHasFeature:(bool)arg1;
- (void)setHasRequestId:(bool)arg1;
- (void)setHasResultCandidateId:(bool)arg1;
- (void)setHasTrpId:(bool)arg1;
- (void)setRequestId:(id)arg1;
- (void)setResultCandidateId:(id)arg1;
- (void)setTrpId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)trpId;
- (void)writeTo:(id)arg1;

@end
