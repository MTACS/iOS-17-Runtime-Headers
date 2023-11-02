
@interface RadioGetGenreTreeNodesRequest : RadioRequest {
    SSMetricsConfiguration * _metricsConfiguration;
    SSMetricsPageEvent * _metricsPageEvent;
    unsigned long long  _parentNodeID;
    SSURLConnectionRequest * _request;
}

@property (nonatomic, readonly, retain) SSMetricsConfiguration *metricsConfiguration;
@property (nonatomic, readonly, copy) SSMetricsPageEvent *metricsPageEvent;

+ (id)cacheKeyForGenreWithNodeID:(unsigned long long)arg1;
+ (id)fallbackRequestPath;
+ (id)requestBagKey;
+ (id)responseContentKey;

- (void).cxx_destruct;
- (id)_genreTreeByApplyingResponse:(id)arg1;
- (id)init;
- (id)initWithParentNodeID:(unsigned long long)arg1;
- (id)metricsConfiguration;
- (id)metricsPageEvent;
- (void)startWithCachedCompletionHandler:(id /* block */)arg1 networkCompletionHandler:(id /* block */)arg2;
- (void)startWithCompletionHandler:(id /* block */)arg1;

@end
