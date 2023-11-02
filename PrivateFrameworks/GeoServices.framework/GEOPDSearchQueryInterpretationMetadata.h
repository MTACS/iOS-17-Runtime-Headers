
@interface GEOPDSearchQueryInterpretationMetadata : PBCodable <NSCopying> {
    NSMutableArray * _featureMaps;
    struct { 
        unsigned int has_score : 1; 
        unsigned int has_isFromRuntimeQueryTriggerStore : 1; 
        unsigned int read_featureMaps : 1; 
        unsigned int read_triggerFeatures : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _isFromRuntimeQueryTriggerStore;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    float  _score;
    NSMutableArray * _triggerFeatures;
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
