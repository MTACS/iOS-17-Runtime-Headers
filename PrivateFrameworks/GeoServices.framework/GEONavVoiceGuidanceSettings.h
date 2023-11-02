
@interface GEONavVoiceGuidanceSettings : PBCodable <NSCopying> {
    struct { 
        unsigned int has_navVoiceGuidanceLevel : 1; 
        unsigned int has_transportMode : 1; 
    }  _flags;
    int  _navVoiceGuidanceLevel;
    int  _transportMode;
}

@property (nonatomic) bool hasNavVoiceGuidanceLevel;
@property (nonatomic) bool hasTransportMode;
@property (nonatomic) int navVoiceGuidanceLevel;
@property (nonatomic) int transportMode;

+ (bool)isValid:(id)arg1;

- (int)StringAsNavVoiceGuidanceLevel:(id)arg1;
- (int)StringAsTransportMode:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNavVoiceGuidanceLevel;
- (bool)hasTransportMode;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (int)navVoiceGuidanceLevel;
- (id)navVoiceGuidanceLevelAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasNavVoiceGuidanceLevel:(bool)arg1;
- (void)setHasTransportMode:(bool)arg1;
- (void)setNavVoiceGuidanceLevel:(int)arg1;
- (void)setTransportMode:(int)arg1;
- (int)transportMode;
- (id)transportModeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
