
@interface _PASLazyResult : NSObject {
    id /* block */  _block;
    id  _data;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
}

@property (nonatomic, readonly) id result;
@property (nonatomic, readonly) id resultIfAvailable;

- (void).cxx_destruct;
- (id)_init;
- (id)_initWithBlock:(id /* block */)arg1;
- (void)dealloc;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithResult:(id)arg1;
- (id)result;
- (id)resultIfAvailable;

@end
