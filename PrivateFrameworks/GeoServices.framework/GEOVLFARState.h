
@interface GEOVLFARState : PBCodable <NSCopying> {
    struct { 
        unsigned int has_geoTrackingStateReason : 1; 
        unsigned int has_geoTrackingState : 1; 
        unsigned int has_relativeTimestampMs : 1; 
    }  _flags;
    int  _geoTrackingState;
    int  _geoTrackingStateReason;
    unsigned int  _relativeTimestampMs;
}

@property (nonatomic) int geoTrackingState;
@property (nonatomic) int geoTrackingStateReason;
@property (nonatomic) bool hasGeoTrackingState;
@property (nonatomic) bool hasGeoTrackingStateReason;
@property (nonatomic) bool hasRelativeTimestampMs;
@property (nonatomic) unsigned int relativeTimestampMs;

+ (bool)isValid:(id)arg1;

- (int)StringAsGeoTrackingState:(id)arg1;
- (int)StringAsGeoTrackingStateReason:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)geoTrackingState;
- (id)geoTrackingStateAsString:(int)arg1;
- (int)geoTrackingStateReason;
- (id)geoTrackingStateReasonAsString:(int)arg1;
- (bool)hasGeoTrackingState;
- (bool)hasGeoTrackingStateReason;
- (bool)hasRelativeTimestampMs;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)relativeTimestampMs;
- (void)setGeoTrackingState:(int)arg1;
- (void)setGeoTrackingStateReason:(int)arg1;
- (void)setHasGeoTrackingState:(bool)arg1;
- (void)setHasGeoTrackingStateReason:(bool)arg1;
- (void)setHasRelativeTimestampMs:(bool)arg1;
- (void)setRelativeTimestampMs:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
