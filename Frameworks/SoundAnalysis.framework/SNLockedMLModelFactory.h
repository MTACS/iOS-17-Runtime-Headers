
@interface SNLockedMLModelFactory : NSObject {
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _lock;
    NSMapTable * _vendedModels;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;

@end
