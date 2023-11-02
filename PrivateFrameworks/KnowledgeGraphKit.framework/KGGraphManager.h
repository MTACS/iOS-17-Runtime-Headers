
@interface KGGraphManager : NSObject {
    bool  _closed;
    <KGEntityFactory> * _entityFactory;
    NSObject<OS_dispatch_queue> * _executionQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _readFeederQueue;
    bool  _readFeeding;
    NSMutableArray * _readOnlyStores;
    int  _readRunningCount;
    BOOL  _readStoreBooking;
    KGDegasGraphStore * _readWriteStore;
    NSURL * _url;
    NSObject<OS_dispatch_queue> * _writeFeederQueue;
}

@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (void)asyncClose:(id /* block */)arg1;
- (bool)checkValidState;
- (void)checkinReadOnlyStore:(id)arg1;
- (void)close;
- (void)dealloc;
- (void)decrementReadCount;
- (void)doClose;
- (void)incrementReadCount;
- (id)initWithURL:(id)arg1 entityFactory:(id)arg2;
- (id)obtainReadOnlyStore:(id*)arg1;
- (id)obtainReadWriteStore:(id*)arg1;
- (void)performAsyncExclusiveBlock:(id /* block */)arg1;
- (void)performAsyncReadBlock:(id /* block */)arg1;
- (void)performAsyncWriteBlock:(id /* block */)arg1;
- (void)performExclusiveBlock:(id /* block */)arg1;
- (void)performReadBlock:(id /* block */)arg1;
- (void)performWriteBlock:(id /* block */)arg1;
- (bool)replaceFromGraph:(id)arg1 error:(id*)arg2;
- (void)setEntityFactory:(id)arg1;
- (void)submitExclusiveBlock:(id /* block */)arg1 async:(bool)arg2;
- (void)submitReadBlock:(id /* block */)arg1 async:(bool)arg2;
- (void)submitWriteBlock:(id /* block */)arg1 async:(bool)arg2;
- (id)url;

@end
