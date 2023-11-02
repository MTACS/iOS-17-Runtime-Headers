
@interface _LSChangeObserver : NSObject {
    id /* block */  block;
    int  coalescingFlag;
    struct NotifyToken { 
        struct atomic<int> { 
            struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { 
                _Atomic int __a_value; 
            } __a_; 
        } rawValue; 
    }  notifyToken;
    unsigned int  uid;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
