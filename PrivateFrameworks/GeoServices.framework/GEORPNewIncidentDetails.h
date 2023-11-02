
@interface GEORPNewIncidentDetails : PBCodable <NSCopying> {
    struct { 
        unsigned int has_type : 1; 
        unsigned int read_incidentLocation : 1; 
        unsigned int read_userLocation : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEORPIncidentLocation * _incidentLocation;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _type;
    GEORPUserLocationDetails * _userLocation;
}

@property (nonatomic, readonly) bool hasIncidentLocation;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasUserLocation;
@property (nonatomic, retain) GEORPIncidentLocation *incidentLocation;
@property (nonatomic) int type;
@property (nonatomic, retain) GEORPUserLocationDetails *userLocation;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasIncidentLocation;
- (bool)hasType;
- (bool)hasUserLocation;
- (unsigned long long)hash;
- (id)incidentLocation;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIncidentLocation:(id)arg1;
- (void)setType:(int)arg1;
- (void)setUserLocation:(id)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)userLocation;
- (void)writeTo:(id)arg1;

@end
