
@interface _PLClientTransaction : PLClientServerTransaction {
    long long  _addChangeScopesBatch;
    NSSet * _batchScopes;
    NSSet * _changeScopes;
    NSString * _changeScopesDescriptionSnapshot;
    NSObject<OS_dispatch_semaphore> * _fdResourceSemaphore;
    int  _fileDescriptor;
    NSString * _path;
    id  _processAssertion;
}

@property (copy) NSString *changeScopesDescriptionSnapshot;
@property (nonatomic) NSObject<OS_dispatch_semaphore> *fdResourceSemaphore;
@property (nonatomic) int fileDescriptor;
@property (nonatomic, retain) NSString *path;

+ (id)_fdIsolationQueue;
+ (id)_fdResourceSemaphore;

- (void).cxx_destruct;
- (void)_updateChangeScopesDescriptionSnapshot;
- (void)abortTransaction;
- (void)addChangeScopes:(id)arg1;
- (id)changeScopes;
- (id)changeScopesDescriptionSnapshot;
- (void)completeTransaction;
- (void)completeTransactionScope:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)fdResourceSemaphore;
- (int)fileDescriptor;
- (id)generateChangeScopesDescription;
- (id)initWithPathManager:(id)arg1;
- (id)initWithPathManager:(id)arg1 identifier:(const char *)arg2;
- (bool)isClientTransaction;
- (id)path;
- (void)persistTransactionScopes:(id)arg1;
- (void)popChangeScopesBatch;
- (void)pushChangeScopesBatch;
- (void)setChangeScopesDescriptionSnapshot:(id)arg1;
- (void)setFdResourceSemaphore:(id)arg1;
- (void)setFileDescriptor:(int)arg1;
- (void)setPath:(id)arg1;

@end
