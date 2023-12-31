
@interface GKSessionGlobals : NSObject {
    unsigned int * _activePIDList;
    unsigned long long  _activePIDListCount;
    unsigned long long  _activePIDListSize;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
}

- (bool)hasActivePID:(unsigned int)arg1;
- (id)init;
- (void)lock;
- (void)registerPID:(unsigned int)arg1;
- (void)unlock;
- (void)unregisterPID:(unsigned int)arg1;

@end
