
@interface _DKSyncToggle : NSObject {
    SEL  _disableSelector;
    SEL  _enableSelector;
    bool  _enabled;
    NSString * _name;
    NSObject * _object;
}

- (void).cxx_destruct;
- (void)_setEnabled:(bool)arg1;
- (void)dealloc;
- (id)initWithObject:(id)arg1 name:(id)arg2 enableSelector:(SEL)arg3 disableSelector:(SEL)arg4;

@end
