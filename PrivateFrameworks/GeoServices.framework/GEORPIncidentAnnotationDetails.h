
@interface GEORPIncidentAnnotationDetails : PBCodable <NSCopying> {
    int  _annotationType;
    struct { 
        unsigned int has_annotationType : 1; 
        unsigned int has_incidentType : 1; 
        unsigned int read_incidentId : 1; 
        unsigned int read_incidentLocation : 1; 
        unsigned int read_userLocation : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _incidentId;
    GEOLatLng * _incidentLocation;
    int  _incidentType;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEORPUserLocationDetails * _userLocation;
}

@property (nonatomic) int annotationType;
@property (nonatomic) bool hasAnnotationType;
@property (nonatomic, readonly) bool hasIncidentId;
@property (nonatomic, readonly) bool hasIncidentLocation;
@property (nonatomic) bool hasIncidentType;
@property (nonatomic, readonly) bool hasUserLocation;
@property (nonatomic, retain) NSString *incidentId;
@property (nonatomic, retain) GEOLatLng *incidentLocation;
@property (nonatomic) int incidentType;
@property (nonatomic, retain) GEORPUserLocationDetails *userLocation;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsAnnotationType:(id)arg1;
- (int)StringAsIncidentType:(id)arg1;
- (int)annotationType;
- (id)annotationTypeAsString:(int)arg1;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAnnotationType;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasIncidentId;
- (bool)hasIncidentLocation;
- (bool)hasIncidentType;
- (bool)hasUserLocation;
- (unsigned long long)hash;
- (id)incidentId;
- (id)incidentLocation;
- (int)incidentType;
- (id)incidentTypeAsString:(int)arg1;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAnnotationType:(int)arg1;
- (void)setHasAnnotationType:(bool)arg1;
- (void)setHasIncidentType:(bool)arg1;
- (void)setIncidentId:(id)arg1;
- (void)setIncidentLocation:(id)arg1;
- (void)setIncidentType:(int)arg1;
- (void)setUserLocation:(id)arg1;
- (id)userLocation;
- (void)writeTo:(id)arg1;

@end
