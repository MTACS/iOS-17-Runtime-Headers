
@interface SIRINLUEXTERNALAsrHypothesis : PBCodable <NSCopying> {
    NSMutableArray * _asrTokens;
    struct { 
        unsigned int probability : 1; 
    }  _has;
    SIRINLUEXTERNALUUID * _idA;
    double  _probability;
    NSMutableArray * _rewrittenUtterances;
    NSString * _utterance;
}

@property (nonatomic, retain) NSMutableArray *asrTokens;
@property (nonatomic, readonly) bool hasIdA;
@property (nonatomic) bool hasProbability;
@property (nonatomic, readonly) bool hasUtterance;
@property (nonatomic, retain) SIRINLUEXTERNALUUID *idA;
@property (nonatomic) double probability;
@property (nonatomic, retain) NSMutableArray *rewrittenUtterances;
@property (nonatomic, retain) NSString *utterance;

+ (Class)asrTokensType;
+ (Class)rewrittenUtterancesType;

- (void).cxx_destruct;
- (void)addAsrTokens:(id)arg1;
- (void)addRewrittenUtterances:(id)arg1;
- (id)asrTokens;
- (id)asrTokensAtIndex:(unsigned long long)arg1;
- (unsigned long long)asrTokensCount;
- (void)clearAsrTokens;
- (void)clearRewrittenUtterances;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdA;
- (bool)hasProbability;
- (bool)hasUtterance;
- (unsigned long long)hash;
- (id)idA;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)probability;
- (bool)readFrom:(id)arg1;
- (id)rewrittenUtterances;
- (id)rewrittenUtterancesAtIndex:(unsigned long long)arg1;
- (unsigned long long)rewrittenUtterancesCount;
- (void)setAsrTokens:(id)arg1;
- (void)setHasProbability:(bool)arg1;
- (void)setIdA:(id)arg1;
- (void)setProbability:(double)arg1;
- (void)setRewrittenUtterances:(id)arg1;
- (void)setUtterance:(id)arg1;
- (id)utterance;
- (void)writeTo:(id)arg1;

@end
