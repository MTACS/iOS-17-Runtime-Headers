
@interface GEOPDMediaLink : PBCodable <NSCopying> {
    NSString * _adamId;
    struct { 
        unsigned int has_mediaSubType : 1; 
        unsigned int has_mediaType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_adamId : 1; 
        unsigned int read_mediaLinkPositionMetaData : 1; 
        unsigned int read_subId : 1; 
        unsigned int read_thirdPartyLinks : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDMediaLinkPositionMetaData * _mediaLinkPositionMetaData;
    int  _mediaSubType;
    int  _mediaType;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _subId;
    NSMutableArray * _thirdPartyLinks;
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
