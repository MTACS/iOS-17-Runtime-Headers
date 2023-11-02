
@interface HUNearbyListenerHelper : NSObject {
    HUNearbyController * _delegate;
    NSMutableDictionary * _keys;
    id  _listenerAddress;
}

- (void).cxx_destruct;
- (void)addKey:(id)arg1 forDomain:(id)arg2;
- (void)dealloc;
- (id)initWithListenerAddress:(id)arg1 andDelegate:(id)arg2;

@end
