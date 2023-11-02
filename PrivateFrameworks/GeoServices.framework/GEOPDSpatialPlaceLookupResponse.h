
@interface GEOPDSpatialPlaceLookupResponse : PBCodable <NSCopying> {
    GEOPDBounds * _bounds;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _categorys;
    GEOLatLng * _center;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_categorys : 1; 
        unsigned int read_bounds : 1; 
        unsigned int read_center : 1; 
        unsigned int read_placeId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDMapsIdentifier * _placeId;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPDBounds *bounds;
@property (nonatomic, readonly) int*categorys;
@property (nonatomic, readonly) unsigned long long categorysCount;
@property (nonatomic, retain) GEOLatLng *center;
@property (nonatomic, readonly) bool hasBounds;
@property (nonatomic, readonly) bool hasCenter;
@property (nonatomic, readonly) bool hasPlaceId;
@property (nonatomic, retain) GEOPDMapsIdentifier *placeId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsCategorys:(id)arg1;
- (void)addCategory:(int)arg1;
- (id)bounds;
- (int)categoryAtIndex:(unsigned long long)arg1;
- (int*)categorys;
- (id)categorysAsString:(int)arg1;
- (unsigned long long)categorysCount;
- (id)center;
- (void)clearCategorys;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBounds;
- (bool)hasCenter;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasPlaceId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)placeId;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBounds:(id)arg1;
- (void)setCategorys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setCenter:(id)arg1;
- (void)setPlaceId:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
