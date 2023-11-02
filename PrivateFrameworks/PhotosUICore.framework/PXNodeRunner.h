
@interface PXNodeRunner : NSObject {
    NSOperationQueue * _operationQueue;
}

@property long long maxConcurrentRunNodeCount;
@property long long qualityOfService;

- (void).cxx_destruct;
- (void)_processRunGraph:(id)arg1;
- (id)init;
- (long long)maxConcurrentRunNodeCount;
- (void)processGraphForRunNode:(id)arg1;
- (long long)qualityOfService;
- (void)setMaxConcurrentRunNodeCount:(long long)arg1;
- (void)setQualityOfService:(long long)arg1;

@end
