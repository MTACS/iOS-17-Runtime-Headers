
@interface CLPWorkoutUpdateMotionActivity : PBCodable <NSCopying> {
    int  _activityType;
    struct { 
        unsigned int startTime : 1; 
        unsigned int timestamp : 1; 
        unsigned int activityType : 1; 
    }  _has;
    double  _startTime;
    double  _timestamp;
}

@property (nonatomic) int activityType;
@property (nonatomic) bool hasActivityType;
@property (nonatomic) bool hasStartTime;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) double startTime;
@property (nonatomic) double timestamp;

- (int)activityType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActivityType;
- (bool)hasStartTime;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActivityType:(int)arg1;
- (void)setHasActivityType:(bool)arg1;
- (void)setHasStartTime:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setStartTime:(double)arg1;
- (void)setTimestamp:(double)arg1;
- (double)startTime;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
