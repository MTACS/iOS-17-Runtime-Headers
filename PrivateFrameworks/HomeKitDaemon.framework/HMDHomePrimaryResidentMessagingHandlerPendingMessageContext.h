
@interface HMDHomePrimaryResidentMessagingHandlerPendingMessageContext : NSObject {
    id /* block */  _completionHandler;
    NSUUID * _lastPrimaryResidentDestinationUUID;
    HMFMessage * _message;
    bool  _messageInFlight;
    <HMFTimerManagerTimerContext> * _messageTimerContext;
    <HMFTimerManagerTimerContext> * _queueTimerContext;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSUUID *lastPrimaryResidentDestinationUUID;
@property (nonatomic, readonly) HMFMessage *message;
@property (getter=isMessageInFlight, nonatomic) bool messageInFlight;
@property (nonatomic, readonly) <HMFTimerManagerTimerContext> *messageTimerContext;
@property (nonatomic, retain) <HMFTimerManagerTimerContext> *queueTimerContext;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)initWithMessage:(id)arg1 messageTimerContext:(id)arg2;
- (bool)isMessageInFlight;
- (id)lastPrimaryResidentDestinationUUID;
- (id)message;
- (id)messageTimerContext;
- (id)queueTimerContext;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setLastPrimaryResidentDestinationUUID:(id)arg1;
- (void)setMessageInFlight:(bool)arg1;
- (void)setQueueTimerContext:(id)arg1;

@end
