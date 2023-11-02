
@interface TRConnection : NSObject {
    id /* block */  _eventMessageHandler;
    id /* block */  _interruptionHandler;
    id /* block */  _invalidationHandler;
    id /* block */  _requestMessageHandler;
}

@property (nonatomic, copy) id /* block */ eventMessageHandler;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) id /* block */ requestMessageHandler;

- (void).cxx_destruct;
- (id /* block */)eventMessageHandler;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id /* block */)requestMessageHandler;
- (void)sendEvent:(id)arg1;
- (void)sendRequest:(id)arg1;
- (void)sendResponse:(id)arg1;
- (void)setEventMessageHandler:(id /* block */)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setRequestMessageHandler:(id /* block */)arg1;

@end
