
@interface GEOPDTransitInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int has_transitId : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_labels : 1; 
        unsigned int read_lines : 1; 
        unsigned int read_searchDisplayName : 1; 
        unsigned int read_stopInfos : 1; 
        unsigned int read_subTitle : 1; 
        unsigned int read_systems : 1; 
        unsigned int read_title : 1; 
        unsigned int read_transitConnections : 1; 
        unsigned int read_transitMarketId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _labels;
    NSMutableArray * _lines;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _searchDisplayName;
    NSMutableArray * _stopInfos;
    NSString * _subTitle;
    NSMutableArray * _systems;
    NSString * _title;
    NSMutableArray * _transitConnections;
    unsigned long long  _transitId;
    GEOPDMapsIdentifier * _transitMarketId;
    PBUnknownFields * _unknownFields;
}

+ (id)transitInfoForPlaceData:(id)arg1;

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
