
@interface VUIMediaEntitiesFetchControllerOperation : VUIAsynchronousOperation {
    NSArray * _currentFetchResponses;
    NSOperation * _currentSubOperation;
    NSError * _error;
    long long  _fetchReason;
    VUIMediaLibrary * _mediaLibrary;
    NSArray * _requests;
    VUIMediaEntitiesFetchControllerResult * _result;
}

@property (nonatomic, copy) NSArray *currentFetchResponses;
@property (nonatomic, retain) NSOperation *currentSubOperation;
@property (nonatomic, copy) NSError *error;
@property (nonatomic) long long fetchReason;
@property (nonatomic, retain) VUIMediaLibrary *mediaLibrary;
@property (nonatomic, copy) NSArray *requests;
@property (nonatomic, retain) VUIMediaEntitiesFetchControllerResult *result;

- (void).cxx_destruct;
- (void)_handleCompletdFetchWithResponses:(id)arg1 error:(id)arg2;
- (id)_resultWithResponses:(id)arg1;
- (void)_startChangesOperationWithMediaEntityFetchResponses:(id)arg1 currentFetchResponses:(id)arg2;
- (void)_startMediaLibraryFetchOperation;
- (void)cancel;
- (id)currentFetchResponses;
- (id)currentSubOperation;
- (id)error;
- (void)executionDidBegin;
- (long long)fetchReason;
- (id)initWithMediaLibrary:(id)arg1 fetchReason:(long long)arg2 requests:(id)arg3;
- (id)mediaLibrary;
- (id)requests;
- (id)result;
- (void)setCurrentFetchResponses:(id)arg1;
- (void)setCurrentSubOperation:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFetchReason:(long long)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setRequests:(id)arg1;
- (void)setResult:(id)arg1;

@end
