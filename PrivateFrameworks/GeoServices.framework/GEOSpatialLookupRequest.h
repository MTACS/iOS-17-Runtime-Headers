
@interface GEOSpatialLookupRequest : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _categorys;
    GEOLatLng * _center;
    struct { 
        unsigned int has_maxResults : 1; 
        unsigned int has_radius : 1; 
        unsigned int read_categorys : 1; 
        unsigned int read_center : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    int  _maxResults;
    int  _radius;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, readonly) int*categorys;
@property (nonatomic, readonly) unsigned long long categorysCount;
@property (nonatomic, retain) GEOLatLng *center;
@property (nonatomic) bool hasMaxResults;
@property (nonatomic) bool hasRadius;
@property (nonatomic) int maxResults;
@property (nonatomic) int radius;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsCategorys:(id)arg1;
- (void)addCategory:(int)arg1;
- (int)categoryAtIndex:(unsigned long long)arg1;
- (int*)categorys;
- (id)categorysAsString:(int)arg1;
- (unsigned long long)categorysCount;
- (id)center;
- (void)clearCategorys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasMaxResults;
- (bool)hasRadius;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (int)maxResults;
- (void)mergeFrom:(id)arg1;
- (int)radius;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCategorys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setCenter:(id)arg1;
- (void)setHasMaxResults:(bool)arg1;
- (void)setHasRadius:(bool)arg1;
- (void)setMaxResults:(int)arg1;
- (void)setRadius:(int)arg1;
- (void)writeTo:(id)arg1;

@end
