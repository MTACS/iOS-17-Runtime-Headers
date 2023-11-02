
@interface SampleTimeList : NSObject {
    NSArray * _cached_cmtimes;
    NSArray * _cached_times;
    NSString * _name;
    struct vector<CMTime, std::allocator<CMTime>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<CMTime *, std::allocator<CMTime>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _times;
    MOVStreamTimestamps * _timestamps;
}

@property (nonatomic, readonly, copy) NSArray *cached_cmtimes;
@property (nonatomic, readonly, copy) NSArray *cached_times;
@property (nonatomic, readonly) NSArray *cmtimes;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) NSArray *times;
@property (nonatomic, retain) MOVStreamTimestamps *timestamps;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)cached_cmtimes;
- (id)cached_times;
- (id)cmtimes;
- (unsigned long long)count;
- (id)description;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })frameRangeFrom:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 to:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)init;
- (id)initWithTimes:(const void*)arg1;
- (id)initWithTimestamps:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)setTimestamps:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timeAtIndex:(unsigned long long)arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (id)times;
- (id)timestamps;

@end
