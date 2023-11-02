
@interface FontAssetDownloadManager : NSObject {
    NSMutableDictionary * fAssetToDescriptors;
    struct TCFRef<const __CFArray *> { 
        struct atomic<const __CFArray *> { 
            struct __cxx_atomic_impl<const __CFArray *, std::__cxx_atomic_base_impl<const __CFArray *>> { 
                _Atomic struct __CFArray {} *__a_value; 
            } __a_; 
        } fRef; 
    }  fDescriptors;
    NSMutableDictionary * fDownloadOptions;
    struct TCFRef<const __CFSet *> { 
        struct atomic<const __CFSet *> { 
            struct __cxx_atomic_impl<const __CFSet *, std::__cxx_atomic_base_impl<const __CFSet *>> { 
                _Atomic struct __CFSet {} *__a_value; 
            } __a_; 
        } fRef; 
    }  fMandatoryAttributes;
    id /* block */  fProgressCallbackBlock;
    NSMutableDictionary * fProgressParams;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;

@end
