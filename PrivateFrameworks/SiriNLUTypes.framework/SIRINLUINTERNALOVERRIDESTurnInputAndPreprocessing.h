
@interface SIRINLUINTERNALOVERRIDESTurnInputAndPreprocessing : PBCodable <NSCopying> {
    NSMutableArray * _matchingSpans;
    SIRINLUINTERNALTokenChain * _tokenChain;
    SIRINLUEXTERNALTurnInput * _turnInput;
    NSString * _utterance;
}

@property (nonatomic, readonly) bool hasTokenChain;
@property (nonatomic, readonly) bool hasTurnInput;
@property (nonatomic, readonly) bool hasUtterance;
@property (nonatomic, retain) NSMutableArray *matchingSpans;
@property (nonatomic, retain) SIRINLUINTERNALTokenChain *tokenChain;
@property (nonatomic, retain) SIRINLUEXTERNALTurnInput *turnInput;
@property (nonatomic, retain) NSString *utterance;

+ (Class)matchingSpansType;

- (void).cxx_destruct;
- (void)addMatchingSpans:(id)arg1;
- (void)clearMatchingSpans;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTokenChain;
- (bool)hasTurnInput;
- (bool)hasUtterance;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)matchingSpans;
- (id)matchingSpansAtIndex:(unsigned long long)arg1;
- (unsigned long long)matchingSpansCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setMatchingSpans:(id)arg1;
- (void)setTokenChain:(id)arg1;
- (void)setTurnInput:(id)arg1;
- (void)setUtterance:(id)arg1;
- (id)tokenChain;
- (id)turnInput;
- (id)utterance;
- (void)writeTo:(id)arg1;

@end
