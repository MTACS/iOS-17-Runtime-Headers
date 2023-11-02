
@interface HDDatabaseConnectionPool : NSObject <HDDiagnosticObject> {
    NSMutableSet * _cache;
    NSCondition * _cacheCondition;
    unsigned long long  _cacheGeneration;
    long long  _cacheSize;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _checkoutLock;
    NSMapTable * _checkoutMap;
    long long  _concurrentReaderLimit;
    _Atomic int  _count;
    <HDDatabaseConnectionPoolDelegate> * _delegate;
    NSObject<OS_dispatch_group> * _flushGroup;
    NSObject<OS_dispatch_semaphore> * _readerSemaphore;
    NSObject<OS_dispatch_semaphore> * _writerSemaphore;
}

@property (nonatomic, readonly) long long cacheSize;
@property (nonatomic, readonly) long long checkedOutDatabaseCount;
@property (nonatomic, readonly) long long concurrentReaderLimit;
@property (nonatomic, readonly) long long count;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HDDatabaseConnectionPoolDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)cacheSize;
- (void)checkInConnection:(id)arg1 flushImmediately:(bool)arg2;
- (id)checkOutConnectionWithOptions:(unsigned long long)arg1 error:(id*)arg2;
- (long long)checkedOutDatabaseCount;
- (long long)concurrentReaderLimit;
- (long long)count;
- (id)currentFlushGroup;
- (void)dealloc;
- (id)delegate;
- (id)diagnosticDescription;
- (id)flush;
- (id)initWithConcurrentReaderLimit:(long long)arg1 delegate:(id)arg2;

@end
