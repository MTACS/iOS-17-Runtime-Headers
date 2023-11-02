
@interface SIRINLUINTERNALQUERYREWRITEQRUtterance : PBCodable <NSCopying> {
    SIRINLUEXTERNALUUID * _asrId;
    NSMutableArray * _asrUtteranceTokens;
    double  _confidence;
    struct { 
        unsigned int confidence : 1; 
    }  _has;
    NSString * _utterance;
    NSMutableArray * _utteranceTokens;
}

@property (nonatomic, retain) SIRINLUEXTERNALUUID *asrId;
@property (nonatomic, retain) NSMutableArray *asrUtteranceTokens;
@property (nonatomic) double confidence;
@property (nonatomic, readonly) bool hasAsrId;
@property (nonatomic) bool hasConfidence;
@property (nonatomic, readonly) bool hasUtterance;
@property (nonatomic, retain) NSString *utterance;
@property (nonatomic, retain) NSMutableArray *utteranceTokens;

+ (Class)asrUtteranceTokensType;
+ (id)options;
+ (Class)utteranceTokensType;

- (void).cxx_destruct;
- (void)addAsrUtteranceTokens:(id)arg1;
- (void)addUtteranceTokens:(id)arg1;
- (id)asrId;
- (id)asrUtteranceTokens;
- (id)asrUtteranceTokensAtIndex:(unsigned long long)arg1;
- (unsigned long long)asrUtteranceTokensCount;
- (void)clearAsrUtteranceTokens;
- (void)clearUtteranceTokens;
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
- (bool)readFrom:(id)arg1;
- (void)setAsrId:(id)arg1;
- (void)setAsrUtteranceTokens:(id)arg1;
- (void)setConfidence:(double)arg1;
- (void)setHasConfidence:(bool)arg1;
- (void)setUtterance:(id)arg1;
- (void)setUtteranceTokens:(id)arg1;
- (id)utterance;
- (id)utteranceTokens;
- (id)utteranceTokensAtIndex:(unsigned long long)arg1;
- (unsigned long long)utteranceTokensCount;
- (void)writeTo:(id)arg1;

@end
