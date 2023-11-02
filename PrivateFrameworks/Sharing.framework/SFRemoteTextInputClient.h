
@interface SFRemoteTextInputClient : NSObject <RTIInputSystemClientDelegate, RTIInputSystemDelegate, RTIInputSystemPayloadDelegate, RTIInputSystemSessionDelegate> {
    bool  _activateCalled;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _eventHandler;
    bool  _invalidateCalled;
    bool  _paused;
    RTIInputSystemService * _rtiService;
    RTIInputSystemSourceSession * _rtiSourceSession;
    id /* block */  _textInputDidBegin;
    id /* block */  _textInputDidEnd;
}

@property (nonatomic, readonly, copy) NSDictionary *currentPayload;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ eventHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) RTIInputSystemSourceSession *sourceSession;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ textInputDidBegin;
@property (nonatomic, copy) id /* block */ textInputDidEnd;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_fireEventHandlerWithPayload:(id)arg1;
- (void)_handleSessionEvent:(long long)arg1 forSession:(id)arg2;
- (void)activate;
- (id)currentPayload;
- (void)dealloc;
- (id)dispatchQueue;
- (id /* block */)eventHandler;
- (void)fireEventHandlerWithPayload:(id)arg1;
- (void)flushOperations;
- (void)handleTextActionPayload:(id)arg1;
- (void)handleTextInputData:(id)arg1;
- (void)handleUsername:(id)arg1 password:(id)arg2;
- (id)init;
- (void)inputSystemService:(id)arg1 didCreateInputSession:(id)arg2;
- (void)inputSystemService:(id)arg1 inputSessionDidBegin:(id)arg2;
- (void)inputSystemService:(id)arg1 inputSessionDidDie:(id)arg2;
- (void)inputSystemService:(id)arg1 inputSessionDidEnd:(id)arg2;
- (void)inputSystemService:(id)arg1 inputSessionDidPause:(id)arg2 withReason:(id)arg3;
- (void)inputSystemService:(id)arg1 inputSessionDidUnpause:(id)arg2 withReason:(id)arg3;
- (void)inputSystemService:(id)arg1 inputSessionDocumentDidChange:(id)arg2;
- (void)invalidate;
- (void)performTextOperations:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setEventHandler:(id /* block */)arg1;
- (void)setTextInputDidBegin:(id /* block */)arg1;
- (void)setTextInputDidEnd:(id /* block */)arg1;
- (id)sourceSession;
- (id /* block */)textInputDidBegin;
- (id /* block */)textInputDidEnd;

@end
