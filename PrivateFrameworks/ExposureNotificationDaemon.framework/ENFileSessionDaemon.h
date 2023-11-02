
@interface ENFileSessionDaemon : NSObject {
    ENArchive * _archive;
    unsigned long long  _batchSize;
    ENFile * _file;
    unsigned int  _flags;
    unsigned long long  _invalidKeyCount;
    NSObject<OS_xpc_object> * _nextTEKBatch;
    NSArray * _signatures;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic) unsigned long long batchSize;
@property (nonatomic, readonly) ENFile *file;
@property (nonatomic) unsigned int flags;
@property (nonatomic, readonly) unsigned long long invalidKeyCount;

- (void).cxx_destruct;
- (void)_createTransaction;
- (id)_readTEKBatchAndReturnError:(id*)arg1;
- (bool)_resetAndAdvanceArchive:(id)arg1 toPathWithExtension:(id)arg2 error:(id*)arg3;
- (bool)activateWithArchiveFD:(int)arg1 error:(id*)arg2;
- (bool)activateWithFileFD:(int)arg1 signatureData:(id)arg2 error:(id*)arg3;
- (unsigned long long)batchSize;
- (void)dealloc;
- (id)file;
- (unsigned int)flags;
- (id)init;
- (unsigned long long)invalidKeyCount;
- (void)invalidate;
- (void)prepareNextTEKBatchIfNecessary;
- (id)readSignaturesAndReturnError:(id*)arg1;
- (id)readTEKBatchAndReturnError:(id*)arg1;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setFlags:(unsigned int)arg1;

@end
