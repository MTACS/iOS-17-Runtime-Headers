
@interface GEORPIncidentFeedback : PBCodable <NSCopying> {
    struct { 
        unsigned int has_type : 1; 
        unsigned int read_incidentAnnotationDetails : 1; 
        unsigned int read_newIncidentDetails : 1; 
        unsigned int read_siriContext : 1; 
        unsigned int read_userPath : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEORPIncidentAnnotationDetails * _incidentAnnotationDetails;
    GEORPNewIncidentDetails * _newIncidentDetails;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEORPSiriContext * _siriContext;
    int  _type;
    GEORPIncidentUserPath * _userPath;
}

@property (nonatomic, readonly) bool hasIncidentAnnotationDetails;
@property (nonatomic, readonly) bool hasNewIncidentDetails;
@property (nonatomic, readonly) bool hasSiriContext;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasUserPath;
@property (nonatomic, retain) GEORPIncidentAnnotationDetails *incidentAnnotationDetails;
@property (nonatomic, retain) GEORPNewIncidentDetails *newIncidentDetails;
@property (nonatomic, retain) GEORPSiriContext *siriContext;
@property (nonatomic) int type;
@property (nonatomic, retain) GEORPIncidentUserPath *userPath;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasIncidentAnnotationDetails;
- (bool)hasNewIncidentDetails;
- (bool)hasSiriContext;
- (bool)hasType;
- (bool)hasUserPath;
- (unsigned long long)hash;
- (id)incidentAnnotationDetails;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)newIncidentDetails;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIncidentAnnotationDetails:(id)arg1;
- (void)setNewIncidentDetails:(id)arg1;
- (void)setSiriContext:(id)arg1;
- (void)setType:(int)arg1;
- (void)setUserPath:(id)arg1;
- (id)siriContext;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)userPath;
- (void)writeTo:(id)arg1;

@end
