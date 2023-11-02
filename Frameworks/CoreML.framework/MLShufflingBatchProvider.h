
@interface MLShufflingBatchProvider : NSObject <MLBatchProvider> {
    <MLBatchProvider> * _batchProvider;
    struct vector<long, std::allocator<long>> { 
        long long *__begin_; 
        long long *__end_; 
        struct __compressed_pair<long *, std::allocator<long>> { 
            long long *__value_; 
        } __end_cap_; 
    }  indices;
    struct linear_congruential_engine<unsigned int, 48271U, 0U, 2147483647U> { 
        unsigned int __x_; 
    }  randomNumberGenerator;
}

@property (retain) <MLBatchProvider> *batchProvider;
@property (nonatomic, readonly) long long count;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)batchProvider;
- (long long)count;
- (id)featuresAtIndex:(long long)arg1;
- (id)initWithBatchProvider:(id)arg1 seed:(id)arg2;
- (void)setBatchProvider:(id)arg1;
- (void)shuffle;

@end
