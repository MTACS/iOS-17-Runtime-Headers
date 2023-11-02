
@interface GEOMapItemHandle : PBCodable <NSCopying> {
    GEOMapItemClientAttributes * _clientAttributes;
    struct { 
        unsigned int has_handleType : 1; 
        unsigned int read_clientAttributes : 1; 
        unsigned int read_placeRefinementParameters : 1; 
        unsigned int read_placeRequestData : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    int  _handleType;
    GEOPDPlaceRefinementParameters * _placeRefinementParameters;
    GEOMapItemInitialRequestData * _placeRequestData;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, retain) GEOMapItemClientAttributes *clientAttributes;
@property (nonatomic) int handleType;
@property (nonatomic, readonly) bool hasClientAttributes;
@property (nonatomic) bool hasHandleType;
@property (nonatomic, readonly) bool hasPlaceRefinementParameters;
@property (nonatomic, readonly) bool hasPlaceRequestData;
@property (nonatomic, retain) GEOPDPlaceRefinementParameters *placeRefinementParameters;
@property (nonatomic, retain) GEOMapItemInitialRequestData *placeRequestData;

+ (id)handleDataForMapItem:(id)arg1;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsHandleType:(id)arg1;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (id)clientAttributes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)handleType;
- (id)handleTypeAsString:(int)arg1;
- (bool)hasClientAttributes;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasHandleType;
- (bool)hasPlaceRefinementParameters;
- (bool)hasPlaceRequestData;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)placeRefinementParameters;
- (id)placeRequestData;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setClientAttributes:(id)arg1;
- (void)setHandleType:(int)arg1;
- (void)setHasHandleType:(bool)arg1;
- (void)setPlaceRefinementParameters:(id)arg1;
- (void)setPlaceRequestData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
