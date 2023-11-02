
@interface HDDatabaseJournal : NSObject {
    NSURL * _URL;
    HDDatabaseTransaction * _activeMergeTransaction;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _activeTransactionLock;
    <HDJournalChapter> * _currentJournalChapter;
    <HDDatabaseJournalDelegate> * _delegate;
    bool  _interrupted;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _interruptionLock;
    bool  _invalidated;
    bool  _isMerging;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _journalLock;
    long long  _journalStatus;
    NSString * _lastInsertedEntryClassName;
    NSNumber * _maximumJournalBytes;
    NSObject<OS_dispatch_queue> * _mergeQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _progressLock;
    NSProgress * _progressLock_internalProgress;
    NSProgress * _progressLock_observableProgress;
    long long  _serializedDataEnumerationThreshold;
    long long  _type;
}

@property (nonatomic) <HDDatabaseJournalDelegate> *delegate;
@property (readonly) bool isMerging;
@property (copy) NSNumber *maximumJournalBytes;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *mergeQueue;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (void)_unitTesting_closeCurrentJournalChapter;
- (id)_unitTesting_directoryURL;
- (void)_unitTesting_setJournalStatusRequiresMerge;
- (void)_unitTesting_setSerializedDataEnumerationThreshold:(long long)arg1;
- (bool)addJournalEntries:(id)arg1 profile:(id)arg2 error:(id*)arg3;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)init;
- (id)initWithType:(long long)arg1 path:(id)arg2;
- (void)interruptJournalMerge;
- (void)invalidate;
- (bool)isMerging;
- (long long)journalChapterCount;
- (void)lock;
- (id)maximumJournalBytes;
- (id)mergeQueue;
- (bool)mergeWithProfile:(id)arg1 shouldContinueHandler:(id /* block */)arg2;
- (bool)performMergeTransactionWithProfile:(id)arg1 transactionContext:(id)arg2 error:(id*)arg3 block:(id /* block */)arg4;
- (id)progressForJournalMerge;
- (void)resumeJournalMerge;
- (void)setDelegate:(id)arg1;
- (void)setMaximumJournalBytes:(id)arg1;
- (unsigned long long)sizeOnDisk;
- (long long)type;
- (void)unlock;

@end
