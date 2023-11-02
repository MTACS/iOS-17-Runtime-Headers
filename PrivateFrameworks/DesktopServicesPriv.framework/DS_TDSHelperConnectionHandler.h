
@interface DS_TDSHelperConnectionHandler : NSObject {
    void * _helper;
    struct TDSMutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } fMutex; 
    }  _mutex;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearHelper;
- (void)handleHelperEvent:(id)arg1;
- (id)initWithHelper:(void*)arg1;

@end
