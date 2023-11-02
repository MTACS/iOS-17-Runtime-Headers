
@interface CKRequestAssetOperation : NSOperation {
    id /* block */  _assetRequestCompletionBlock;
    CKUploadRequestMetadata * _metadata;
    id /* block */  _requestCallback;
    long long  _state;
}

@property (nonatomic, copy) id /* block */ assetRequestCompletionBlock;
@property (nonatomic, retain) CKUploadRequestMetadata *metadata;
@property (nonatomic, copy) id /* block */ requestCallback;
@property long long state;

- (void).cxx_destruct;
- (id /* block */)assetRequestCompletionBlock;
- (id)initWithAssetMetadata:(id)arg1 requestCallback:(id /* block */)arg2;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (id)metadata;
- (id /* block */)requestCallback;
- (void)setAssetRequestCompletionBlock:(id /* block */)arg1;
- (void)setMetadata:(id)arg1;
- (void)setRequestCallback:(id /* block */)arg1;
- (void)setState:(long long)arg1;
- (void)start;
- (long long)state;

@end
