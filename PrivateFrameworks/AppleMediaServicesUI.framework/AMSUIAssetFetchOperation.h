
@interface AMSUIAssetFetchOperation : NSOperation {
    bool  _lowLatency;
    AMSPromise * _operationPromise;
}

@property (getter=isLowLatency, nonatomic) bool lowLatency;
@property (nonatomic, retain) AMSPromise *operationPromise;

- (void).cxx_destruct;
- (void)_finishWithImage:(id)arg1 error:(id)arg2;
- (void)cancel;
- (bool)isLowLatency;
- (void)main;
- (id)operationPromise;
- (void)setLowLatency:(bool)arg1;
- (void)setOperationPromise:(id)arg1;
- (void)setQueuePriority:(long long)arg1;

@end
