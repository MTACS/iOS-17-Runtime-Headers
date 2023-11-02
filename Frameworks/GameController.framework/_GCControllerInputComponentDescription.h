
@interface _GCControllerInputComponentDescription : NSObject <_GCControllerComponentDescription, _GCUpdatableIPCObjectDescription> {
    NSArray * _bindingDescriptions;
    _GCControllerInputDescription * _controllerInputDescriptions;
    <NSObject><NSCopying><NSSecureCoding> * _identifier;
    _GCControllerInputComponent * _materializedInputComponent;
}

@property (readonly, copy) _GCControllerInputDescription *controllerInputDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_applyBinding:(id)arg1 toComponent:(id)arg2;
- (id)controllerInputDescriptions;
- (id)createWithContext:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 controllerInputs:(id)arg2 bindings:(id)arg3;
- (id)materializeWithContext:(id)arg1;
- (bool)update:(id)arg1 withContext:(id)arg2;

@end
