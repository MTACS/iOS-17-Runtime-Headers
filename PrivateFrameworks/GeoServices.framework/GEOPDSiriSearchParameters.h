
@interface GEOPDSiriSearchParameters : PBCodable <NSCopying> {
    GEOAddress * _address;
    NSMutableArray * _businessCategoryFilters;
    struct { 
        unsigned int has_maxResultCount : 1; 
        unsigned int has_sortOrder : 1; 
        unsigned int has_isStrictMapRegion : 1; 
        unsigned int has_structuredSearch : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_address : 1; 
        unsigned int read_businessCategoryFilters : 1; 
        unsigned int read_indexFilter : 1; 
        unsigned int read_recentRouteInfo : 1; 
        unsigned int read_searchString : 1; 
        unsigned int read_searchSubstringDescriptors : 1; 
        unsigned int read_viewportInfo : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDIndexQueryNode * _indexFilter;
    bool  _isStrictMapRegion;
    unsigned int  _maxResultCount;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOPDRecentRouteInfo * _recentRouteInfo;
    NSString * _searchString;
    NSMutableArray * _searchSubstringDescriptors;
    int  _sortOrder;
    bool  _structuredSearch;
    PBUnknownFields * _unknownFields;
    GEOPDViewportInfo * _viewportInfo;
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
