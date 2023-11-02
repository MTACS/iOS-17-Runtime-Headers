
@interface LPFetcherErrorResponse : LPFetcherResponse {
    NSError * _error;
}

@property (nonatomic, readonly, retain) NSError *error;

- (void).cxx_destruct;
- (id)error;
- (id)initWithError:(id)arg1 fetcher:(id)arg2;

@end
