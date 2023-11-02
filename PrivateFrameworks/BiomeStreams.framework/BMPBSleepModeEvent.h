
@interface BMPBSleepModeEvent : PBCodable <NSCopying> {
    double  _expectedEndDate;
    struct { 
        unsigned int expectedEndDate : 1; 
        unsigned int sleepModeChangeReason : 1; 
        unsigned int sleepModeState : 1; 
    }  _has;
    int  _sleepModeChangeReason;
    int  _sleepModeState;
}

@property (nonatomic) double expectedEndDate;
@property (nonatomic) bool hasExpectedEndDate;
@property (nonatomic) bool hasSleepModeChangeReason;
@property (nonatomic) bool hasSleepModeState;
@property (nonatomic) int sleepModeChangeReason;
@property (nonatomic) int sleepModeState;

- (int)StringAsSleepModeChangeReason:(id)arg1;
- (int)StringAsSleepModeState:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)expectedEndDate;
- (bool)hasExpectedEndDate;
- (bool)hasSleepModeChangeReason;
- (bool)hasSleepModeState;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setExpectedEndDate:(double)arg1;
- (void)setHasExpectedEndDate:(bool)arg1;
- (void)setHasSleepModeChangeReason:(bool)arg1;
- (void)setHasSleepModeState:(bool)arg1;
- (void)setSleepModeChangeReason:(int)arg1;
- (void)setSleepModeState:(int)arg1;
- (int)sleepModeChangeReason;
- (id)sleepModeChangeReasonAsString:(int)arg1;
- (int)sleepModeState;
- (id)sleepModeStateAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
