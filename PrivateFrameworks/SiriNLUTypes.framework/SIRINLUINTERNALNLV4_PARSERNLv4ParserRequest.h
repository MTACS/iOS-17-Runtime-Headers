
@interface SIRINLUINTERNALNLV4_PARSERNLv4ParserRequest : PBRequest <NSCopying> {
    SIRINLUINTERNALNLv4EmbeddingTensor * _embeddings;
    struct { 
        unsigned int maxNumParses : 1; 
    }  _has;
    NSMutableArray * _matchingSpans;
    unsigned long long  _maxNumParses;
    SIRINLUEXTERNALRequestID * _nluRequestId;
    SIRINLUEXTERNALUUID * _requestId;
    SIRINLUINTERNALNLV4_PARSERTokenisation * _tokenisedUtterance;
    SIRINLUEXTERNALTurnInput * _turnInput;
}

@property (nonatomic, retain) SIRINLUINTERNALNLv4EmbeddingTensor *embeddings;
@property (nonatomic, readonly) bool hasEmbeddings;
@property (nonatomic) bool hasMaxNumParses;
@property (nonatomic, readonly) bool hasNluRequestId;
@property (nonatomic, readonly) bool hasRequestId;
@property (nonatomic, readonly) bool hasTokenisedUtterance;
@property (nonatomic, readonly) bool hasTurnInput;
@property (nonatomic, retain) NSMutableArray *matchingSpans;
@property (nonatomic) unsigned long long maxNumParses;
@property (nonatomic, retain) SIRINLUEXTERNALRequestID *nluRequestId;
@property (nonatomic, retain) SIRINLUEXTERNALUUID *requestId;
@property (nonatomic, retain) SIRINLUINTERNALNLV4_PARSERTokenisation *tokenisedUtterance;
@property (nonatomic, retain) SIRINLUEXTERNALTurnInput *turnInput;

+ (Class)matchingSpansType;

- (void).cxx_destruct;
- (void)addMatchingSpans:(id)arg1;
- (void)clearMatchingSpans;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)embeddings;
- (bool)hasEmbeddings;
- (bool)hasMaxNumParses;
- (bool)hasNluRequestId;
- (bool)hasRequestId;
- (bool)hasTokenisedUtterance;
- (bool)hasTurnInput;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)matchingSpans;
- (id)matchingSpansAtIndex:(unsigned long long)arg1;
- (unsigned long long)matchingSpansCount;
- (unsigned long long)maxNumParses;
- (void)mergeFrom:(id)arg1;
- (id)nluRequestId;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (void)setEmbeddings:(id)arg1;
- (void)setHasMaxNumParses:(bool)arg1;
- (void)setMatchingSpans:(id)arg1;
- (void)setMaxNumParses:(unsigned long long)arg1;
- (void)setNluRequestId:(id)arg1;
- (void)setRequestId:(id)arg1;
- (void)setTokenisedUtterance:(id)arg1;
- (void)setTurnInput:(id)arg1;
- (id)tokenisedUtterance;
- (id)turnInput;
- (void)writeTo:(id)arg1;

@end
