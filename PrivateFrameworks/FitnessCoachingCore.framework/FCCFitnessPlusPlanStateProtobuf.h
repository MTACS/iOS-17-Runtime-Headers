
@interface FCCFitnessPlusPlanStateProtobuf : PBCodable <NSCopying> {
    bool  _hasWorkoutScheduledToday;
}

@property (nonatomic) bool hasWorkoutScheduledToday;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasWorkoutScheduledToday;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasWorkoutScheduledToday:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
