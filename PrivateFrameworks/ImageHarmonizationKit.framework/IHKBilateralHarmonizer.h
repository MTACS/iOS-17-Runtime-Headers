
@interface IHKBilateralHarmonizer : NSObject {
    float  _baseHarmonizationStrength;
    struct PixelBufferTensor { 
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
    }  _bgInput;
    NSString * _bgName;
    struct PixelBufferTensor { 
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
    }  _fgInput;
    NSString * _fgName;
    NSString * _gatingOutName;
    float  _gatingThreshold;
    NSLock * _lock;
    struct unique_ptr<ik::EspressoNet, std::default_delete<ik::EspressoNet>> { 
        struct __compressed_pair<ik::EspressoNet *, std::default_delete<ik::EspressoNet>> { 
            struct EspressoNet {} *__value_; 
        } __ptr_; 
    }  _net;
    NSString * _networkPath;
    NSString * _outName;
    unsigned char  _supportsAlpha;
}

@property (readonly) NSString *networkPath;
@property (readonly) unsigned char supportsAlpha;

+ (id)getDefault;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGImage { }*)handleRequest:(id)arg1;
- (id)harmonize:(id)arg1;
- (id)initWithNetwork:(id)arg1 supportsAlpha:(unsigned char)arg2 fgName:(id)arg3 bgName:(id)arg4 outName:(id)arg5 gatingOutName:(id)arg6 gatingThreshold:(float)arg7 inputResolution:(unsigned long long)arg8;
- (id)initWithNetwork:(id)arg1 supportsAlpha:(unsigned char)arg2 fgName:(id)arg3 bgName:(id)arg4 outName:(id)arg5 gatingOutName:(id)arg6 gatingThreshold:(float)arg7 inputResolution:(unsigned long long)arg8 baseHarmonizationStrength:(float)arg9;
- (id)initWithNetwork:(id)arg1 supportsAlpha:(unsigned char)arg2 fgName:(id)arg3 bgName:(id)arg4 outName:(id)arg5 inputResolution:(unsigned long long)arg6;
- (void)load;
- (id)networkPath;
- (unsigned char)supportsAlpha;

@end
