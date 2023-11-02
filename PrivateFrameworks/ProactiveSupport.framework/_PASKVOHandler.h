
@interface _PASKVOHandler : NSObject {
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    NSMutableArray * _tasks;
}

- (void).cxx_destruct;
- (void)_watchKeyPath:(id)arg1 ofObject:(id)arg2 options:(unsigned long long)arg3 usingTask:(id)arg4;
- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)reactAfterChangesToKeyPath:(id)arg1 ofObject:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)reactAsynchronouslyAfterChangesToKeyPath:(id)arg1 ofObject:(id)arg2 usingBlock:(id /* block */)arg3 onQueue:(id)arg4;
- (void)reactBeforeAndAfterChangesToKeyPath:(id)arg1 ofObject:(id)arg2 usingBlock:(id /* block */)arg3;

@end
