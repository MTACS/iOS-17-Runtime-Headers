
@interface GEOPDSearchGeoParsingResult : PBCodable <NSCopying> {
    NSMutableArray * _droppedTokens;
    struct { 
        unsigned int has_labelScore : 1; 
        unsigned int has_tagSource : 1; 
        unsigned int read_droppedTokens : 1; 
        unsigned int read_labelings : 1; 
        unsigned int read_taggerModelId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    double  _labelScore;
    NSMutableArray * _labelings;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _tagSource;
    NSString * _taggerModelId;
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
