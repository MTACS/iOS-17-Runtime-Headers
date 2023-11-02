
@interface SampleTimeBuffer : NSObject {
    NSString * _name;
    struct vector<CMTime, std::allocator<CMTime>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<CMTime *, std::allocator<CMTime>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _times;
}

@property (nonatomic, copy) NSString *name;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)appendTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)description;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (bool)isEmpty;
- (id)name;
- (void)setName:(id)arg1;
- (id)timeline;

@end
