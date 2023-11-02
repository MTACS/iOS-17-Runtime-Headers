
@interface _PASHistogramData : NSObject <NSSecureCoding> {
    struct unique_ptr<proactive::pas::SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex>, std::default_delete<proactive::pas::SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex>>>="__ptr_"{__compressed_pair<proactive::pas::SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex> *, std::default_delete<proactive::pas::SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex>>>="__value_"^v {}  _guardedData;
    struct HDGuardedData { 
        struct SimdVector<float __attribute__((ext_vector_type(8))), float>="chunks"{vector<float __attribute__((ext_vector_type(8))), (anonymous namespace)::SimdAlignedAllocator<float __attribute__((ext_vector_type(8)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(8))), (anonymous namespace)::SimdAlignedAllocator<float __attribute__((ext_vector_type(8)))>>="__value_"^ {} scores; 
    }  _private_unsafeGuardedData;
}

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)aSet;
- (void)add:(float)arg1 a:(unsigned short)arg2 b:(unsigned short)arg3;
- (id)bSet;
- (void)clear;
- (int)countWhereA:(unsigned short)arg1 b:(unsigned short)arg2;
- (void)decayByFactor:(float)arg1;
- (void)decayWithHalfLifeInDays:(float)arg1;
- (void)deleteWhereA:(unsigned short)arg1 b:(unsigned short)arg2;
- (void)encodeWithCoder:(id)arg1;
- (float)entropyWhereA:(unsigned short)arg1 b:(unsigned short)arg2;
- (void)enumerate:(id /* block */)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (float)lookupSmoothedWithBucketCount:(unsigned short)arg1 distanceScale:(float)arg2 weightScale:(float)arg3 a:(unsigned short)arg4 b:(unsigned short)arg5;
- (float)lookupUnsmoothedA:(unsigned short)arg1 b:(unsigned short)arg2;

@end
