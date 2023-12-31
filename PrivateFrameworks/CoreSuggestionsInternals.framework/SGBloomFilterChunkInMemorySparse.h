
@interface SGBloomFilterChunkInMemorySparse : NSObject <SGBloomFilterChunk> {
    NSMutableSet * _hashes;
}

@property (nonatomic, readonly) unsigned int count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)add:(union { unsigned long long x1; union { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (unsigned int)count;
- (bool)exists:(union { unsigned long long x1; union { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (id)init;

@end
