
@interface GEOPDGeocodingParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int has_maxResults : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_queryString : 1; 
        unsigned int read_structuredAddress : 1; 
        unsigned int read_viewportInfo : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    unsigned int  _maxResults;
    NSString * _queryString;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOStructuredAddress * _structuredAddress;
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
- (id)initWithForwardGeocodeAddress:(id)arg1 addressString:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
