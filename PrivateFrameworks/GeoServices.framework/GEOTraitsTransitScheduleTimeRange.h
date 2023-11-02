
@interface GEOTraitsTransitScheduleTimeRange : PBCodable <NSCopying> {
    double  _duration;
    struct { 
        unsigned int has_duration : 1; 
        unsigned int has_startTime : 1; 
    }  _flags;
    double  _startTime;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) double duration;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasStartTime;
@property (nonatomic) double startTime;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)duration;
- (bool)hasDuration;
- (bool)hasStartTime;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasStartTime:(bool)arg1;
- (void)setStartTime:(double)arg1;
- (double)startTime;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
