
@interface GEOPDSearchSynonym : PBCodable <NSCopying> {
    float  _confidence;
    struct { 
        unsigned int has_confidence : 1; 
        unsigned int has_rewriteProvider : 1; 
        unsigned int read_synFeatureMaps : 1; 
        unsigned int read_synonymText : 1; 
        unsigned int read_tokenLists : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _rewriteProvider;
    NSMutableArray * _synFeatureMaps;
    NSString * _synonymText;
    NSMutableArray * _tokenLists;
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
