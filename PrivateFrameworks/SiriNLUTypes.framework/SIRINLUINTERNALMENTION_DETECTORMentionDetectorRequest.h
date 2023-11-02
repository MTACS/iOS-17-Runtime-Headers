
@interface SIRINLUINTERNALMENTION_DETECTORMentionDetectorRequest : PBRequest <NSCopying> {
    SIRINLUEXTERNALRequestID * _cdmRequestId;
    SIRINLUINTERNALNLv4EmbeddingTensor * _embeddingTensor;
    struct { 
        unsigned int maxCandidates : 1; 
    }  _has;
    unsigned long long  _maxCandidates;
    SIRINLUEXTERNALUUID * _nluRequestId;
    SIRINLUEXTERNALUUID * _requestId;
    NSString * _resultCandidateId;
    SIRINLUINTERNALTokenChain * _tokenChain;
    NSString * _utterance;
}

@property (nonatomic, retain) SIRINLUEXTERNALRequestID *cdmRequestId;
@property (nonatomic, retain) SIRINLUINTERNALNLv4EmbeddingTensor *embeddingTensor;
@property (nonatomic, readonly) bool hasCdmRequestId;
@property (nonatomic, readonly) bool hasEmbeddingTensor;
@property (nonatomic) bool hasMaxCandidates;
@property (nonatomic, readonly) bool hasNluRequestId;
@property (nonatomic, readonly) bool hasRequestId;
@property (nonatomic, readonly) bool hasResultCandidateId;
@property (nonatomic, readonly) bool hasTokenChain;
@property (nonatomic, readonly) bool hasUtterance;
@property (nonatomic) unsigned long long maxCandidates;
@property (nonatomic, retain) SIRINLUEXTERNALUUID *nluRequestId;
@property (nonatomic, retain) SIRINLUEXTERNALUUID *requestId;
@property (nonatomic, retain) NSString *resultCandidateId;
@property (nonatomic, retain) SIRINLUINTERNALTokenChain *tokenChain;
@property (nonatomic, retain) NSString *utterance;

- (void).cxx_destruct;
- (id)cdmRequestId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)embeddingTensor;
- (bool)hasCdmRequestId;
- (bool)hasEmbeddingTensor;
- (bool)hasMaxCandidates;
- (bool)hasNluRequestId;
- (bool)hasRequestId;
- (bool)hasResultCandidateId;
- (bool)hasTokenChain;
- (bool)hasUtterance;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)maxCandidates;
- (void)mergeFrom:(id)arg1;
- (id)nluRequestId;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (id)resultCandidateId;
- (void)setCdmRequestId:(id)arg1;
- (void)setEmbeddingTensor:(id)arg1;
- (void)setHasMaxCandidates:(bool)arg1;
- (void)setMaxCandidates:(unsigned long long)arg1;
- (void)setNluRequestId:(id)arg1;
- (void)setRequestId:(id)arg1;
- (void)setResultCandidateId:(id)arg1;
- (void)setTokenChain:(id)arg1;
- (void)setUtterance:(id)arg1;
- (id)tokenChain;
- (id)utterance;
- (void)writeTo:(id)arg1;

@end
