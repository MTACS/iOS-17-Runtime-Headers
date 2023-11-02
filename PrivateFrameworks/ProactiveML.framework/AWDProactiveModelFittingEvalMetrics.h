
@interface AWDProactiveModelFittingEvalMetrics : PBCodable <NSCopying> {
    float  _f1;
    unsigned long long  _falseNegatives;
    unsigned long long  _falsePositives;
    struct { 
        unsigned int falseNegatives : 1; 
        unsigned int falsePositives : 1; 
        unsigned int trueNegatives : 1; 
        unsigned int truePositives : 1; 
        unsigned int f1 : 1; 
        unsigned int rmse : 1; 
        unsigned int secsToExecute : 1; 
    }  _has;
    struct { 
        float *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _negativeScores;
    struct { 
        float *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _positiveScores;
    float  _rmse;
    float  _secsToExecute;
    unsigned long long  _trueNegatives;
    unsigned long long  _truePositives;
}

@property (nonatomic) float f1;
@property (nonatomic) unsigned long long falseNegatives;
@property (nonatomic) unsigned long long falsePositives;
@property (nonatomic) bool hasF1;
@property (nonatomic) bool hasFalseNegatives;
@property (nonatomic) bool hasFalsePositives;
@property (nonatomic) bool hasRmse;
@property (nonatomic) bool hasSecsToExecute;
@property (nonatomic) bool hasTrueNegatives;
@property (nonatomic) bool hasTruePositives;
@property (nonatomic, readonly) float*negativeScores;
@property (nonatomic, readonly) unsigned long long negativeScoresCount;
@property (nonatomic, readonly) float*positiveScores;
@property (nonatomic, readonly) unsigned long long positiveScoresCount;
@property (nonatomic) float rmse;
@property (nonatomic) float secsToExecute;
@property (nonatomic) unsigned long long trueNegatives;
@property (nonatomic) unsigned long long truePositives;

+ (id)evalMetricsWithRmse:(float)arg1 f1:(float)arg2;
+ (id)evalMetricsWithRmse:(float)arg1 f1:(float)arg2 truePositives:(unsigned long long)arg3 trueNegatives:(unsigned long long)arg4 falsePositives:(unsigned long long)arg5 falseNegatives:(unsigned long long)arg6;

- (void)addNegativeScores:(float)arg1;
- (void)addPositiveScores:(float)arg1;
- (void)clearNegativeScores;
- (void)clearPositiveScores;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (float)f1;
- (unsigned long long)falseNegatives;
- (unsigned long long)falsePositives;
- (bool)hasF1;
- (bool)hasFalseNegatives;
- (bool)hasFalsePositives;
- (bool)hasRmse;
- (bool)hasSecsToExecute;
- (bool)hasTrueNegatives;
- (bool)hasTruePositives;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (float*)negativeScores;
- (float)negativeScoresAtIndex:(unsigned long long)arg1;
- (unsigned long long)negativeScoresCount;
- (float*)positiveScores;
- (float)positiveScoresAtIndex:(unsigned long long)arg1;
- (unsigned long long)positiveScoresCount;
- (bool)readFrom:(id)arg1;
- (float)rmse;
- (float)secsToExecute;
- (void)setF1:(float)arg1;
- (void)setFalseNegatives:(unsigned long long)arg1;
- (void)setFalsePositives:(unsigned long long)arg1;
- (void)setHasF1:(bool)arg1;
- (void)setHasFalseNegatives:(bool)arg1;
- (void)setHasFalsePositives:(bool)arg1;
- (void)setHasRmse:(bool)arg1;
- (void)setHasSecsToExecute:(bool)arg1;
- (void)setHasTrueNegatives:(bool)arg1;
- (void)setHasTruePositives:(bool)arg1;
- (void)setNegativeScores:(float*)arg1 count:(unsigned long long)arg2;
- (void)setPositiveScores:(float*)arg1 count:(unsigned long long)arg2;
- (void)setRmse:(float)arg1;
- (void)setSecsToExecute:(float)arg1;
- (void)setTrueNegatives:(unsigned long long)arg1;
- (void)setTruePositives:(unsigned long long)arg1;
- (id)toDictionary;
- (unsigned long long)trueNegatives;
- (unsigned long long)truePositives;
- (void)writeTo:(id)arg1;

@end