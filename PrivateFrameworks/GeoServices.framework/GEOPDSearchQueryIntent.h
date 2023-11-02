
@interface GEOPDSearchQueryIntent : PBCodable <NSCopying> {
    struct { 
        unsigned int read_globalFeatureMaps : 1; 
        unsigned int read_globalStringFeatureMaps : 1; 
        unsigned int read_queryIntentMetadata : 1; 
        unsigned int read_rewrittenQueryNonPayloadField : 1; 
        unsigned int read_whatIntents : 1; 
        unsigned int read_whereIntents : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _globalFeatureMaps;
    NSMutableArray * _globalStringFeatureMaps;
    GEOPDSearchQueryIntentMetadata * _queryIntentMetadata;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOPDSearchRewrittenQueryNonPayloadField * _rewrittenQueryNonPayloadField;
    NSMutableArray * _whatIntents;
    NSMutableArray * _whereIntents;
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
