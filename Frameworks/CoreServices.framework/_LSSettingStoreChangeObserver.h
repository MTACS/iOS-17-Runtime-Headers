
@interface _LSSettingStoreChangeObserver : NSObject {
    id /* block */  block;
    struct NotifyToken { 
        struct atomic<int> { 
            struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { 
                _Atomic int __a_value; 
            } __a_; 
        } rawValue; 
    }  notifyToken;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
