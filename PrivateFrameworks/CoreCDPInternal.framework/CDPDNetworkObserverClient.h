
@interface CDPDNetworkObserverClient : NSObject {
    id /* block */  _eventHandler;
}

@property (copy) id /* block */ eventHandler;

- (void).cxx_destruct;
- (id /* block */)eventHandler;
- (void)setEventHandler:(id /* block */)arg1;

@end
