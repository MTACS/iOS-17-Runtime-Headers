
@interface NUISizeCache : NSObject {
    struct nui_size_cache { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::pair<CGSize, CGSize> *, std::allocator<std::pair<CGSize, CGSize>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _sizeCache;
    bool  _threadSafe;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (bool)getSize:(struct CGSize { double x1; double x2; }*)arg1 forTargetSize:(struct CGSize { double x1; double x2; })arg2 isSizeDependentOnPerpendicularAxis:(bool)arg3;
- (id)initForAsynchronousAccess:(bool)arg1;
- (void)insertSize:(struct CGSize { double x1; double x2; })arg1 forTargetSize:(struct CGSize { double x1; double x2; })arg2;
- (void)invalidateCache;

@end
