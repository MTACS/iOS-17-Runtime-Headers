
@interface CMLSimilarityClient : NSObject {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSString * _useCase;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly, copy) NSString *useCase;

+ (id)calculateSimilarityScoresOf:(id)arg1 toElements:(id)arg2 error:(id*)arg3;
+ (id)new;

- (void).cxx_destruct;
- (id)asyncResponseSimilarityScoresForElements:(id)arg1 shardIndex:(unsigned long long)arg2 error:(id*)arg3;
- (id)asyncResponseSimilarityScoresForElements:(id)arg1 shardIndices:(id)arg2 error:(id*)arg3;
- (id)connection;
- (void)dealloc;
- (id)decryptBatchOfSimilarityScores:(id)arg1 error:(id*)arg2;
- (id)decryptSimilarityScores:(id)arg1 error:(id*)arg2;
- (id)dispatchQueue;
- (id)encryptBatchOfElements:(id)arg1 shardIndex:(unsigned long long)arg2 error:(id*)arg3;
- (id)encryptBatchOfElements:(id)arg1 shardIndices:(id)arg2 error:(id*)arg3;
- (id)encryptElement:(id)arg1 shardIndex:(unsigned long long)arg2 error:(id*)arg3;
- (id)encryptElement:(id)arg1 shardIndices:(id)arg2 error:(id*)arg3;
- (id)init;
- (id)initWithUseCase:(id)arg1;
- (id)initWithUseCase:(id)arg1 dispatchQueue:(id)arg2;
- (id)initWithUseCase:(id)arg1 dispatchQueue:(id)arg2 connection:(id)arg3;
- (void)requestSimilarityScoresForElement:(id)arg1 shardIndex:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)requestSimilarityScoresForElement:(id)arg1 shardIndices:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)requestSimilarityScoresForElements:(id)arg1 shardIndex:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)requestSimilarityScoresForElements:(id)arg1 shardIndices:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setConnection:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (id)setPECConfig:(id)arg1 error:(id*)arg2;
- (id)similarityScoresForElement:(id)arg1 shardIndex:(unsigned long long)arg2 error:(id*)arg3;
- (id)similarityScoresForElement:(id)arg1 shardIndices:(id)arg2 error:(id*)arg3;
- (id)similarityScoresForElements:(id)arg1 shardIndex:(unsigned long long)arg2 error:(id*)arg3;
- (id)similarityScoresForElements:(id)arg1 shardIndices:(id)arg2 error:(id*)arg3;
- (id)useCase;

@end
