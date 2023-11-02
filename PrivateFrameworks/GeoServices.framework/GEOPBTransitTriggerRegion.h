
@interface GEOPBTransitTriggerRegion : PBCodable <NSCopying> {
    unsigned int  _delaySeconds;
    struct { 
        unsigned int has_delaySeconds : 1; 
        unsigned int has_signalStrength : 1; 
        unsigned int has_transition : 1; 
    }  _flags;
    GEOLatLng * _location;
    int  _signalStrength;
    int  _transition;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned int delaySeconds;
@property (nonatomic) bool hasDelaySeconds;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic) bool hasSignalStrength;
@property (nonatomic) bool hasTransition;
@property (nonatomic, retain) GEOLatLng *location;
@property (nonatomic) int signalStrength;
@property (nonatomic) int transition;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsSignalStrength:(id)arg1;
- (int)StringAsTransition:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)delaySeconds;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDelaySeconds;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasLocation;
- (bool)hasSignalStrength;
- (bool)hasTransition;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)location;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDelaySeconds:(unsigned int)arg1;
- (void)setHasDelaySeconds:(bool)arg1;
- (void)setHasSignalStrength:(bool)arg1;
- (void)setHasTransition:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setSignalStrength:(int)arg1;
- (void)setTransition:(int)arg1;
- (int)signalStrength;
- (id)signalStrengthAsString:(int)arg1;
- (int)transition;
- (id)transitionAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
