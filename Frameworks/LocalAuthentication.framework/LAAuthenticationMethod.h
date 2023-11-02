
@interface LAAuthenticationMethod : NSObject {
    LAAuthenticationMethodConfiguration * _configuration;
    NSHashTable * _observers;
    bool  _running;
}

@property (nonatomic, readonly) LAAuthenticationMethodConfiguration *configuration;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)configuration;
- (void)dealloc;
- (void)forEachObserverWithInvoke:(id /* block */)arg1;
- (void)forEachObserverWithProtocol:(id)arg1 selector:(SEL)arg2 invoke:(id /* block */)arg3;
- (id)initWithConfiguration:(id)arg1;
- (bool)start;
- (void)terminate;

@end
