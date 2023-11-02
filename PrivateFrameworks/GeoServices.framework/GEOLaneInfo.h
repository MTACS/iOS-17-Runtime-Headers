
@interface GEOLaneInfo : PBCodable <NSCopying> {
    NSMutableArray * _arrows;
    struct { 
        unsigned int has_hov : 1; 
        unsigned int has_preferredForMultipleManeuvers : 1; 
        unsigned int has_supportsManeuver : 1; 
    }  _flags;
    bool  _hov;
    bool  _preferredForMultipleManeuvers;
    bool  _supportsManeuver;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *arrows;
@property (nonatomic) bool hasHov;
@property (nonatomic) bool hasPreferredForMultipleManeuvers;
@property (nonatomic) bool hasSupportsManeuver;
@property (nonatomic) bool hov;
@property (nonatomic) bool preferredForMultipleManeuvers;
@property (nonatomic) bool supportsManeuver;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)arrowType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addArrow:(id)arg1;
- (id)arrowAtIndex:(unsigned long long)arg1;
- (id)arrows;
- (unsigned long long)arrowsCount;
- (void)clearArrows;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHov;
- (bool)hasPreferredForMultipleManeuvers;
- (bool)hasSupportsManeuver;
- (unsigned long long)hash;
- (bool)hov;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (bool)preferredForMultipleManeuvers;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArrows:(id)arg1;
- (void)setHasHov:(bool)arg1;
- (void)setHasPreferredForMultipleManeuvers:(bool)arg1;
- (void)setHasSupportsManeuver:(bool)arg1;
- (void)setHov:(bool)arg1;
- (void)setPreferredForMultipleManeuvers:(bool)arg1;
- (void)setSupportsManeuver:(bool)arg1;
- (bool)supportsManeuver;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
