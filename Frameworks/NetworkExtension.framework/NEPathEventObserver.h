
@interface NEPathEventObserver : NSObject {
    struct network_config_cellular_blocked_observer_s { } * _cellBlockedObserver;
    struct network_config_cellular_blocked_observer_s { } * _cellFailedObserver;
    id /* block */  _eventHandler;
    struct network_config_cellular_blocked_observer_s { } * _wifiBlockedObserver;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (id)initWithQueue:(id)arg1 eventHandler:(id /* block */)arg2;

@end
