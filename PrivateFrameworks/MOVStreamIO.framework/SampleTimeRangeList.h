
@interface SampleTimeRangeList : NSObject <NSCopying> {
    NSArray * _cached_ranges;
    NSString * _name;
    struct vector<CMTimeRange, std::allocator<CMTimeRange>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<CMTimeRange *, std::allocator<CMTimeRange>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _ranges;
}

@property (nonatomic, readonly, copy) NSArray *cached_ranges;
@property (nonatomic, copy) NSString *name;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)cached_ranges;
- (bool)containsTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)indexOfTimeRangeAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)init;
- (id)initWithTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)initWithTimeRanges:(const void*)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRangeAtIndex:(unsigned long long)arg1;

@end
