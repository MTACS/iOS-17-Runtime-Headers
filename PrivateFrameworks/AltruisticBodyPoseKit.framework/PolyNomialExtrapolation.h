
@interface PolyNomialExtrapolation : NSObject {
    struct Matrix<float, 0U, 0U, false> { 
        float *m_data; 
        unsigned long long m_capacity; 
        unsigned int m_rows; 
        unsigned int m_cols; 
    }  _A;
    int  _N;
    struct Matrix<float, 0U, 1U, false> { 
        float *m_data; 
        unsigned long long m_capacity; 
        unsigned int m_rows; 
    }  _b;
    struct vector<float, std::allocator<float>> { 
        float *__begin_; 
        float *__end_; 
        struct __compressed_pair<float *, std::allocator<float>> { 
            float *__value_; 
        } __end_cap_; 
    }  _g;
    int  _n;
    struct deque<float, std::allocator<float>> { 
        struct __split_buffer<float *, std::allocator<float *>> { 
            float **__first_; 
            float **__begin_; 
            float **__end_; 
            struct __compressed_pair<float **, std::allocator<float *>> { 
                float **__value_; 
            } __end_cap_; 
        } __map_; 
        unsigned long long __start_; 
        struct __compressed_pair<unsigned long, std::allocator<float>> { 
            unsigned long long __value_; 
        } __size_; 
    }  _x;
    struct deque<float, std::allocator<float>> { 
        struct __split_buffer<float *, std::allocator<float *>> { 
            float **__first_; 
            float **__begin_; 
            float **__end_; 
            struct __compressed_pair<float **, std::allocator<float *>> { 
                float **__value_; 
            } __end_cap_; 
        } __map_; 
        unsigned long long __start_; 
        struct __compressed_pair<unsigned long, std::allocator<float>> { 
            unsigned long long __value_; 
        } __size_; 
    }  _y;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithHistorySize:(unsigned long long)arg1 degreeOfPolynomial:(unsigned long long)arg2;
- (void)predict;
- (void)printHistoryNamed:(id)arg1;
- (void)pushPoint;
- (bool)ready;

@end
