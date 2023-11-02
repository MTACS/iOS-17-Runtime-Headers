
@interface ML3DatabaseConnectionPool : NSObject {
    bool  _closed;
    unsigned long long  _connectionsJournalingMode;
    NSString * _databasePath;
    <ML3DatabaseConnectionPoolDelegate> * _delegate;
    NSMutableDictionary * _identifiersConnectionsMap;
    bool  _locked;
    unsigned long long  _maxReaders;
    unsigned long long  _maxWriters;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  _poolLockCondition;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _poolLockMutex;
    NSUUID * _poolStorageKey;
    _ML3DatabaseConnectionSubPool * _readersSubPool;
    NSObject<OS_dispatch_queue> * _serialQueue;
    bool  _useDistantWriterConnections;
    _ML3DatabaseConnectionSubPool * _writersSubPool;
}

@property (getter=isClosed, nonatomic) bool closed;
@property (nonatomic) unsigned long long connectionsJournalingMode;
@property (nonatomic, readonly) NSString *databasePath;
@property (nonatomic) <ML3DatabaseConnectionPoolDelegate> *delegate;
@property (nonatomic, readonly) bool isCurrentThreadConnectionInTransaction;
@property (getter=isLocked, nonatomic, readonly) bool locked;
@property (nonatomic, readonly) unsigned long long maxReaders;
@property (nonatomic, readonly) unsigned long long maxWriters;
@property (nonatomic) bool useDistantWriterConnections;

- (void).cxx_destruct;
- (void)_closeAllConnectionsAndWaitForBusyConnections:(bool)arg1;
- (id)_connectionForIdentifier:(id)arg1;
- (id)_connectionForWriting:(bool)arg1 useThreadConnection:(bool)arg2 storeThreadLocalConnection:(bool)arg3;
- (id)_generateDiagnostic;
- (id)_localConnectionForThread:(id)arg1;
- (void)_setConnection:(id)arg1 forIdentifier:(id)arg2;
- (void)_setLocalConnection:(id)arg1 forThread:(id)arg2;
- (void)checkInConnection:(id)arg1;
- (void)closeAllConnections;
- (unsigned long long)connectionsJournalingMode;
- (id)databasePath;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)init;
- (id)initWithDatabasePath:(id)arg1 maxReaders:(unsigned long long)arg2;
- (id)initWithDatabasePath:(id)arg1 maxReaders:(unsigned long long)arg2 maxWriters:(unsigned long long)arg3;
- (bool)isClosed;
- (bool)isCurrentThreadConnectionInTransaction;
- (bool)isLocked;
- (void)lock;
- (void)lockAndCloseAllConnectionsForTermination;
- (unsigned long long)maxReaders;
- (unsigned long long)maxWriters;
- (id)readerConnection;
- (void)setClosed:(bool)arg1;
- (void)setConnectionsJournalingMode:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setUseDistantWriterConnections:(bool)arg1;
- (void)unlock;
- (bool)useDistantWriterConnections;
- (id)writerConnection;

@end
