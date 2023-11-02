
@interface GEOLogMsgEventStateTiming : PBCodable <NSCopying> {
    double  _durationInOldState;
    struct { 
        unsigned int has_durationInOldState : 1; 
    }  _flags;
    NSMutableArray * _stateTransitionFeedbacks;
}

@property (nonatomic) double durationInOldState;
@property (nonatomic) bool hasDurationInOldState;
@property (nonatomic, retain) NSMutableArray *stateTransitionFeedbacks;

+ (bool)isValid:(id)arg1;
+ (Class)stateTransitionFeedbackType;

- (void).cxx_destruct;
- (void)addStateTransitionFeedback:(id)arg1;
- (void)clearStateTransitionFeedbacks;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)durationInOldState;
- (bool)hasDurationInOldState;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDurationInOldState:(double)arg1;
- (void)setHasDurationInOldState:(bool)arg1;
- (void)setStateTransitionFeedbacks:(id)arg1;
- (id)stateTransitionFeedbackAtIndex:(unsigned long long)arg1;
- (id)stateTransitionFeedbacks;
- (unsigned long long)stateTransitionFeedbacksCount;
- (void)writeTo:(id)arg1;

@end
