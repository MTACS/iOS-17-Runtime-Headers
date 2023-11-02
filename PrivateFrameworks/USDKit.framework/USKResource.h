
@interface USKResource : NSObject {
    struct shared_ptr<pxrInternal_v0_22__aapl__pxrReserved__::ArAsset> { 
        struct ArAsset {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _asset;
    struct shared_ptr<const char> { 
        char *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _buffer;
    long long  _length;
}

+ (id)resourceWithPath:(id)arg1;
+ (id)resourceWithResourcePath:(id)arg1;
+ (id)resourceWithURL:(id)arg1;
+ (id)resourceWithUSKScene:(id)arg1 path:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)dataNoCopy;
- (void)dealloc;

@end
