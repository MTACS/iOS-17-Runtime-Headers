
@interface SIRINLUINTERNALUAAP_PARSERUaaPParserRequest : PBRequest <NSCopying> {
    SIRINLUINTERNALNLv4EmbeddingTensor * _embeddings;
    struct { 
        unsigned int maxNumParses : 1; 
    }  _has;
    NSMutableArray * _matchingSpans;
    unsigned long long  _maxNumParses;
    SIRINLUEXTERNALUUID * _requestId;
    SIRINLUINTERNALTokenChain * _tokenChain;
    SIRINLUEXTERNALTurnInput * _turnInput;
}

@property (nonatomic, retain) SIRINLUINTERNALNLv4EmbeddingTensor *embeddings;
@property (nonatomic, readonly) bool hasEmbeddings;
@property (nonatomic) bool hasMaxNumParses;
@property (nonatomic, readonly) bool hasRequestId;
@property (nonatomic, readonly) bool hasTokenChain;
@property (nonatomic, readonly) bool hasTurnInput;
@property (nonatomic, retain) NSMutableArray *matchingSpans;
@property (nonatomic) unsigned long long maxNumParses;
@property (nonatomic, retain) SIRINLUEXTERNALUUID *requestId;
@property (nonatomic, retain) SIRINLUINTERNALTokenChain *tokenChain;
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
- (bool)hasRequestId;
- (bool)hasTokenChain;
- (bool)hasTurnInput;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)matchingSpans;
- (id)matchingSpansAtIndex:(unsigned long long)arg1;
- (unsigned long long)matchingSpansCount;
- (unsigned long long)maxNumParses;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (void)setEmbeddings:(id)arg1;
- (void)setHasMaxNumParses:(bool)arg1;
- (void)setMatchingSpans:(id)arg1;
- (void)setMaxNumParses:(unsigned long long)arg1;
- (void)setRequestId:(id)arg1;
- (void)setTokenChain:(id)arg1;
- (void)setTurnInput:(id)arg1;
- (id)tokenChain;
- (id)turnInput;
- (void)writeTo:(id)arg1;

@end
