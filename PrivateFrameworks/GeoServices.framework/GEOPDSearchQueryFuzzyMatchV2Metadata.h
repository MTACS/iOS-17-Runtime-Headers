
@interface GEOPDSearchQueryFuzzyMatchV2Metadata : PBCodable <NSCopying> {
    struct { 
        unsigned int has_pruneFuzzyV2Results : 1; 
        unsigned int has_useFuzzyV1 : 1; 
        unsigned int read_fuzzyV2Scores : 1; 
        unsigned int read_rewriteTypes : 1; 
        unsigned int read_rewrittenQueries : 1; 
        unsigned int read_rewrittenQueryTokens : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    struct { 
        double *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _fuzzyV2Scores;
    bool  _pruneFuzzyV2Results;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _rewriteTypes;
    NSMutableArray * _rewrittenQueries;
    GEOPDSearchTokenSet * _rewrittenQueryTokens;
    bool  _useFuzzyV1;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
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
