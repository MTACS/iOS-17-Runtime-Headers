
@interface DADiscoveryExtensionSession : NSObject {
    id /* block */  _eventHandler;
}

@property (nonatomic, copy) id /* block */ eventHandler;

- (void).cxx_destruct;
- (id /* block */)eventHandler;
- (void)invalidate;
- (void)reportEvent:(id)arg1;
- (void)setEventHandler:(id /* block */)arg1;

@end
