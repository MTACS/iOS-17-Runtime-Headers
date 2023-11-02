
@interface EDPersistenceDatabaseJournalManager : NSObject <EFLoggable> {
    NSObject<OS_dispatch_queue> * _checkExistingQueue;
    EDPersistenceDatabaseJournal * _currentJournal;
    NSObject<OS_dispatch_queue> * _deleteQueue;
    NSString * _journalDirectoryPath;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _journalLock;
    NSMutableIndexSet * _journalNumbers;
    NSMapTable * _journalsByIndexes;
    NSMutableIndexSet * _pendingDeleteJournalNumbers;
    bool  _shouldDeleteCurrentJournal;
}

@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *checkExistingQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *deleteQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *journalDirectoryPath;
@property (nonatomic, readonly) EDPersistenceDatabaseJournal *oldestJournal;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (void)_deleteJournalNumber:(unsigned long long)arg1;
- (id)_getJournalWithBlock:(id /* block */)arg1;
- (void)_journalNoLongerReferenced:(id)arg1;
- (id)checkExistingQueue;
- (id)currentJournalCreateIfNeeded:(bool)arg1;
- (id)deleteQueue;
- (id)initWithBasePath:(id)arg1;
- (id)journalDirectoryPath;
- (void)mergedJournal:(id)arg1;
- (id)oldestJournal;
- (void)waitForDeletes;

@end
