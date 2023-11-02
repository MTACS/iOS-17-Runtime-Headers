
@interface GEORPCorrectedCoordinate : PBCodable <NSCopying> {
    GEOLatLng * _correctedCoordinate;
    struct { 
        unsigned int read_correctedCoordinate : 1; 
        unsigned int read_originalCoordinate : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOLatLng * _originalCoordinate;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, retain) GEOLatLng *correctedCoordinate;
@property (nonatomic, readonly) bool hasCorrectedCoordinate;
@property (nonatomic, readonly) bool hasOriginalCoordinate;
@property (nonatomic, retain) GEOLatLng *originalCoordinate;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)correctedCoordinate;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCorrectedCoordinate;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasOriginalCoordinate;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)originalCoordinate;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCorrectedCoordinate:(id)arg1;
- (void)setOriginalCoordinate:(id)arg1;
- (void)writeTo:(id)arg1;

@end
