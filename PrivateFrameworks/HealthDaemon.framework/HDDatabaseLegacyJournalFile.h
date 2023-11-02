
@interface HDDatabaseLegacyJournalFile : NSObject <HDJournalChapter> {
    NSURL * _URL;
    NSFileHandle * _fileHandle;
    unsigned int  _version;
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

- (void).cxx_destruct;
- (bool)appendData:(id)arg1 entryClass:(Class)arg2 error:(id*)arg3;
- (bool)canAppendData:(id)arg1;
- (void)close;
- (bool)createAndOpenForWritingWithError:(id*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)enumerateEntriesWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
- (bool)flushDataToDisk:(id*)arg1;
- (id)init;
- (id)initWithURL:(id)arg1;
- (bool)isOpen;
- (id)journalPath;
- (double)modificationTime;
- (id)name;
- (bool)openForReadingWithError:(id*)arg1;
- (unsigned int)readVersionWithError:(id*)arg1;
- (bool)removeWithError:(id*)arg1;
- (long long)size;

@end
