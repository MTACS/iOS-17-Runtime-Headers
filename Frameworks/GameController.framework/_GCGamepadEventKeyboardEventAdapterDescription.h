
@interface _GCGamepadEventKeyboardEventAdapterDescription : NSObject <_GCGamepadEventSourceDescription> {
    _GCGamepadEventKeyboardEventAdapterConfig * _config;
    _GCGamepadEventKeyboardEventAdapter * _materializedObject;
    <_GCKeyboardEventSourceDescription> * _sourceDescription;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 source:(id)arg2;
- (id)materializeWithContext:(id)arg1;

@end
