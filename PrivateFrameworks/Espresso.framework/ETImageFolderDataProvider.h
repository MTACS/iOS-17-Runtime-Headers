
@interface ETImageFolderDataProvider : NSObject <ETDataProvider> {
    /* Warning: unhandled struct encoding: '{vector<NSString *, std::allocator<NSString *>>="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<NSString *__strong *, std::allocator<NSString *>>="__value_"^@}}' */ struct vector<NSString *, std::allocator<NSString *>> { 
        __end_ **__begin_; 
    }  classes;
    ETImagePreprocessor * imageProcessor;
    NSString * imageTensorName;
    struct shared_ptr<Espresso::blob_cpu> { 
        struct blob_cpu {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  labelBlob;
    NSArray * labelShape;
    NSString * labelTensorName;
    struct linear_congruential_engine<unsigned int, 48271U, 0U, 2147483647U> { 
        unsigned int __x_; 
    }  randomgen;
    struct vector<std::pair<NSString *, unsigned long>, std::allocator<std::pair<NSString *, unsigned long>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::pair<NSString *, unsigned long> *, std::allocator<std::pair<NSString *, unsigned long>>> { 
            void *__value_; 
        } __end_cap_; 
    }  samples;
    bool  shuffleBeforeEpoch;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)dataPointAtIndex:(unsigned long long)arg1 error:(id*)arg2;
- (id)initWithFolder:(id)arg1 forImageTensor:(id)arg2 andLabelTensor:(id)arg3 shuffleBeforeEachEpoch:(bool)arg4 shuffleRandomSeed:(id)arg5 withImagePreprocessParams:(id)arg6;
- (unsigned long long)numberOfDataPoints;
- (void)prepareForEpoch;

@end
