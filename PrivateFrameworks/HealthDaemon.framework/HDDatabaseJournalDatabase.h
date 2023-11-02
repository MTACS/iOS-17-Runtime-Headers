
@interface HDDatabaseJournalDatabase : NSObject <HDJournalChapter> {
    HDSQLiteDatabase * _database;
    NSURL * _databaseURL;
    long long  _enumeratedBytesThreshold;
    HDKeyValueDomain * _keyValueDomain;
    NSDate * _modificationDate;
    NSNumber * _size;
    id /* block */  _unitTesting_didCreateDatabaseConnectionHandler;
    HDKeyValueDomain * _unitTesting_keyValueDomainOverride;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isOpen;
@property (nonatomic, readonly, copy) NSString *journalPath;
@property (nonatomic, readonly) double modificationTime;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) long long size;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unitTesting_didCreateDatabaseConnectionHandler;
@property (nonatomic, retain) HDKeyValueDomain *unitTesting_keyValueDomainOverride;
@property (nonatomic, retain) HDSQLiteDatabase *unitTesting_underlyingDatabase;

- (void).cxx_destruct;
- (bool)appendData:(id)arg1 entryClass:(Class)arg2 error:(id*)arg3;
- (bool)canAppendData:(id)arg1;
- (void)close;
- (bool)createAndOpenForWritingWithError:(id*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)enumerateEntriesWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
- (bool)flushDataToDisk:(id*)arg1;
- (id)getIdentifierAndCreationDate:(id*)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithURL:(id)arg1;
- (bool)isOpen;
- (id)journalPath;
- (double)modificationTime;
- (id)name;
- (bool)openForReadingWithError:(id*)arg1;
- (unsigned int)readVersionWithError:(id*)arg1;
- (bool)removeWithError:(id*)arg1;
- (void)setUnitTesting_didCreateDatabaseConnectionHandler:(id /* block */)arg1;
- (void)setUnitTesting_keyValueDomainOverride:(id)arg1;
- (void)setUnitTesting_underlyingDatabase:(id)arg1;
- (long long)size;
- (id /* block */)unitTesting_didCreateDatabaseConnectionHandler;
- (id)unitTesting_keyValueDomainOverride;
- (void)unitTesting_setEnumeratedBytesThreshold:(long long)arg1;
- (id)unitTesting_underlyingDatabase;

@end
