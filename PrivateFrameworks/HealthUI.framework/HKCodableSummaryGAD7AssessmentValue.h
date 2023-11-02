
@interface HKCodableSummaryGAD7AssessmentValue : PBCodable <NSCopying> {
    double  _dateData;
    struct APPLE_HKCodableSummaryGAD7AssessmentValue_1 { 
        unsigned int dateData : 1; 
        unsigned int risk : 1; 
        unsigned int score : 1; 
    }  _has;
    long long  _risk;
    long long  _score;
}

@property (nonatomic) double dateData;
@property (nonatomic) bool hasDateData;
@property (nonatomic) bool hasRisk;
@property (nonatomic) bool hasScore;
@property (nonatomic) long long risk;
@property (nonatomic) long long score;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dateData;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDateData;
- (bool)hasRisk;
- (bool)hasScore;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (long long)risk;
- (long long)score;
- (void)setDateData:(double)arg1;
- (void)setHasDateData:(bool)arg1;
- (void)setHasRisk:(bool)arg1;
- (void)setHasScore:(bool)arg1;
- (void)setRisk:(long long)arg1;
- (void)setScore:(long long)arg1;
- (void)writeTo:(id)arg1;

@end
