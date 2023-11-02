
@interface HMUserActionPredictionDuetPredictionValue : PBCodable <NSCopying> {
    struct { 
        unsigned int score : 1; 
        unsigned int predictionType : 1; 
    }  _has;
    NSString * _homeIdentifier;
    int  _predictionType;
    double  _score;
    NSString * _targetAccessoryServiceIdentifier;
    NSString * _targetIdentifier;
}

@property (nonatomic, readonly) bool hasHomeIdentifier;
@property (nonatomic) bool hasPredictionType;
@property (nonatomic) bool hasScore;
@property (nonatomic, readonly) bool hasTargetAccessoryServiceIdentifier;
@property (nonatomic, readonly) bool hasTargetIdentifier;
@property (nonatomic, retain) NSString *homeIdentifier;
@property (nonatomic) int predictionType;
@property (nonatomic) double score;
@property (nonatomic, retain) NSString *targetAccessoryServiceIdentifier;
@property (nonatomic, retain) NSString *targetIdentifier;

- (void).cxx_destruct;
- (int)StringAsPredictionType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHomeIdentifier;
- (bool)hasPredictionType;
- (bool)hasScore;
- (bool)hasTargetAccessoryServiceIdentifier;
- (bool)hasTargetIdentifier;
- (unsigned long long)hash;
- (id)homeIdentifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)predictionType;
- (id)predictionTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (double)score;
- (void)setHasPredictionType:(bool)arg1;
- (void)setHasScore:(bool)arg1;
- (void)setHomeIdentifier:(id)arg1;
- (void)setPredictionType:(int)arg1;
- (void)setScore:(double)arg1;
- (void)setTargetAccessoryServiceIdentifier:(id)arg1;
- (void)setTargetIdentifier:(id)arg1;
- (id)targetAccessoryServiceIdentifier;
- (id)targetIdentifier;
- (void)writeTo:(id)arg1;

@end
