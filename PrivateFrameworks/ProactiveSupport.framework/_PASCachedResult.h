
@interface _PASCachedResult : NSObject {
    id  _data;
    _Atomic bool  _done;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)resultNonnullWithBlock:(id /* block */)arg1;
- (id)resultWithBlock:(id /* block */)arg1;

@end
