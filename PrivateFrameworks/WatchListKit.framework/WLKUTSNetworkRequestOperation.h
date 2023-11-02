
@interface WLKUTSNetworkRequestOperation : WLKNetworkRequestOperation {
    bool  _didHandleInvalidConfig;
    unsigned long long  _environmentHash;
    WLKURLRequestProperties * _requestProperties;
    NSDictionary * _responseDictionary;
}

@property bool didHandleInvalidConfig;
@property (nonatomic) unsigned long long environmentHash;
@property (nonatomic, retain) WLKURLRequestProperties *requestProperties;

- (void).cxx_destruct;
- (void)configureSession;
- (bool)didHandleInvalidConfig;
- (unsigned long long)environmentHash;
- (void)handleResult:(id)arg1 error:(id)arg2;
- (id)init;
- (id)initWithRequestProperties:(id)arg1;
- (void)prepareURLRequest:(id /* block */)arg1;
- (void)processResponse;
- (id)requestProperties;
- (id)responseDictionary;
- (void)setDidHandleInvalidConfig:(bool)arg1;
- (void)setEnvironmentHash:(unsigned long long)arg1;
- (void)setRequestProperties:(id)arg1;
- (id)shortDescription;

@end
