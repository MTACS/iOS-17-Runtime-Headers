
@interface PKLiveStrokePath : PKStrokePath {
    struct vector<PKInputPoint, std::allocator<PKInputPoint>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<PKInputPoint *, std::allocator<PKInputPoint>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _inputPoints;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithPoints:(struct PKCompressedStrokePoint { struct _PKPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; float x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; float x10; }*)arg1 count:(unsigned long long)arg2 immutableCount:(unsigned long long)arg3 inputType:(long long)arg4 timestamp:(double)arg5 UUID:(id)arg6 inputPoints:(const void*)arg7;
- (id)regenerateStrokeWithInk:(id)arg1 randomSeed:(unsigned int)arg2 strokeClass:(Class)arg3;

@end
