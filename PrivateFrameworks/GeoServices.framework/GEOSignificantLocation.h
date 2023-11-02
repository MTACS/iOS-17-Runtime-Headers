
@interface GEOSignificantLocation : PBCodable <NSCopying> {
    GEOStructuredAddress * _address;
    double  _confidence;
    struct { 
        unsigned int has_confidence : 1; 
        unsigned int has_locationIndex : 1; 
        unsigned int has_numberOfVisitsBucket : 1; 
        unsigned int read_address : 1; 
        unsigned int read_identifier : 1; 
        unsigned int read_location : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _identifier;
    GEOLocation * _location;
    unsigned int  _locationIndex;
    unsigned int  _numberOfVisitsBucket;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, retain) GEOStructuredAddress *address;
@property (nonatomic) double confidence;
@property (nonatomic, readonly) bool hasAddress;
@property (nonatomic) bool hasConfidence;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic) bool hasLocationIndex;
@property (nonatomic) bool hasNumberOfVisitsBucket;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) GEOLocation *location;
@property (nonatomic) unsigned int locationIndex;
@property (nonatomic) unsigned int numberOfVisitsBucket;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)address;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (double)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAddress;
- (bool)hasConfidence;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasIdentifier;
- (bool)hasLocation;
- (bool)hasLocationIndex;
- (bool)hasNumberOfVisitsBucket;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)location;
- (unsigned int)locationIndex;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numberOfVisitsBucket;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAddress:(id)arg1;
- (void)setConfidence:(double)arg1;
- (void)setHasConfidence:(bool)arg1;
- (void)setHasLocationIndex:(bool)arg1;
- (void)setHasNumberOfVisitsBucket:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationIndex:(unsigned int)arg1;
- (void)setNumberOfVisitsBucket:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
