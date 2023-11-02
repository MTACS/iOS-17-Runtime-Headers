
@interface GEORPIncidentField : PBCodable <NSCopying> {
    bool  _displayIncidentOnMap;
    struct { 
        unsigned int has_trafficType : 1; 
        unsigned int has_displayIncidentOnMap : 1; 
    }  _flags;
    NSString * _siriType;
    int  _trafficType;
}

@property (nonatomic) bool displayIncidentOnMap;
@property (nonatomic) bool hasDisplayIncidentOnMap;
@property (nonatomic, readonly) bool hasSiriType;
@property (nonatomic) bool hasTrafficType;
@property (nonatomic, retain) NSString *siriType;
@property (nonatomic) int trafficType;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsTrafficType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)displayIncidentOnMap;
- (bool)hasDisplayIncidentOnMap;
- (bool)hasSiriType;
- (bool)hasTrafficType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDisplayIncidentOnMap:(bool)arg1;
- (void)setHasDisplayIncidentOnMap:(bool)arg1;
- (void)setHasTrafficType:(bool)arg1;
- (void)setSiriType:(id)arg1;
- (void)setTrafficType:(int)arg1;
- (id)siriType;
- (int)trafficType;
- (id)trafficTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
