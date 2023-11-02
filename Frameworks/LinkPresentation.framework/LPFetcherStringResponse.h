
@interface LPFetcherStringResponse : LPFetcherResponse {
    NSString * _string;
}

@property (nonatomic, readonly, copy) NSString *string;

- (void).cxx_destruct;
- (id)initWithString:(id)arg1 fetcher:(id)arg2;
- (id)string;

@end
