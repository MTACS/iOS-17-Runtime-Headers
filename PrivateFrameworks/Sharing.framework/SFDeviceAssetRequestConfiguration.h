
@interface SFDeviceAssetRequestConfiguration : NSObject {
    id /* block */  _downloadCompletionHandler;
    id /* block */  _queryResultHandler;
    double  _timeout;
}

@property (nonatomic, copy) id /* block */ downloadCompletionHandler;
@property (nonatomic, readonly, copy) id /* block */ queryResultHandler;
@property (nonatomic) double timeout;

- (void).cxx_destruct;
- (id)description;
- (id /* block */)downloadCompletionHandler;
- (id)initWithQueryResultHandler:(id /* block */)arg1;
- (id /* block */)queryResultHandler;
- (void)setDownloadCompletionHandler:(id /* block */)arg1;
- (void)setTimeout:(double)arg1;
- (double)timeout;

@end
