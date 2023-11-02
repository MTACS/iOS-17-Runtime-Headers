
@interface ML3ImportOperation : NSOperation {
    id /* block */  _clientCompletionHandler;
    NSError * _error;
    ML3ServiceDatabaseImport * _import;
    float  _progress;
    id /* block */  _progressBlock;
    NSData * _returnData;
    bool  _success;
    bool  _suspended;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) ML3ServiceDatabaseImport *import;
@property (nonatomic, readonly) unsigned long long importSource;
@property (nonatomic, readonly) float progress;
@property (nonatomic, copy) id /* block */ progressBlock;
@property (nonatomic, readonly) NSData *returnData;
@property (nonatomic, readonly) bool success;
@property (getter=isSuspended, nonatomic) bool suspended;

+ (id)importOperationWithSourceType:(unsigned long long)arg1 databaseImport:(id)arg2;

- (void).cxx_destruct;
- (id /* block */)_clientCompletionHandler;
- (void)_setClientCompletionHandler:(id /* block */)arg1;
- (void)_writerTransactionWithBlock:(id /* block */)arg1;
- (id)error;
- (id)import;
- (unsigned long long)importSource;
- (id)init;
- (id)initWithDatabaseImport:(id)arg1;
- (bool)isSuspended;
- (id)longDescription;
- (void)main;
- (float)progress;
- (id /* block */)progressBlock;
- (id)returnData;
- (void)setError:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setProgressBlock:(id /* block */)arg1;
- (void)setReturnData:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (void)setSuspended:(bool)arg1;
- (bool)success;

@end
