
@interface NoiseSampler : NSObject {
    struct vector<unsigned long, std::allocator<unsigned long>> { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _alias;
    struct mersenne_twister_engine<unsigned int, 32UL, 624UL, 397UL, 31UL, 2567483615U, 11UL, 4294967295U, 7UL, 2636928640U, 15UL, 4022730752U, 18UL, 1812433253U> { 
        unsigned int __x_[624]; 
        unsigned long long __i_; 
    }  _generator;
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _unigram;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)drawNoise;
- (id)init;
- (id)initWithUnigram:(float*)arg1 ofSize:(unsigned long long)arg2;
- (id)initWithZipfOfSize:(unsigned long long)arg1;

@end
