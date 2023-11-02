
@interface EDPersistenceDatabaseConnectionPool : NSObject {
    EFResourcePool * _backgroundReaderResources;
    int  _backgroundReadersWaiting;
    NSMutableSet * _cache;
    unsigned long long  _cacheGeneration;
    NSLock * _cacheLock;
    unsigned long long  _cacheSize;
    NSLock * _checkoutLock;
    NSMapTable * _checkoutMap;
    <EDPersistenceDatabaseConnectionPoolDelegate> * _delegate;
    unsigned long long  _maxConcurrentBackgroundReaders;
    _EDPersistenceDatabaseConnectionWrapper * _writerConnection;
    NSLock * _writerLock;
    int  _writersWaiting;
}

@property (nonatomic, readonly) unsigned long long backgroundReadersWaiting;
@property (nonatomic) unsigned long long cacheSize;
@property (nonatomic) <EDPersistenceDatabaseConnectionPoolDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long maxConcurrentBackgroundReaders;
@property (nonatomic, readonly) unsigned long long writersWaiting;

- (void).cxx_destruct;
- (id)_connectionWithType:(unsigned long long)arg1;
- (bool)_lockForConnectionType:(unsigned long long)arg1 resource:(id*)arg2;
- (void)_unlockForConnectionType:(unsigned long long)arg1 resource:(id)arg2;
- (id)backgroundReaderConnection;
- (unsigned long long)backgroundReadersWaiting;
- (unsigned long long)cacheSize;
- (void)checkInConnection:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)flush;
- (id)init;
- (id)initWithDelegate:(id)arg1 maxConcurrentBackgroundReaders:(unsigned long long)arg2;
- (unsigned long long)maxConcurrentBackgroundReaders;
- (unsigned long long)maxConcurrentReaders;
- (id)readerConnection;
- (void)setCacheSize:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (id)writerConnection;
- (unsigned long long)writersWaiting;

@end
