
@interface NNMKSQLJournal : NSObject {
    NSMutableData * _currentFileData;
    NSString * _directoryPath;
    unsigned long long  _filesCount;
    NSObject<OS_dispatch_queue> * _journalQueue;
}

@property (nonatomic, retain) NSMutableData *currentFileData;
@property (nonatomic, retain) NSString *directoryPath;
@property (nonatomic) unsigned long long filesCount;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *journalQueue;

- (void).cxx_destruct;
- (unsigned long long)_currentFilesCount;
- (void)_flush;
- (id)_journalFilesEnumerator;
- (id)_nextFilePath;
- (id)_sortedJournalFiles;
- (bool)appendSQLStatement:(id)arg1;
- (id)currentFileData;
- (void)deleteJournalFiles;
- (id)directoryPath;
- (unsigned long long)filesCount;
- (void)flushIfNeeded;
- (id)initWithPath:(id)arg1;
- (bool)isJournalOverflow;
- (id)journalQueue;
- (void)mergeUsingBlock:(id /* block */)arg1;
- (void)setCurrentFileData:(id)arg1;
- (void)setDirectoryPath:(id)arg1;
- (void)setFilesCount:(unsigned long long)arg1;
- (void)setJournalQueue:(id)arg1;

@end
