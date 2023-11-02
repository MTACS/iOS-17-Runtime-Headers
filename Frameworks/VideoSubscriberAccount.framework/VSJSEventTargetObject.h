
@interface VSJSEventTargetObject : VSJSObject <VSJSEventTargetObject> {
    NSMutableDictionary * _listeners;
}

@property (nonatomic, retain) NSMutableDictionary *listeners;

- (void).cxx_destruct;
- (unsigned long long)_indexForListener:(id)arg1 withEventType:(id)arg2;
- (void)addEventListener:(id)arg1 :(id)arg2 :(id)arg3;
- (void)dispatchEvent:(id)arg1 withInfo:(id)arg2;
- (id)initWithContext:(id)arg1;
- (id)listeners;
- (void)removeEventListener:(id)arg1 :(id)arg2;
- (void)setListeners:(id)arg1;

@end
