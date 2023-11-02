
@interface GEOPDChildAction : PBCodable <NSCopying> {
    GEOPDChildActionDirections * _childActionDirections;
    GEOPDChildActionDownloadOfflineMap * _childActionDownloadOfflineMap;
    GEOPDChildActionFlyover * _childActionFlyover;
    GEOPDChildActionGuides * _childActionGuides;
    GEOPDChildActionSearch * _childActionSearch;
    int  _childActionType;
    struct { 
        unsigned int has_childActionType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_childActionDirections : 1; 
        unsigned int read_childActionDownloadOfflineMap : 1; 
        unsigned int read_childActionFlyover : 1; 
        unsigned int read_childActionGuides : 1; 
        unsigned int read_childActionSearch : 1; 
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
