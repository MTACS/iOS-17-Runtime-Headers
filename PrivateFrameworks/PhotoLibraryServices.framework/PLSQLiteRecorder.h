
@interface PLSQLiteRecorder : NSObject {
    id /* block */  _decorator;
    id /* block */  _entriesHandler;
    bool  _isSearch;
    int  _lastObservedPagesHit;
    int  _lastObservedPagesMissed;
    NSMutableArray * _lastStatements;
    long long  _libraryID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _muted;
    struct sqlite3 { } * _targetDb;
}

+ (id)queryPlanFromSQL:(const char *)arg1 usingDb:(struct sqlite3 { }*)arg2;

- (void).cxx_destruct;
- (id)_recordedStatementsAndReset:(bool)arg1;
- (id)init;
- (id)initWithEntryDecorator:(id /* block */)arg1 entriesAvailableHandler:(id /* block */)arg2;
- (id)recordedStatements;
- (id)recordedStatementsAndReset;
- (bool)startRecordingSqliteDb:(struct sqlite3 { }*)arg1;
- (bool)stopRecording;

@end
