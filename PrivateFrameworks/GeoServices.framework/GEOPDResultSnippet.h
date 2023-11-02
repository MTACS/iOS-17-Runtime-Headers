
@interface GEOPDResultSnippet : PBCodable <NSCopying> {
    NSString * _category;
    NSMutableArray * _childItems;
    NSMutableArray * _childPlaces;
    unsigned int  _distanceDisplayThreshold;
    struct { 
        unsigned int has_distanceDisplayThreshold : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_category : 1; 
        unsigned int read_childItems : 1; 
        unsigned int read_childPlaces : 1; 
        unsigned int read_locationString : 1; 
        unsigned int read_name : 1; 
        unsigned int read_priceDescription : 1; 
        unsigned int read_priceRange : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _locationString;
    NSString * _name;
    GEOPDPriceDescription * _priceDescription;
    GEOPDRating * _priceRange;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

+ (id)resultSnippetForPlaceData:(id)arg1;

- (void).cxx_destruct;
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
