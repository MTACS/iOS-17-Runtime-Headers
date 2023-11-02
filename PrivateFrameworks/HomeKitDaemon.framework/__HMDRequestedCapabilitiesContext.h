
@interface __HMDRequestedCapabilitiesContext : NSObject {
    id /* block */  _completionHandler;
    NSString * _destinationAddress;
    NSMutableArray * _receivedResponses;
    NSDictionary * _requestedCapabilities;
    NSObject<OS_dispatch_queue> * _responseQueue;
    <HMFTimerManagerTimerContext> * _timerContext;
    NSUUID * _transactionID;
}

@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (nonatomic, readonly) NSString *destinationAddress;
@property (nonatomic, readonly) NSMutableArray *receivedResponses;
@property (nonatomic, readonly, copy) NSDictionary *requestedCapabilities;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *responseQueue;
@property (nonatomic, retain) <HMFTimerManagerTimerContext> *timerContext;
@property (nonatomic, readonly) NSUUID *transactionID;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)destinationAddress;
- (id)initWithTransactionID:(id)arg1 requestedCapabilities:(id)arg2 destinationAddress:(id)arg3 responseQueue:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)receivedResponses;
- (id)requestedCapabilities;
- (id)responseQueue;
- (void)setTimerContext:(id)arg1;
- (id)timerContext;
- (id)transactionID;

@end
