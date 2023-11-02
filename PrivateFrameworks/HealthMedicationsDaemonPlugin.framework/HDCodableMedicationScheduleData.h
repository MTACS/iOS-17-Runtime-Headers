
@interface HDCodableMedicationScheduleData : PBCodable <NSCopying> {
    HDCodableMedicationScheduleCompatibilityVersionRange * _compatibilityVersionRange;
    double  _creationDate;
    struct { 
        unsigned int creationDate : 1; 
    }  _has;
    NSData * _scheduleData;
    NSData * _uuid;
}

@property (nonatomic, retain) HDCodableMedicationScheduleCompatibilityVersionRange *compatibilityVersionRange;
@property (nonatomic) double creationDate;
@property (nonatomic, readonly) bool hasCompatibilityVersionRange;
@property (nonatomic) bool hasCreationDate;
@property (nonatomic, readonly) bool hasFutureCompatibilityVersion;
@property (nonatomic, readonly) bool hasScheduleData;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic, readonly) bool isLocallyUnavailable;
@property (nonatomic, retain) NSData *scheduleData;
@property (nonatomic, retain) NSData *uuid;

- (void).cxx_destruct;
- (id)compatibilityVersionRange;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)creationDate;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCompatibilityVersionRange;
- (bool)hasCreationDate;
- (bool)hasFutureCompatibilityVersion;
- (bool)hasScheduleData;
- (bool)hasUuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isLocallyUnavailable;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)scheduleData;
- (void)setCompatibilityVersionRange:(id)arg1;
- (void)setCreationDate:(double)arg1;
- (void)setHasCreationDate:(bool)arg1;
- (void)setScheduleData:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
