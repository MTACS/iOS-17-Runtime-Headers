
@interface QLCacheMMAPBlobDatabase : NSObject {
    _QLCacheThread * _cacheThread;
    int  _file;
    QLCacheFragHandler * _fragHandler;
    unsigned long long  _maxSize;
    NSString * _path;
    NSMutableArray * _reservedBuffers;
    void * _vmFile;
}

@property _QLCacheThread *cacheThread;
@property (readonly) float fragmentation;
@property (readonly) unsigned long long maxSize;
@property (readonly) unsigned long long size;

- (void).cxx_destruct;
- (void*)bufferPointedToByBlobInfo:(id)arg1;
- (id)cacheHolesOrderedByStart;
- (id)cacheThread;
- (id)checkConsistency:(id)arg1;
- (void)close;
- (void)compactFragmentation;
- (id)copyBlobWithInfo:(id)arg1;
- (bool)deleteBlobWithInfo:(id)arg1;
- (bool)deleteBlobsWithArray:(id)arg1;
- (void)discardReservedBufferWithBlobInfo:(id)arg1;
- (bool)doesExist;
- (float)fragmentation;
- (id)initWithPath:(id)arg1 cacheSize:(long long)arg2 cacheThread:(id)arg3;
- (bool)isOpen;
- (bool)isValid;
- (void)markPurgeable;
- (unsigned long long)maxSize;
- (void)open;
- (id)reserveBufferWithLength:(unsigned long long)arg1;
- (void)reset;
- (void)save;
- (void)setCacheThread:(id)arg1;
- (unsigned long long)size;
- (void)validateReservedBufferWithBlobInfo:(id)arg1;

@end
