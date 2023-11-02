
@interface HUAccessoryListenerHelper : NSObject {
    HUAccessoryManager * _delegate;
    NSMutableArray * _keys;
    id  _listenerAddress;
}

- (void).cxx_destruct;
- (void)addKey:(id)arg1;
- (void)dealloc;
- (id)initWithListenerAddress:(id)arg1 andDelegate:(id)arg2;

@end
