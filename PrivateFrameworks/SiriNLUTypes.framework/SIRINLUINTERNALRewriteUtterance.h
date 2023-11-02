
@interface SIRINLUINTERNALRewriteUtterance : PBCodable <NSCopying> {
    SIRINLUEXTERNALUUID * _asrId;
    NSMutableArray * _asrUtteranceTokens;
    double  _confidence;
    struct { 
        unsigned int confidence : 1; 
    }  _has;
    NSMutableArray * _nluInternalTokens;
    NSString * _utterance;
}

@property (nonatomic, retain) SIRINLUEXTERNALUUID *asrId;
@property (nonatomic, retain) NSMutableArray *asrUtteranceTokens;
@property (nonatomic) double confidence;
@property (nonatomic, readonly) bool hasAsrId;
@property (nonatomic) bool hasConfidence;
@property (nonatomic, readonly) bool hasUtterance;
@property (nonatomic, retain) NSMutableArray *nluInternalTokens;
@property (nonatomic, retain) NSString *utterance;

+ (Class)asrUtteranceTokensType;
+ (Class)nluInternalTokensType;

- (void).cxx_destruct;
- (void)addAsrUtteranceTokens:(id)arg1;
- (void)addNluInternalTokens:(id)arg1;
- (id)asrId;
- (id)asrUtteranceTokens;
- (id)asrUtteranceTokensAtIndex:(unsigned long long)arg1;
- (unsigned long long)asrUtteranceTokensCount;
- (void)clearAsrUtteranceTokens;
- (void)clearNluInternalTokens;
- (double)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAsrId;
- (bool)hasConfidence;
- (bool)hasUtterance;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nluInternalTokens;
- (id)nluInternalTokensAtIndex:(unsigned long long)arg1;
- (unsigned long long)nluInternalTokensCount;
- (bool)readFrom:(id)arg1;
- (void)setAsrId:(id)arg1;
- (void)setAsrUtteranceTokens:(id)arg1;
- (void)setConfidence:(double)arg1;
- (void)setHasConfidence:(bool)arg1;
- (void)setNluInternalTokens:(id)arg1;
- (void)setUtterance:(id)arg1;
- (id)utterance;
- (void)writeTo:(id)arg1;

@end
