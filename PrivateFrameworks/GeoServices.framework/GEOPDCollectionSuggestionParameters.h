
@interface GEOPDCollectionSuggestionParameters : PBCodable <NSCopying> {
    NSMutableArray * _categoryIds;
    struct { 
        unsigned int has_requestLocalTimestamp : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_categoryIds : 1; 
        unsigned int read_geoIds : 1; 
        unsigned int read_publisherIds : 1; 
        unsigned int read_viewportInfo : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _geoIds;
    NSMutableArray * _publisherIds;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    double  _requestLocalTimestamp;
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
