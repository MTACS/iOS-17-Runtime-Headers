
@interface _PFLock : NSObject <NSLocking> {
    unsigned long long  _count;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    struct _opaque_pthread_t { long long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[8176]; } * _owner;
}

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)lock;
- (bool)tryLock;
- (void)unlock;

@end
