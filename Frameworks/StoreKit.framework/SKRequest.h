
@interface SKRequest : NSObject {
    id  _requestInternal;
}

@property (nonatomic) <SKRequestDelegate> *delegate;
@property (nonatomic, copy) SKPaymentQueueClient *paymentQueueClient;

- (void).cxx_destruct;
- (void)_beginBackgroundTask;
- (void)_endBackgroundTask;
- (void)_shutdownRequest;
- (void)_start;
- (void)_startWithMessage:(id)arg1 replyBlock:(id /* block */)arg2;
- (void)cancel;
- (id)delegate;
- (id)errorFromCFObject:(id)arg1;
- (id)init;
- (id)paymentQueueClient;
- (void)setDelegate:(id)arg1;
- (void)setPaymentQueueClient:(id)arg1;
- (void)start;

@end
