
@interface TRILogTime : PBCodable <NSCopying> {
    struct { 
        unsigned int secondsSince1970 : 1; 
        unsigned int minutesDstOffset : 1; 
        unsigned int secondsFromUtc : 1; 
    }  _has;
    int  _minutesDstOffset;
    int  _secondsFromUtc;
    unsigned long long  _secondsSince1970;
}

@property (nonatomic) bool hasMinutesDstOffset;
@property (nonatomic) bool hasSecondsFromUtc;
@property (nonatomic) bool hasSecondsSince1970;
@property (nonatomic) int minutesDstOffset;
@property (nonatomic) int secondsFromUtc;
@property (nonatomic) unsigned long long secondsSince1970;

+ (id)logTimeFromDate:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMinutesDstOffset;
- (bool)hasSecondsFromUtc;
- (bool)hasSecondsSince1970;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)minutesDstOffset;
- (bool)readFrom:(id)arg1;
- (int)secondsFromUtc;
- (unsigned long long)secondsSince1970;
- (void)setHasMinutesDstOffset:(bool)arg1;
- (void)setHasSecondsFromUtc:(bool)arg1;
- (void)setHasSecondsSince1970:(bool)arg1;
- (void)setMinutesDstOffset:(int)arg1;
- (void)setSecondsFromUtc:(int)arg1;
- (void)setSecondsSince1970:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
