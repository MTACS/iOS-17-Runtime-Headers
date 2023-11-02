
@interface GEOPDTransitInfoSnippet : PBCodable <NSCopying> {
    NSMutableArray * _artworks;
    struct { 
        unsigned int has_transitId : 1; 
        unsigned int has_isHidden : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_artworks : 1; 
        unsigned int read_labels : 1; 
        unsigned int read_searchDisplayName : 1; 
        unsigned int read_stopLocationForTrip : 1; 
        unsigned int read_styleAttributesForTrip : 1; 
        unsigned int read_systemNames : 1; 
        unsigned int read_timezone : 1; 
        unsigned int read_transitName : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _isHidden;
    NSMutableArray * _labels;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _searchDisplayName;
    GEOLatLng * _stopLocationForTrip;
    GEOStyleAttributes * _styleAttributesForTrip;
    NSMutableArray * _systemNames;
    GEOTimezone * _timezone;
    unsigned long long  _transitId;
    NSString * _transitName;
    PBUnknownFields * _unknownFields;
}

+ (id)transitInfoSnippetForPlaceData:(id)arg1;

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
