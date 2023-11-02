
@interface GEOWiFiQualityServiceResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int has_statusCode : 1; 
        unsigned int read_locationResults : 1; 
        unsigned int read_networkResults : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _locationResults;
    NSMutableArray * _networkResults;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _statusCode;
}

@property (nonatomic) bool hasStatusCode;
@property (nonatomic, retain) NSMutableArray *locationResults;
@property (nonatomic, retain) NSMutableArray *networkResults;
@property (nonatomic) int statusCode;

+ (bool)isValid:(id)arg1;
+ (Class)locationResultsType;
+ (Class)networkResultsType;

- (void).cxx_destruct;
- (int)StringAsStatusCode:(id)arg1;
- (void)addLocationResults:(id)arg1;
- (void)addNetworkResults:(id)arg1;
- (void)clearLocationResults;
- (void)clearNetworkResults;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasStatusCode;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)locationResults;
- (id)locationResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)locationResultsCount;
- (void)mergeFrom:(id)arg1;
- (id)networkResults;
- (id)networkResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)networkResultsCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasStatusCode:(bool)arg1;
- (void)setLocationResults:(id)arg1;
- (void)setNetworkResults:(id)arg1;
- (void)setStatusCode:(int)arg1;
- (int)statusCode;
- (id)statusCodeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
