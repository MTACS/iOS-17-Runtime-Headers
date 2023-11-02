
@interface VIFaissIndex : NSObject {
    struct unique_ptr<faiss::Index, std::default_delete<faiss::Index>> { 
        struct __compressed_pair<faiss::Index *, std::default_delete<faiss::Index>> { 
            struct Index {} *__value_; 
        } __ptr_; 
    }  _index;
}

@property (nonatomic, readonly) long long embeddingLength;
@property (nonatomic, readonly) long long numberOfIndexedEmbeddings;

+ (bool)hasFaissSupport;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)computeResidualForEmbedding:(id)arg1 identifier:(long long)arg2 error:(id*)arg3;
- (long long)embeddingLength;
- (void)getFaissError:(id*)arg1 forCode:(long long)arg2;
- (void)getFaissError:(id*)arg1 forCode:(long long)arg2 userInfo:(id)arg3;
- (void)getFaissError:(id*)arg1 forFaissException:(const void*)arg2;
- (long long)identifierForIndex:(long long)arg1;
- (id)initWithContentsOfFile:(id)arg1 error:(id*)arg2;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (long long)numberOfIndexedEmbeddings;
- (id)reconstructEmbeddingForIdentifier:(long long)arg1;
- (id)searchWithQuery:(id)arg1 numberOfNearestNeighbors:(long long)arg2 options:(unsigned long long)arg3 error:(id*)arg4;

@end
