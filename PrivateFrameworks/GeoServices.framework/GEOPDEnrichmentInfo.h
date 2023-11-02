
@interface GEOPDEnrichmentInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_poiNames : 1; 
        unsigned int read_showcaseId : 1; 
        unsigned int read_showcaseImageUrls : 1; 
        unsigned int read_showcaseTitles : 1; 
        unsigned int read_sourceId : 1; 
        unsigned int read_sourceName : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _poiNames;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _showcaseId;
    NSMutableArray * _showcaseImageUrls;
    NSMutableArray * _showcaseTitles;
    NSString * _sourceId;
    NSString * _sourceName;
    PBUnknownFields * _unknownFields;
}

+ (id)enrichmentInfoWithPlaceData:(id)arg1;

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
