
@interface HMCharacteristicBatchRequest : NSObject {
    HMBatchRequest * _batchRequest;
    id /* block */  _completionHandler;
    id /* block */  _progressHandler;
}

@property (nonatomic, retain) HMBatchRequest *batchRequest;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) id /* block */ progressHandler;

+ (id)characteristicBatchRequestWithReadRequests:(id)arg1;
+ (id)characteristicBatchRequestWithWriteRequests:(id)arg1;

- (void).cxx_destruct;
- (id)batchRequest;
- (id /* block */)completionHandler;
- (id)initWithBatchRequest:(id)arg1;
- (id /* block */)progressHandler;
- (id)requests;
- (void)setBatchRequest:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setProgressHandler:(id /* block */)arg1;

@end
