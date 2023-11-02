
@interface HKCodableCondensedWorkout : PBCodable <NSCopying> {
    double  _condenserDate;
    long long  _condenserVersion;
    double  _creationDate;
    double  _duration;
    double  _endDate;
    struct { 
        unsigned int condenserDate : 1; 
        unsigned int condenserVersion : 1; 
        unsigned int creationDate : 1; 
        unsigned int duration : 1; 
        unsigned int endDate : 1; 
        unsigned int persistentID : 1; 
        unsigned int startDate : 1; 
        unsigned int type : 1; 
    }  _has;
    long long  _persistentID;
    double  _startDate;
    long long  _type;
    NSData * _uuid;
}

@property (nonatomic) double condenserDate;
@property (nonatomic) long long condenserVersion;
@property (nonatomic) double creationDate;
@property (nonatomic) double duration;
@property (nonatomic) double endDate;
@property (nonatomic) bool hasCondenserDate;
@property (nonatomic) bool hasCondenserVersion;
@property (nonatomic) bool hasCreationDate;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasEndDate;
@property (nonatomic) bool hasPersistentID;
@property (nonatomic) bool hasStartDate;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic) long long persistentID;
@property (nonatomic) double startDate;
@property (nonatomic) long long type;
@property (nonatomic, retain) NSData *uuid;

- (void).cxx_destruct;
- (double)condenserDate;
- (long long)condenserVersion;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)creationDate;
- (id)description;
- (id)dictionaryRepresentation;
- (double)duration;
- (double)endDate;
- (bool)hasCondenserDate;
- (bool)hasCondenserVersion;
- (bool)hasCreationDate;
- (bool)hasDuration;
- (bool)hasEndDate;
- (bool)hasPersistentID;
- (bool)hasStartDate;
- (bool)hasType;
- (bool)hasUuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)persistentID;
- (bool)readFrom:(id)arg1;
- (void)setCondenserDate:(double)arg1;
- (void)setCondenserVersion:(long long)arg1;
- (void)setCreationDate:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setEndDate:(double)arg1;
- (void)setHasCondenserDate:(bool)arg1;
- (void)setHasCondenserVersion:(bool)arg1;
- (void)setHasCreationDate:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasEndDate:(bool)arg1;
- (void)setHasPersistentID:(bool)arg1;
- (void)setHasStartDate:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setPersistentID:(long long)arg1;
- (void)setStartDate:(double)arg1;
- (void)setType:(long long)arg1;
- (void)setUuid:(id)arg1;
- (double)startDate;
- (long long)type;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
