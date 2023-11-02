
@interface PLJournalFile : NSObject {
    PLJournal * _journal;
    NSURL * _url;
}

@property (nonatomic) PLJournal *journal;
@property (nonatomic, readonly) NSURL *url;

+ (bool)copyURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
+ (bool)createEmptyURL:(id)arg1 error:(id*)arg2;
+ (bool)fileExistsAtURL:(id)arg1;
+ (bool)moveURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
+ (bool)removeURL:(id)arg1 error:(id*)arg2;
+ (bool)writeData:(id)arg1 toURL:(id)arg2 atomically:(bool)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (bool)_fileSize:(unsigned long long*)arg1 forKey:(id)arg2 error:(id*)arg3;
- (bool)allocatedFileSize:(unsigned long long*)arg1 error:(id*)arg2;
- (bool)appendEntries:(id)arg1 error:(id*)arg2;
- (bool)copyToURL:(id)arg1 error:(id*)arg2;
- (bool)createEmptyFileWithError:(id*)arg1;
- (bool)enumerateEntriesUsingBlock:(id /* block */)arg1 decodePayload:(bool)arg2 error:(id*)arg3;
- (bool)fileExists;
- (id)fileHandleForWritingWithError:(id*)arg1;
- (bool)fileSize:(unsigned long long*)arg1 error:(id*)arg2;
- (id)initWithURL:(id)arg1 journal:(id)arg2;
- (id)journal;
- (bool)moveToURL:(id)arg1 error:(id*)arg2;
- (bool)openForReadingUsingBlock:(id /* block */)arg1 error:(id*)arg2;
- (bool)openForWritingUsingBlock:(id /* block */)arg1 error:(id*)arg2;
- (bool)removeFileWithError:(id*)arg1;
- (void)setJournal:(id)arg1;
- (id)url;

@end
