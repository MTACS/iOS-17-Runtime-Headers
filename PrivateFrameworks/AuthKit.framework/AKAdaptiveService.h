
@interface AKAdaptiveService : NSObject <NSXPCListenerDelegate> {
    NSXPCInterface * _exportedInterface;
    id  _exportedObject;
    id /* block */  _interruptionHandler;
    id /* block */  _invalidationHandler;
    NSXPCListener * _listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithInterface:(id)arg1 object:(id)arg2;
- (void)dealloc;
- (id)initWithInterface:(id)arg1 strongObject:(id)arg2;
- (id)initWithInterface:(id)arg1 weakObject:(id)arg2;
- (id /* block */)interruptionHandler;
- (id /* block */)invalidationHandler;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)listenerEndpoint;
- (void)resume;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;

@end
