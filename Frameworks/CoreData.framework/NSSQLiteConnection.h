
@interface NSSQLiteConnection : NSObject {
    NSMutableArray * _activeGenerations;
    NSSQLiteStatement * _beginStatement;
    struct __CFDictionary { } * _cachedEntityConstrainedValuesUpdateStatements;
    struct __CFDictionary { } * _cachedEntityUpdateStatements;
    long long  _cachedPageSize;
    NSArray * _columnsToFetch;
    NSSQLiteStatement * _commitStatement;
    struct sqlite3 { } * _db;
    NSString * _dbPath;
    NSString * _dbPathRegisteredWithBackupd;
    unsigned long long  _debugInode;
    void * _extraBuffersForRegisteredFunctions;
    struct sqlite3_stmt { } * _fetchPKStatement;
    NSSQLEntity * _finalEntity;
    NSSQLEntity * _lastEntity;
    unsigned int  _lastEntityKey;
    NSMutableArray * _mObjectIDsInsertedByDATriggers;
    NSMutableSet * _mObjectIDsUpdatedByTriggers;
    NSMutableArray * _mObjectIDsUpdatededByDATriggers;
    NSArray * _metadataColumns;
    NSMutableDictionary * _pragmaSettings;
    NSSQLitePrefetchRequestCache * _prefetchRequestCache;
    NSObject<OS_dispatch_queue> * _queue;
    NSSQLiteStatement * _rollbackStatement;
    int  _rowsProcessedCount;
    NSSQLSaveChangesRequestContext * _saveRequest;
    NSSQLCore * _sqlCore;
    NSSQLiteStatement * _sqlStatement;
    struct __sqliteConnectionFlags { 
        unsigned int _readyToBind : 1; 
        unsigned int _fetchInProgress : 1; 
        unsigned int _fileSystemType : 2; 
        unsigned int _proxyLocking : 1; 
        unsigned int _vacuumSetupNeeded : 1; 
        unsigned int _usingWAL : 1; 
        unsigned int _disallowReconnect : 1; 
        unsigned int _isWriter : 1; 
        unsigned int _didSnapshotRecovery : 1; 
        unsigned int _hasTransactionStringTable : 1; 
        unsigned int _isQueryGenTracking : 1; 
        unsigned int _reserved : 20; 
    }  _sqliteConnectionFlags;
    struct __CFDictionary { } * _statementCachesByEntity;
    NSMutableArray * _temporaryTables;
    double  _timeOutIncrement;
    double  _timeOutOption;
    bool  _transactionIsCurrentlyReadOnly;
    bool  _transactionIsOpen;
    NSMutableDictionary * _transactionStringName;
    struct sqlite3_stmt { } * _updatePKStatement;
    bool  _useSyntaxColoredLogging;
    NSMutableDictionary * _usedIndexes;
    long long  _vacuumTracker;
    struct __CFDictionary { } * _vmCachedStatements;
    struct sqlite3_stmt { } * _vmstatement;
    NSURL * _workingURL;
}

+ (void)initialize;

- (id)adapter;
- (void)dealloc;
- (void)execute;
- (id)initAsQueryGenerationTrackingConnectionForSQLCore:(id)arg1;
- (id)initForSQLCore:(id)arg1;
- (int)registerCurrentQueryGenerationWithStore:(id)arg1;
- (void)setExclusiveLockingMode:(bool)arg1;
- (id)sqlStatement;

@end
