
@interface NPKIDVRemoteDeviceConnectionCoordinatorOutstandingRequestItem : NSObject {
    id  _completion;
    id /* block */  _errorHandler;
    NSString * _messageIdentifier;
    id /* block */  _timeoutHandler;
    NSObject<OS_dispatch_queue> * _timeoutQueue;
    NSObject<OS_dispatch_source> * _timeoutTimer;
}

@property (nonatomic, copy) id completion;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic, copy) NSString *messageIdentifier;
@property (nonatomic, copy) id /* block */ timeoutHandler;

- (void).cxx_destruct;
- (id)completion;
- (void)dealloc;
- (id /* block */)errorHandler;
- (id)initWithtimeoutQueue:(id)arg1;
- (void)invalidateCleanupTimer;
- (id)messageIdentifier;
- (void)setCompletion:(id)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setMessageIdentifier:(id)arg1;
- (void)setOrResetCleanupTimer;
- (void)setTimeoutHandler:(id /* block */)arg1;
- (id /* block */)timeoutHandler;

@end
