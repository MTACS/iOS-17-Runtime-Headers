
@interface NSURLStorageURLCacheDB : NSObject {
    unsigned long long  _currentFSBackedUsage;
    unsigned long long  _currentSQLiteDBUsage;
    unsigned long long  _currentTotalPersistentCacheUsage;
    NSString * _dbPathDirectory;
    NSString * _dbPathFile;
    struct sqlite3 { } * _dbReadConnection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _dbReadConnectionLock;
    struct sqlite3 { } * _dbWriteConnection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _dbWriteConnectionLock;
    NSMutableArray * _entryIDsToDelete;
    bool  _isDBOpen;
    long long  _maxDBSize;
    long long  _minSizeForFileSystemBackedCacheItem;
    struct sqlite3_stmt { } * _sqlDeleteStmtBlobData;
    struct sqlite3_stmt { } * _sqlDeleteStmtReceiverData;
    struct sqlite3_stmt { } * _sqlDeleteStmtResponse;
    struct sqlite3_stmt { } * _sqlInsertStmtBlobData;
    struct sqlite3_stmt { } * _sqlInsertStmtReceiverData;
    struct sqlite3_stmt { } * _sqlInsertStmtResponse;
    struct sqlite3_stmt { } * _sqlSelectEntry_idAndRecevierDataForKeyStmt;
    struct sqlite3_stmt { } * _sqlSelectFileSystemFileForDeletionStmt;
    struct sqlite3_stmt { } * _sqlSelectIsDataOnFSForEntry_IDStmt;
    struct sqlite3_stmt { } * _sqlSelectStmt;
    struct sqlite3_stmt { } * _sqlUpdateBlobDataStmt;
    struct sqlite3_stmt { } * _sqlUpdateReceiverDataStmt;
    struct sqlite3_stmt { } * _sqlUpdateResponseStmt;
    bool  _updatingSchema;
    unsigned long long  _writeCount;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
