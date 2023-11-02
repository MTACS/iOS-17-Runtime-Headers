
@interface RTIInputSystemSourceSession : RTIInputSystemSession <RTIInputSystemPayloadDelegate> {
    <RTIInputSystemPayloadDelegate> * _forwardingPayloadDelegate;
    <RTIInputSystemPayloadDelegate> * _payloadDelegate;
    unsigned long long  _payloadVersion;
}

@property (nonatomic, readonly, copy) RTIDataPayload *currentForwardingDataPayload;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <RTIInputSystemPayloadDelegate> *forwardingPayloadDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic) <RTIInputSystemPayloadDelegate> *payloadDelegate;
@property (nonatomic, readonly) unsigned long long payloadVersion;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addSessionDelegate:(id)arg1;
- (id)currentForwardingDataPayload;
- (void)flushOperations;
- (id)forwardingPayloadDelegate;
- (void)handleForwardingResponseActionPayload:(id)arg1;
- (void)handleTextActionPayload:(id)arg1;
- (id)init;
- (void)notifySessionDelegateDidBegin:(id)arg1;
- (id)payloadDelegate;
- (unsigned long long)payloadVersion;
- (id)sessionIndependentPayloadDelegate;
- (void)setForwardingPayloadDelegate:(id)arg1;
- (void)setPayloadDelegate:(id)arg1;
- (void)setSessionDelegate:(id)arg1;

@end
