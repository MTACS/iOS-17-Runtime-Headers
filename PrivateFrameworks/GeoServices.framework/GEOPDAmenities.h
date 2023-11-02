
@interface GEOPDAmenities : PBCodable <NSCopying> {
    NSMutableArray * _amenityV2s;
    NSMutableArray * _amenitys;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_amenityV2s : 1; 
        unsigned int read_amenitys : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *amenityV2s;
@property (nonatomic, retain) NSMutableArray *amenitys;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)amenityType;
+ (Class)amenityV2Type;
+ (id)amentiesForPlaceData:(id)arg1;
+ (id)enumBasedAmenityValuesForPlaceData:(id)arg1;
+ (bool)isValid:(id)arg1;
+ (id)stringBasedAmenityValuesForPlaceData:(id)arg1;

- (void).cxx_destruct;
- (void)addAmenity:(id)arg1;
- (void)addAmenityV2:(id)arg1;
- (id)amenityAtIndex:(unsigned long long)arg1;
- (id)amenityV2AtIndex:(unsigned long long)arg1;
- (id)amenityV2s;
- (unsigned long long)amenityV2sCount;
- (id)amenitys;
- (unsigned long long)amenitysCount;
- (void)clearAmenityV2s;
- (void)clearAmenitys;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
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
- (void)setAmenityV2s:(id)arg1;
- (void)setAmenitys:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
