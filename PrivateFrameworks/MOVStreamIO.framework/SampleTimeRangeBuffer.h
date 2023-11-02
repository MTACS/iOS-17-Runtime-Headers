
@interface SampleTimeRangeBuffer : NSObject {
    struct vector<CMTimeRange, std::allocator<CMTimeRange>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<CMTimeRange *, std::allocator<CMTimeRange>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _ranges;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)appendTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)timeRangeList;

@end
