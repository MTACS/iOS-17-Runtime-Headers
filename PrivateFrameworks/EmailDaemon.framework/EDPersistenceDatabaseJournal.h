
@interface EDPersistenceDatabaseJournal : NSObject {
    EDPersistenceDatabaseJournalManager * _journalManager;
    unsigned long long  _number;
    unsigned long long  _referenceCount;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _referenceCountLock;
}

@property (nonatomic, readonly) EDPersistenceDatabaseJournalManager *journalManager;
@property (nonatomic, readonly) unsigned long long number;
@property (nonatomic, readonly, copy) NSString *path;
@property (readonly) unsigned long long referenceCount;

- (void).cxx_destruct;
- (void)checkIn;
- (void)checkOut;
- (id)description;
- (id)initWithJournalManager:(id)arg1 number:(unsigned long long)arg2;
- (id)journalManager;
- (unsigned long long)number;
- (id)path;
- (unsigned long long)referenceCount;

@end
