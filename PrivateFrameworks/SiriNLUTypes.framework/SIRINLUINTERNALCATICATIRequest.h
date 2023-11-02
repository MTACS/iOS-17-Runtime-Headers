
@interface SIRINLUINTERNALCATICATIRequest : PBRequest <NSCopying> {
    SIRINLUINTERNALNLv4EmbeddingTensor * _embeddings;
    NSString * _normalisedUtterance;
    NSString * _originalUtterance;
    SIRINLUEXTERNALUUID * _requestId;
    SIRINLUEXTERNALTurnInput * _turnInput;
}

@property (nonatomic, retain) SIRINLUINTERNALNLv4EmbeddingTensor *embeddings;
@property (nonatomic, readonly) bool hasEmbeddings;
@property (nonatomic, readonly) bool hasNormalisedUtterance;
@property (nonatomic, readonly) bool hasOriginalUtterance;
@property (nonatomic, readonly) bool hasRequestId;
@property (nonatomic, readonly) bool hasTurnInput;
@property (nonatomic, retain) NSString *normalisedUtterance;
@property (nonatomic, retain) NSString *originalUtterance;
@property (nonatomic, retain) SIRINLUEXTERNALUUID *requestId;
@property (nonatomic, retain) SIRINLUEXTERNALTurnInput *turnInput;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)embeddings;
- (bool)hasEmbeddings;
- (bool)hasNormalisedUtterance;
- (bool)hasOriginalUtterance;
- (bool)hasRequestId;
- (bool)hasTurnInput;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)normalisedUtterance;
- (id)originalUtterance;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (void)setEmbeddings:(id)arg1;
- (void)setNormalisedUtterance:(id)arg1;
- (void)setOriginalUtterance:(id)arg1;
- (void)setRequestId:(id)arg1;
- (void)setTurnInput:(id)arg1;
- (id)turnInput;
- (void)writeTo:(id)arg1;

@end
