
@interface TRHandshakeOperationHandler : NSObject <TROperationHandler> {
    id /* block */  _handshakeHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ handshakeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleHandshakeRequest:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (id /* block */)handshakeHandler;
- (id)initWithHandshakeHandler:(id /* block */)arg1;
- (void)registerMessageHandlersForSession:(id)arg1;
- (void)setHandshakeHandler:(id /* block */)arg1;

@end
