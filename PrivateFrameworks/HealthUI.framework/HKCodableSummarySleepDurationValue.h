
@interface HKCodableSummarySleepDurationValue : PBCodable <NSCopying> {
    double  _asleepDuration;
    double  _endOfSleepTimeIntervalSinceReferenceDate;
    struct APPLE_HKCodableSummarySleepDurationValue_1 { 
        unsigned int asleepDuration : 1; 
        unsigned int endOfSleepTimeIntervalSinceReferenceDate : 1; 
        unsigned int inBedDuration : 1; 
    }  _has;
    double  _inBedDuration;
}

@property (nonatomic) double asleepDuration;
@property (nonatomic) double endOfSleepTimeIntervalSinceReferenceDate;
@property (nonatomic) bool hasAsleepDuration;
@property (nonatomic) bool hasEndOfSleepTimeIntervalSinceReferenceDate;
@property (nonatomic) bool hasInBedDuration;
@property (nonatomic) double inBedDuration;

- (double)asleepDuration;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)endOfSleepTimeIntervalSinceReferenceDate;
- (bool)hasAsleepDuration;
- (bool)hasEndOfSleepTimeIntervalSinceReferenceDate;
- (bool)hasInBedDuration;
- (unsigned long long)hash;
- (double)inBedDuration;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAsleepDuration:(double)arg1;
- (void)setEndOfSleepTimeIntervalSinceReferenceDate:(double)arg1;
- (void)setHasAsleepDuration:(bool)arg1;
- (void)setHasEndOfSleepTimeIntervalSinceReferenceDate:(bool)arg1;
- (void)setHasInBedDuration:(bool)arg1;
- (void)setInBedDuration:(double)arg1;
- (void)writeTo:(id)arg1;

@end
