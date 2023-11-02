
@interface IHKFeatureVector : NSObject <NSSecureCoding> {
    struct EspressoTensor { 
        int (**_vptr$Tensor)(); 
        int type_; 
        struct TensorShape { 
            struct vector<unsigned long, std::allocator<unsigned long>> { 
                unsigned long long *__begin_; 
                unsigned long long *__end_; 
                struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { 
                    unsigned long long *__value_; 
                } __end_cap_; 
            } sizes_; 
        } shape_; 
        struct shared_ptr<ik::TensorStorage> { 
            struct TensorStorage {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } storage_; 
    }  _tensor;
}

@property /* Warning: unhandled struct encoding: '{EspressoTensor=^^?i{TensorShape={vector<unsigned long' */ struct  tensor; /* unknown property attribute:  std::allocator<unsigned long>>=^Q}}}{shared_ptr<ik::TensorStorage>=^{TensorStorage}^{__shared_weak_count}}} */

+ (id)addFeatureVectorA:(id)arg1 B:(id)arg2;
+ (id)copy:(id)arg1;
+ (id)multiplyFeatureVector:(id)arg1 byScalar:(float)arg2;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (float)cosineSimilarity:(id)arg1;
- (void)debugPrintTensor:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)featureVectorByAppendingFeatureVector:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithTensor:(struct EspressoTensor { int (**x1)(); int x2; struct TensorShape { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x_1_2_1; unsigned long long *x_1_2_2; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; struct shared_ptr<ik::TensorStorage> { struct TensorStorage {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; })arg1;
- (float)l2Distance:(id)arg1;
- (void)saveToBinaryFile:(id)arg1;
- (void)saveToTextFile:(id)arg1;
- (void)setTensor:(struct EspressoTensor { int (**x1)(); int x2; struct TensorShape { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x_1_2_1; unsigned long long *x_1_2_2; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; struct shared_ptr<ik::TensorStorage> { struct TensorStorage {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; })arg1;
- (unsigned long long)size;
- (id)subFeatureVectorWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct EspressoTensor { int (**x1)(); int x2; struct TensorShape { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x_1_2_1; unsigned long long *x_1_2_2; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; struct shared_ptr<ik::TensorStorage> { struct TensorStorage {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; })tensor;

@end
