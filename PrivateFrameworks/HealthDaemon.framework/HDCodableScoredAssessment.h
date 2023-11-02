
@interface HDCodableScoredAssessment : PBCodable <HDDecoding, NSCopying> {
    NSData * _answers;
    struct { 
        unsigned int risk : 1; 
        unsigned int score : 1; 
    }  _has;
    long long  _risk;
    HDCodableSample * _sample;
    long long  _score;
}

@property (nonatomic, retain) NSData *answers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAnswers;
@property (nonatomic) bool hasRisk;
@property (nonatomic, readonly) bool hasSample;
@property (nonatomic) bool hasScore;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long risk;
@property (nonatomic, retain) HDCodableSample *sample;
@property (nonatomic) long long score;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)answers;
- (bool)applyToObject:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAnswers;
- (bool)hasRisk;
- (bool)hasSample;
- (bool)hasScore;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (long long)risk;
- (id)sample;
- (long long)score;
- (void)setAnswers:(id)arg1;
- (void)setHasRisk:(bool)arg1;
- (void)setHasScore:(bool)arg1;
- (void)setRisk:(long long)arg1;
- (void)setSample:(id)arg1;
- (void)setScore:(long long)arg1;
- (void)writeTo:(id)arg1;

@end
