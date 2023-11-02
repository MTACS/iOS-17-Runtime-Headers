
@interface GEOPDLocationDirectedSearchParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int has_maxResults : 1; 
        unsigned int has_searchType : 1; 
        unsigned int has_sortOrder : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_nearestTransitParameters : 1; 
        unsigned int read_searchLocation : 1; 
        unsigned int read_searchString : 1; 
        unsigned int read_viewportInfo : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    unsigned int  _maxResults;
    GEOPDNearestTransitParameters * _nearestTransitParameters;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOLatLng * _searchLocation;
    NSString * _searchString;
    int  _searchType;
    int  _sortOrder;
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
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
