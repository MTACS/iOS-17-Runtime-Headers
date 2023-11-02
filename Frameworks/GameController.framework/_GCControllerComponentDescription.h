
@interface _GCControllerComponentDescription : NSObject <_GCControllerComponentDescription, _GCUpdatableIPCObjectDescription> {
    NSArray * _bindingDescriptions;
    <GCControllerComponent><NSSecureCoding> * _component;
    <GCControllerComponent> * _materializedComponent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_applyBinding:(id)arg1 toComponent:(id)arg2;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithComponent:(id)arg1;
- (id)initWithComponent:(id)arg1 bindings:(id)arg2;
- (id)materializeWithContext:(id)arg1;
- (id)redactedDescription;
- (bool)update:(id)arg1 withContext:(id)arg2;

@end
