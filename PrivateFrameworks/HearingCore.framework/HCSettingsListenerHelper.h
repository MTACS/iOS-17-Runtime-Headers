
@interface HCSettingsListenerHelper : NSObject {
    HCSettings * _delegate;
    id  _listenerAddress;
    NSMutableArray * _selectorKeys;
}

- (void).cxx_destruct;
- (void)addSelectorKey:(SEL)arg1;
- (void)dealloc;
- (id)initWithListenerAddress:(id)arg1 andDelegate:(id)arg2;

@end
