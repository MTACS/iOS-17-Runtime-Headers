
@interface GEOPDSearchQueryCompletionMetadata : PBCodable <NSCopying> {
    NSString * _completion;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _completionSourceTypes;
    struct { 
        unsigned int has_popularity : 1; 
        unsigned int has_score : 1; 
        unsigned int has_tagConfidence : 1; 
        unsigned int has_isCompletematch : 1; 
        unsigned int read_completionSourceTypes : 1; 
        unsigned int read_tags : 1; 
        unsigned int read_completion : 1; 
        unsigned int read_tokens : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _isCompletematch;
    long long  _popularity;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    float  _score;
    float  _tagConfidence;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _tags;
    NSMutableArray * _tokens;
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
