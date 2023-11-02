
@interface WLKTopShelfNetworkOperation : WLKUTSNetworkRequestOperation {
    NSDictionary * _payload;
}

@property (nonatomic, readonly) NSDictionary *payload;

- (void).cxx_destruct;
- (id)initWithEndPoint:(id)arg1 queryParameters:(id)arg2 ignoreCache:(bool)arg3;
- (id)payload;
- (void)processResponse;

@end
