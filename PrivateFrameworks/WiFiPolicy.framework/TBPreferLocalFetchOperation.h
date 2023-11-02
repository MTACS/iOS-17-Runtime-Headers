
@interface TBPreferLocalFetchOperation : NSOperation {
    TBPreferLocalFetchDataSource * _dataSource;
    NSOperationQueue * _fetchQueue;
    <TBFetchRequest> * _fetchRequest;
    <TBFetchRequest> * _fetchRequestCopy;
    bool  _finished;
    NSArray * _remoteKeysToFetch;
    <TBFetchResponse> * _response;
    NSArray * _satisfiedLocalKeys;
    NSDate * _start;
}

@property (nonatomic, retain) TBPreferLocalFetchDataSource *dataSource;
@property (nonatomic, retain) NSOperationQueue *fetchQueue;
@property (nonatomic, retain) <TBFetchRequest> *fetchRequest;
@property (nonatomic, retain) <TBFetchRequest> *fetchRequestCopy;
@property (nonatomic, retain) NSArray *remoteKeysToFetch;
@property (nonatomic, retain) <TBFetchResponse> *response;
@property (nonatomic, retain) NSArray *satisfiedLocalKeys;

- (void).cxx_destruct;
- (void)_captureCacheEventWithStatus:(unsigned long long)arg1 userInfo:(id)arg2 error:(id)arg3 type:(unsigned long long)arg4;
- (bool)_doResults:(id)arg1 satisfyFetchRequest:(id)arg2 keysToFetchRemotely:(id*)arg3 satisfiedKeys:(id*)arg4;
- (void)_fetchLocal;
- (void)_fetchRemote;
- (void)_mergeLocalAndRemoteResults:(id)arg1;
- (id)_tileItemsFromTileKeys:(id)arg1;
- (id)dataSource;
- (id)fetchQueue;
- (id)fetchRequest;
- (id)fetchRequestCopy;
- (void)finish;
- (void)finishAndCallCompletionWithResponse:(id)arg1;
- (id)initWithFetchRequest:(id)arg1 dataSource:(id)arg2 fetchQueue:(id)arg3;
- (bool)isFinished;
- (bool)isReady;
- (id)name;
- (id)remoteKeysToFetch;
- (id)response;
- (id)satisfiedLocalKeys;
- (void)setDataSource:(id)arg1;
- (void)setFetchQueue:(id)arg1;
- (void)setFetchRequest:(id)arg1;
- (void)setFetchRequestCopy:(id)arg1;
- (void)setRemoteKeysToFetch:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setSatisfiedLocalKeys:(id)arg1;
- (void)start;

@end
