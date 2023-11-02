
@interface CKDPThrottlingConfigRateLimit : PBCodable <NSCopying> {
    int  _allowedRequestCount;
    struct { 
        unsigned int startTimeSecondsAfterLocalMidnight : 1; 
        unsigned int startTimeSecondsAfterUnixEpoch : 1; 
        unsigned int allowedRequestCount : 1; 
        unsigned int intervalLengthSec : 1; 
        unsigned int repeatEverySec : 1; 
    }  _has;
    int  _intervalLengthSec;
    int  _repeatEverySec;
    long long  _startTimeSecondsAfterLocalMidnight;
    long long  _startTimeSecondsAfterUnixEpoch;
}

@property (nonatomic) int allowedRequestCount;
@property (nonatomic) bool hasAllowedRequestCount;
@property (nonatomic) bool hasIntervalLengthSec;
@property (nonatomic) bool hasRepeatEverySec;
@property (nonatomic) bool hasStartTimeSecondsAfterLocalMidnight;
@property (nonatomic) bool hasStartTimeSecondsAfterUnixEpoch;
@property (nonatomic) int intervalLengthSec;
@property (nonatomic) int repeatEverySec;
@property (nonatomic) long long startTimeSecondsAfterLocalMidnight;
@property (nonatomic) long long startTimeSecondsAfterUnixEpoch;

- (int)allowedRequestCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAllowedRequestCount;
- (bool)hasIntervalLengthSec;
- (bool)hasRepeatEverySec;
- (bool)hasStartTimeSecondsAfterLocalMidnight;
- (bool)hasStartTimeSecondsAfterUnixEpoch;
- (unsigned long long)hash;
- (int)intervalLengthSec;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)repeatEverySec;
- (void)setAllowedRequestCount:(int)arg1;
- (void)setHasAllowedRequestCount:(bool)arg1;
- (void)setHasIntervalLengthSec:(bool)arg1;
- (void)setHasRepeatEverySec:(bool)arg1;
- (void)setHasStartTimeSecondsAfterLocalMidnight:(bool)arg1;
- (void)setHasStartTimeSecondsAfterUnixEpoch:(bool)arg1;
- (void)setIntervalLengthSec:(int)arg1;
- (void)setRepeatEverySec:(int)arg1;
- (void)setStartTimeSecondsAfterLocalMidnight:(long long)arg1;
- (void)setStartTimeSecondsAfterUnixEpoch:(long long)arg1;
- (long long)startTimeSecondsAfterLocalMidnight;
- (long long)startTimeSecondsAfterUnixEpoch;
- (void)writeTo:(id)arg1;

@end
