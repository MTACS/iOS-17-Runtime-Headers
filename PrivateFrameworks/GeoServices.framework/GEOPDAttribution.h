
@interface GEOPDAttribution : PBCodable <NSCopying> {
    NSString * _actionUrlComponent;
    NSMutableArray * _attributionUrls;
    NSString * _externalComponentId;
    NSString * _externalItemId;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_actionUrlComponent : 1; 
        unsigned int read_attributionUrls : 1; 
        unsigned int read_externalComponentId : 1; 
        unsigned int read_externalItemId : 1; 
        unsigned int read_vendorId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
    NSString * _vendorId;
}

+ (id)attributionForAnnotatedItemList:(id)arg1 placeData:(id)arg2;
+ (id)attributionForPlaceDataEncyclopedia:(id)arg1;
+ (id)attributionForPlaceDataEntity:(id)arg1;
+ (id)attributionForPlaceDataRestaurantReservationLink:(id)arg1;
+ (id)attributionForPlaceDataReview:(id)arg1;
+ (id)componentLevelAttributionForPlaceDataPhotos:(id)arg1;

- (void).cxx_destruct;
- (bool)_isYelp;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
