
@interface GEOPDSearchQueryEmbeddingMetadata : PBCodable <NSCopying> {
    NSString * _embeddingId;
    struct { 
        float *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _embeddings;
    struct { 
        unsigned int read_embeddings : 1; 
        unsigned int read_embeddingId : 1; 
        unsigned int read_modelVersions : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _modelVersions;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
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
