
@interface BMPBSiriInferredHelpfulnessEvent : PBCodable <NSCopying> {
    double  _absoluteTimestamp;
    struct { 
        unsigned int absoluteTimestamp : 1; 
        unsigned int inferredHelpfulnessScore : 1; 
        unsigned int restatementScore : 1; 
    }  _has;
    double  _inferredHelpfulnessScore;
    NSString * _modelID;
    double  _restatementScore;
    NSString * _turnID;
}

@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) bool hasAbsoluteTimestamp;
@property (nonatomic) bool hasInferredHelpfulnessScore;
@property (nonatomic, readonly) bool hasModelID;
@property (nonatomic) bool hasRestatementScore;
@property (nonatomic, readonly) bool hasTurnID;
@property (nonatomic) double inferredHelpfulnessScore;
@property (nonatomic, retain) NSString *modelID;
@property (nonatomic) double restatementScore;
@property (nonatomic, retain) NSString *turnID;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAbsoluteTimestamp;
- (bool)hasInferredHelpfulnessScore;
- (bool)hasModelID;
- (bool)hasRestatementScore;
- (bool)hasTurnID;
- (unsigned long long)hash;
- (double)inferredHelpfulnessScore;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)modelID;
- (bool)readFrom:(id)arg1;
- (double)restatementScore;
- (void)setAbsoluteTimestamp:(double)arg1;
- (void)setHasAbsoluteTimestamp:(bool)arg1;
- (void)setHasInferredHelpfulnessScore:(bool)arg1;
- (void)setHasRestatementScore:(bool)arg1;
- (void)setInferredHelpfulnessScore:(double)arg1;
- (void)setModelID:(id)arg1;
- (void)setRestatementScore:(double)arg1;
- (void)setTurnID:(id)arg1;
- (id)turnID;
- (void)writeTo:(id)arg1;

@end
