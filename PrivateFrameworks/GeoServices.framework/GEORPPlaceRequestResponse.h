
@interface GEORPPlaceRequestResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_placeRequest : 1; 
        unsigned int read_placeResponse : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDPlaceRequest * _placeRequest;
    GEOPDPlaceResponse * _placeResponse;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasPlaceRequest;
@property (nonatomic, readonly) bool hasPlaceResponse;
@property (nonatomic, retain) GEOPDPlaceRequest *placeRequest;
@property (nonatomic, retain) GEOPDPlaceResponse *placeResponse;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearLocations;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasPlaceRequest;
- (bool)hasPlaceResponse;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)placeRequest;
- (id)placeResponse;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setPlaceRequest:(id)arg1;
- (void)setPlaceResponse:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
