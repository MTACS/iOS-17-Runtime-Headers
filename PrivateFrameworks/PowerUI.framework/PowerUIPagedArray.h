
@interface PowerUIPagedArray : NSObject {
    long long  _chunkSize;
    NSMutableDictionary * _chunks;
    long long  _currentChunkIndex;
    long long  _endChunkIndex;
    id /* block */  _getChunkHandler;
    long long  _highestIndexInMemory;
    NSObject<OS_os_log> * _log;
    long long  _numberOfQueries;
}

@property (nonatomic, readonly) long long chunkSize;
@property (nonatomic, readonly) NSMutableDictionary *chunks;
@property (nonatomic) long long currentChunkIndex;
@property (nonatomic) long long endChunkIndex;
@property (nonatomic, readonly) id /* block */ getChunkHandler;
@property (nonatomic) long long highestIndexInMemory;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic) long long numberOfQueries;

- (void).cxx_destruct;
- (id)chunkArrayForIndex:(long long)arg1;
- (long long)chunkSize;
- (id)chunks;
- (long long)countDynamic;
- (long long)currentChunkIndex;
- (id)description;
- (long long)endChunkIndex;
- (id /* block */)getChunkHandler;
- (long long)highestIndexInMemory;
- (id)initWithChunkSize:(long long)arg1 chunkGetter:(id /* block */)arg2;
- (bool)isIndexInMemory:(long long)arg1;
- (id)keyForChunkIndex:(long long)arg1;
- (void)loadChunk:(long long)arg1;
- (id)log;
- (long long)numberOfQueries;
- (id)objectAtIndex:(long long)arg1;
- (id)objectAtIndexedSubscript:(long long)arg1;
- (id)retrieveElementFromMemoryAtIndex:(long long)arg1;
- (void)setCurrentChunkIndex:(long long)arg1;
- (void)setEndChunkIndex:(long long)arg1;
- (void)setHighestIndexInMemory:(long long)arg1;
- (void)setLog:(id)arg1;
- (void)setNumberOfQueries:(long long)arg1;

@end
