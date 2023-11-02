
@interface GEOPDTemplatePlace : PBCodable <NSCopying> {
    struct { 
        unsigned int has_numInlineItems : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_followUpRequestMetadata : 1; 
        unsigned int read_templateDatas : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDFollowUpRequestMetadata * _followUpRequestMetadata;
    unsigned int  _numInlineItems;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _templateDatas;
    PBUnknownFields * _unknownFields;
}

+ (id)templatedPlacesForPlaceData:(id)arg1;

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
