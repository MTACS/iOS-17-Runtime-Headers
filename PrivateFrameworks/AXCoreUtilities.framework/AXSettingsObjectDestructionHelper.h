
@interface AXSettingsObjectDestructionHelper : NSObject {
    void * _listenerAddress;
    NSMutableArray * _selectorKeys;
    AXBaseSettings * _settings;
}

- (void).cxx_destruct;
- (void)addSelectorKey:(SEL)arg1;
- (void)dealloc;
- (id)initWithListenerAddress:(void*)arg1 forSettings:(id)arg2;

@end
