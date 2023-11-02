
@protocol HDJournalChapter <NSObject>

@required

- (bool)appendData:(NSData *)arg1 entryClass:(Class)arg2 error:(id*)arg3;
- (bool)canAppendData:(NSData *)arg1;
- (void)close;
- (bool)createAndOpenForWritingWithError:(id*)arg1;
- (unsigned int)enumerateEntriesWithProfile:(void *)arg1 transaction:(void *)arg2 error:(void *)arg3 handler:(void *)arg4; // needs 4 arg types, found 12: HDProfile *, HDDatabaseTransaction *, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, unsigned int, id /* block */, NSArray *, unsigned long long, bool, id*, void*
- (bool)flushDataToDisk:(id*)arg1;
- (bool)isOpen;
- (NSString *)journalPath;
- (double)modificationTime;
- (NSString *)name;
- (bool)openForReadingWithError:(id*)arg1;
- (unsigned int)readVersionWithError:(id*)arg1;
- (bool)removeWithError:(id*)arg1;
- (long long)size;

@end
