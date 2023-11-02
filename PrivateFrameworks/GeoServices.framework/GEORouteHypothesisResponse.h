
@interface GEORouteHypothesisResponse : PBCodable <NSCopying> {
    GEODirectionsResponse * _directionsResponse;
    GEOETAResponse * _etaResponse;
    struct { 
        unsigned int has_updatedTimeStamp : 1; 
        unsigned int read_directionsResponse : 1; 
        unsigned int read_etaResponse : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    double  _updatedTimeStamp;
}

@property (nonatomic, retain) GEODirectionsResponse *directionsResponse;
@property (nonatomic, retain) GEOETAResponse *etaResponse;
@property (nonatomic, readonly) bool hasDirectionsResponse;
@property (nonatomic, readonly) bool hasEtaResponse;
@property (nonatomic) bool hasUpdatedTimeStamp;
@property (nonatomic) double updatedTimeStamp;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsResponse;
- (id)etaResponse;
- (bool)hasDirectionsResponse;
- (bool)hasEtaResponse;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasUpdatedTimeStamp;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDirectionsResponse:(id)arg1;
- (void)setEtaResponse:(id)arg1;
- (void)setHasUpdatedTimeStamp:(bool)arg1;
- (void)setUpdatedTimeStamp:(double)arg1;
- (double)updatedTimeStamp;
- (void)writeTo:(id)arg1;

@end
