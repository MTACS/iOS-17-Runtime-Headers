
@interface LPiTunesCuratorProfileURLFetcher : LPFetcher {
    bool  _cancelled;
    id /* block */  _completionHandler;
    LPFetcherConfiguration * _configuration;
    NSString * _curatorID;
    LPiTunesMediaLookupTask * _lookupTask;
}

@property (nonatomic, readonly, retain) NSString *curatorID;

- (void).cxx_destruct;
- (void)_completedWithResponse:(id)arg1;
- (void)_failedWithError:(id)arg1;
- (void)cancel;
- (id)curatorID;
- (void)fetchWithConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithCuratorID:(id)arg1;

@end
