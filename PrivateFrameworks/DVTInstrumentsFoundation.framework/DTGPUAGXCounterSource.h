
@interface DTGPUAGXCounterSource : NSObject <DTGPUAGXCounterSourceProtocol> {
    struct vector<std::vector<unsigned char>, std::allocator<std::vector<unsigned char>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::vector<unsigned char> *, std::allocator<std::vector<unsigned char>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _counterBuffers;
    NSLock * _pullLock;
    NSObject<OS_dispatch_queue> * _pullQueue;
    NSObject<OS_dispatch_source> * _pullTimer;
    NSArray * _selects;
    <GPURawCounterSource> * _source;
    <GPURawCounterSourceGroup> * _sourceGroup;
    unsigned int  _sourceIndex;
    struct vector<unsigned char, std::allocator<unsigned char>> { 
        char *__begin_; 
        char *__end_; 
        struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { 
            char *__value_; 
        } __end_cap_; 
    }  _tmpOutBuffer;
}

@property (nonatomic, readonly) NSArray *selects;
@property (nonatomic, readonly) <GPURawCounterSource> *source;
@property (nonatomic, readonly) <GPURawCounterSourceGroup> *sourceGroup;
@property (nonatomic, readonly) unsigned int sourceIndex;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSource:(id)arg1 sourceGroup:(id)arg2 selects:(id)arg3 sourceIndex:(unsigned int)arg4;
- (void)pullAndDrainCounters;
- (bool)request:(unsigned long long)arg1 vendorFeatures:(id)arg2;
- (void)resume;
- (void)sampleAPS:(id /* block */)arg1;
- (void)sampleCounters:(unsigned long long)arg1 callback:(id /* block */)arg2;
- (id)selects;
- (id)source;
- (id)sourceGroup;
- (unsigned int)sourceIndex;
- (void)stop;

@end
