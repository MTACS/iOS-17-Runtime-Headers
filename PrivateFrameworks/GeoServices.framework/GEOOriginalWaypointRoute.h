
@interface GEOOriginalWaypointRoute : PBCodable <NSCopying> {
    struct { 
        unsigned int has_identifier : 1; 
        unsigned int has_purpose : 1; 
    }  _flags;
    unsigned int  _identifier;
    int  _purpose;
    NSMutableArray * _routeLegs;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasIdentifier;
@property (nonatomic) bool hasPurpose;
@property (nonatomic) unsigned int identifier;
@property (nonatomic) int purpose;
@property (nonatomic, retain) NSMutableArray *routeLegs;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)routeLegType;

- (void).cxx_destruct;
- (int)StringAsPurpose:(id)arg1;
- (void)addRouteLeg:(id)arg1;
- (void)clearRouteLegs;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasIdentifier;
- (bool)hasPurpose;
- (unsigned long long)hash;
- (unsigned int)identifier;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (int)purpose;
- (id)purposeAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)routeLegAtIndex:(unsigned long long)arg1;
- (id)routeLegs;
- (unsigned long long)routeLegsCount;
- (void)setHasIdentifier:(bool)arg1;
- (void)setHasPurpose:(bool)arg1;
- (void)setIdentifier:(unsigned int)arg1;
- (void)setPurpose:(int)arg1;
- (void)setRouteLegs:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
