
@interface TBRemoteFetchAndCacheOperation : NSOperation {
    TBRemoteFetchAndCacheDataSource * _dataSource;
    <TBFetchRequest> * _fetchRequest;
    bool  _finished;
    <TBFetchResponse> * _response;
    NSDate * _start;
}

@property (nonatomic, retain) TBRemoteFetchAndCacheDataSource *dataSource;
@property (nonatomic, retain) <TBFetchRequest> *fetchRequest;
@property (nonatomic, retain) <TBFetchResponse> *response;

- (void).cxx_destruct;
- (id)dataSource;
- (id)fetchRequest;
- (void)finish;
- (id)initWithFetchRequest:(id)arg1 dataSource:(id)arg2;
- (bool)isFinished;
- (bool)isReady;
- (id)name;
- (id)response;
- (void)setDataSource:(id)arg1;
- (void)setFetchRequest:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)start;

@end
