
@interface LPFetcherGroupTask : NSObject {
    LPFetcher * _fetcher;
    bool  _hasStarted;
    LPFetcherResponse * _response;
}

@property (nonatomic, retain) LPFetcher *fetcher;
@property (nonatomic) bool hasStarted;
@property (nonatomic, retain) LPFetcherResponse *response;

- (void).cxx_destruct;
- (id)fetcher;
- (bool)hasStarted;
- (id)response;
- (void)setFetcher:(id)arg1;
- (void)setHasStarted:(bool)arg1;
- (void)setResponse:(id)arg1;

@end
