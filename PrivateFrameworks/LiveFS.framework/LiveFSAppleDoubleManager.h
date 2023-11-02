
@interface LiveFSAppleDoubleManager : NSObject {
    unsigned long long  _ADAcctiveForBaseHandleSetWaiters;
    NSMutableSet * _ADActiveForBaseHandleSet;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  _ADActiveForBaseHandleSetCond;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _ADActiveForBaseHandleSetMutex;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _ADActiveForBaseHandleSetRWLock;
    unsigned long long  _clientID;
    LiveFSVolume * mount;
    NSObject<OS_dispatch_queue> * queue;
}

@property unsigned long long clientID;
@property (retain) LiveFSVolume *mount;
@property (retain) NSObject<OS_dispatch_queue> *queue;

+ (id)AppleDoubleManagerForMount:(id)arg1;
+ (bool)isDotUnderBarFileName:(id)arg1;

- (void).cxx_destruct;
- (id)AppleDoubleForNamespaceWithBaseFile:(id)arg1 named:(id)arg2 inDirectory:(id)arg3;
- (id)AppleDoubleForPurpose:(int)arg1 withBaseFile:(id)arg2 named:(id)arg3 inDirectory:(id)arg4;
- (id)AppleDoubleForReadingWithBaseFile:(id)arg1 named:(id)arg2 inDirectory:(id)arg3;
- (id)AppleDoubleForWritingWithBaseFile:(id)arg1 named:(id)arg2 inDirectory:(id)arg3;
- (id)AppleDoubleNameForFileNamed:(id)arg1;
- (void)acquireForBaseFile:(id)arg1;
- (unsigned long long)clientID;
- (void)dealloc;
- (bool)enumerateDirectory:(id)arg1 intoArray:(id)arg2;
- (id)initWithMount:(id)arg1;
- (id)mount;
- (id)queue;
- (void)releaseForBaseFile:(id)arg1;
- (bool)scrubDirectoryNamed:(id)arg1 inDirectory:(id)arg2;
- (void)setClientID:(unsigned long long)arg1;
- (void)setMount:(id)arg1;
- (void)setQueue:(id)arg1;

@end
