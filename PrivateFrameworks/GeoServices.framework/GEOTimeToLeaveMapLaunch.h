
@interface GEOTimeToLeaveMapLaunch : PBCodable <NSCopying> {
    struct { 
        unsigned int has_minutesUntilEvent : 1; 
    }  _flags;
    double  _minutesUntilEvent;
}

@property (nonatomic) bool hasMinutesUntilEvent;
@property (nonatomic) double minutesUntilEvent;

+ (bool)isValid:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMinutesUntilEvent;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (double)minutesUntilEvent;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasMinutesUntilEvent:(bool)arg1;
- (void)setMinutesUntilEvent:(double)arg1;
- (void)writeTo:(id)arg1;

@end
