
@interface CKDClonedFileCache : NSObject {
    NSURL * _cacheDirectory;
    NSMutableArray * _entries;
    unsigned long long  _entryLimit;
}

- (void).cxx_destruct;
- (id)cacheEntries;
- (id)cloneFileDescriptor:(int)arg1 error:(id*)arg2;
- (id)cloneMMCSItem:(id)arg1 error:(id*)arg2;
- (unsigned long long)entryCount;
- (id)initWithCacheDirectory:(id)arg1 limit:(unsigned long long)arg2;
- (void)prune;

@end
