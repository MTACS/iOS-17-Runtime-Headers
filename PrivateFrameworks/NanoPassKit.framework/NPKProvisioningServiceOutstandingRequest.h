
@interface NPKProvisioningServiceOutstandingRequest : NSObject {
    id  _completionHandler;
    id /* block */  _errorHandler;
    NSString * _messageIdentifier;
    id /* block */  _timeoutHandler;
    NSObject<OS_dispatch_queue> * _timeoutQueue;
    NSObject<OS_dispatch_source> * _timeoutTimer;
}

@property (nonatomic, copy) id completionHandler;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic, copy) NSString *messageIdentifier;
@property (nonatomic, copy) id /* block */ timeoutHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *timeoutQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timeoutTimer;

- (void).cxx_destruct;
- (id)completionHandler;
- (id /* block */)errorHandler;
- (void)invalidateCleanupTimer;
- (id)messageIdentifier;
- (void)setCompletionHandler:(id)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setMessageIdentifier:(id)arg1;
- (void)setOrResetCleanupTimer;
- (void)setTimeoutHandler:(id /* block */)arg1;
- (void)setTimeoutQueue:(id)arg1;
- (void)setTimeoutTimer:(id)arg1;
- (id /* block */)timeoutHandler;
- (id)timeoutQueue;
- (id)timeoutTimer;

@end
