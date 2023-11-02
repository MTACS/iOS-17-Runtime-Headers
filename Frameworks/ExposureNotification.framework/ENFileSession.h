
@interface ENFileSession : NSObject {
    bool  _activateCalled;
    bool  _activateSucceeded;
    unsigned long long  _batchSize;
    unsigned int  _flags;
    unsigned long long  _invalidKeyCount;
    bool  _invalidated;
    NSDictionary * _metadata;
    ENXPCServiceClient * _serviceClient;
    NSData * _sha256Data;
    NSArray * _signatures;
}

@property (nonatomic) unsigned long long batchSize;
@property (nonatomic, readonly, copy) NSDate *endDate;
@property (nonatomic) unsigned int flags;
@property (nonatomic, readonly) unsigned long long invalidKeyCount;
@property (nonatomic, readonly, copy) NSDictionary *metadata;
@property (nonatomic, readonly) ENXPCServiceClient *serviceClient;
@property (nonatomic, readonly, copy) NSData *sha256Data;
@property (nonatomic, readonly, copy) NSArray *signatures;
@property (nonatomic, readonly, copy) NSDate *startDate;

- (void).cxx_destruct;
- (id)_activateCreateXPCRequestWithFD:(int)arg1 archive:(bool)arg2 signatureData:(id)arg3 error:(id*)arg4;
- (id)_activateCreateXPCRequestWithPath:(id)arg1 archive:(bool)arg2 signatureData:(id)arg3 error:(id*)arg4;
- (bool)_activateHandleReply:(id)arg1 error:(id*)arg2;
- (bool)_activateSyncWithRequest:(id)arg1 error:(id*)arg2;
- (id)_readTEKBatchHandleReply:(id)arg1 error:(id*)arg2;
- (bool)activateWithArchivePath:(id)arg1 error:(id*)arg2;
- (bool)activateWithFD:(int)arg1 signatureData:(id)arg2 error:(id*)arg3;
- (bool)activateWithFilePath:(id)arg1 error:(id*)arg2;
- (unsigned long long)batchSize;
- (void)dealloc;
- (id)endDate;
- (unsigned int)flags;
- (id)initWithServiceClient:(id)arg1;
- (unsigned long long)invalidKeyCount;
- (void)invalidate;
- (id)metadata;
- (id)readTEKBatchAndReturnError:(id*)arg1;
- (id)serviceClient;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setFlags:(unsigned int)arg1;
- (id)sha256Data;
- (id)signatures;
- (id)startDate;
- (id)verifySignatureWithPublicKey:(struct __SecKey { }*)arg1 error:(id*)arg2;

@end
