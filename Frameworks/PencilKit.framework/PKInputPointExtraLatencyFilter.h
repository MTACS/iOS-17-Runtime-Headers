
@interface PKInputPointExtraLatencyFilter : PKInputPointBaseFilter {
    struct vector<PKInputPoint, std::allocator<PKInputPoint>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<PKInputPoint *, std::allocator<PKInputPoint>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _inputPoints;
    long long  _numFramesExtraLatency;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addInputPoint:(struct { union { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; bool x9; long long x10; double x11; bool x12; })arg1;

@end
