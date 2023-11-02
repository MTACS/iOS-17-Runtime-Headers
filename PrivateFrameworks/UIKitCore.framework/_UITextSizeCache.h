
@interface _UITextSizeCache : NSObject {
    struct ui_size_cache { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<ui_size_cache_value *, std::allocator<ui_size_cache_value>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _cache;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addSize:(struct CGSize { double x1; double x2; })arg1 baselineInfo:(struct { double x1; double x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; long long x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; }*)arg2 forTargetSize:(struct CGSize { double x1; double x2; })arg3;
- (id)description;
- (bool)getSize:(struct CGSize { double x1; double x2; }*)arg1 baselineInfo:(struct { double x1; double x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; long long x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; }*)arg2 forTargetSize:(struct CGSize { double x1; double x2; })arg3 isMultiline:(bool)arg4;
- (void)removeAllSizes;

@end
