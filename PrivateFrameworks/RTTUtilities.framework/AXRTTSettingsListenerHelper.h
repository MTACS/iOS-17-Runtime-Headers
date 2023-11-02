
@interface AXRTTSettingsListenerHelper : NSObject {
    void * _listenerAddress;
    NSMutableArray * _selectorKeys;
}

- (void).cxx_destruct;
- (void)addSelectorKey:(SEL)arg1;
- (void)dealloc;
- (id)initWithListenerAddress:(void*)arg1;

@end
