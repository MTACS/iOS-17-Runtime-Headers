
@interface GEOLocalTime : PBCodable <NSCopying> {
    struct { 
        unsigned int has_timeRoundedToHour : 1; 
        unsigned int has_timezoneOffsetFromGmtInHours : 1; 
    }  _flags;
    NSString * _humanReadable;
    unsigned long long  _timeRoundedToHour;
    float  _timezoneOffsetFromGmtInHours;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasHumanReadable;
@property (nonatomic) bool hasTimeRoundedToHour;
@property (nonatomic) bool hasTimezoneOffsetFromGmtInHours;
@property (nonatomic, retain) NSString *humanReadable;
@property (nonatomic) unsigned long long timeRoundedToHour;
@property (nonatomic) float timezoneOffsetFromGmtInHours;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHumanReadable;
- (bool)hasTimeRoundedToHour;
- (bool)hasTimezoneOffsetFromGmtInHours;
- (unsigned long long)hash;
- (id)humanReadable;
- (id)initWithCFAbsoluteTime:(double)arg1;
- (id)initWithDate:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTimeRoundedToHour:(bool)arg1;
- (void)setHasTimezoneOffsetFromGmtInHours:(bool)arg1;
- (void)setHumanReadable:(id)arg1;
- (void)setTimeRoundedToHour:(unsigned long long)arg1;
- (void)setTimezoneOffsetFromGmtInHours:(float)arg1;
- (unsigned long long)timeRoundedToHour;
- (float)timezoneOffsetFromGmtInHours;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
