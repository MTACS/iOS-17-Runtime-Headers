
@interface SCLPBTimeInterval : PBCodable <NSCopying> {
    SCLPBScheduleTime * _endTime;
    SCLPBScheduleTime * _startTime;
}

@property (nonatomic, retain) SCLPBScheduleTime *endTime;
@property (nonatomic, readonly) bool hasEndTime;
@property (nonatomic, readonly) bool hasStartTime;
@property (nonatomic, retain) SCLPBScheduleTime *startTime;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)endTime;
- (bool)hasEndTime;
- (bool)hasStartTime;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEndTime:(id)arg1;
- (void)setStartTime:(id)arg1;
- (id)startTime;
- (void)writeTo:(id)arg1;

@end
