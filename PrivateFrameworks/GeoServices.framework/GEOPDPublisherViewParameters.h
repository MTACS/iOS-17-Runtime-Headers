
@interface GEOPDPublisherViewParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int has_numClientizedResults : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_publisherId : 1; 
        unsigned int read_resultFilter : 1; 
        unsigned int read_viewportInfo : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    unsigned int  _numClientizedResults;
    GEOPDMapsIdentifier * _publisherId;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOPDPublisherViewResultFilter * _resultFilter;
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
