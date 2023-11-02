
@interface GEOPDTip : PBCodable <NSCopying> {
    struct { 
        unsigned int has_tipTime : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_snippets : 1; 
        unsigned int read_tipId : 1; 
        unsigned int read_tipster : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _snippets;
    NSString * _tipId;
    double  _tipTime;
    GEOPDTipUser * _tipster;
    PBUnknownFields * _unknownFields;
}

+ (id)tipsForPlaceData:(id)arg1;

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
