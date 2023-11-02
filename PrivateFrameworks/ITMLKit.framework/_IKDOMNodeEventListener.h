
@interface _IKDOMNodeEventListener : NSObject {
    bool  _enabled;
    JSManagedValue * _managedValue;
}

@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, retain) JSManagedValue *managedValue;

- (void).cxx_destruct;
- (id)initWithListener:(id)arg1 forNode:(id)arg2;
- (bool)isEnabled;
- (id)managedValue;
- (void)setEnabled:(bool)arg1;
- (void)setManagedValue:(id)arg1;
- (id)value;

@end
