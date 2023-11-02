
@interface IKJSWeakMap : IKJSObject {
    JSManagedValue * _managedWeakMap;
}

@property (nonatomic, readonly) JSManagedValue *managedWeakMap;

- (void).cxx_destruct;
- (id)_jsWeakMap;
- (id)initWithAppContext:(id)arg1;
- (id)managedWeakMap;
- (void)setValue:(id)arg1 forWeakKey:(id)arg2;
- (id)valueForWeakKey:(id)arg1;
- (struct OpaqueJSValue { }*)valueRefForWeakKeyRef:(struct OpaqueJSValue { }*)arg1;

@end
