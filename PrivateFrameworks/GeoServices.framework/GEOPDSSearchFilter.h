
@interface GEOPDSSearchFilter : PBCodable <NSCopying> {
    GEOPDSBrandFilter * _brandFilter;
    GEOPDSCategoryFilter * _categoryFilter;
    struct { 
        unsigned int has_searchIntentFilter : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_brandFilter : 1; 
        unsigned int read_categoryFilter : 1; 
        unsigned int read_implictQueryCategoryFilter : 1; 
        unsigned int read_poiIconCategoryFilter : 1; 
        unsigned int read_venueFilter : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDSImplicitQueryCategoryFilter * _implictQueryCategoryFilter;
    GEOPDPoiIconCategoryFilter * _poiIconCategoryFilter;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _searchIntentFilter;
    PBUnknownFields * _unknownFields;
    GEOPDSSearchVenueFilter * _venueFilter;
}

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
