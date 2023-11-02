
@interface _GCMotionEventHIDAdapterDescription : NSObject <_GCMotionEventSourceDescription> {
    _GCMotionEventHIDAdapter * _materializedObject;
    _GCCControllerHIDServiceInfoDescription * _serviceDescription;
    <_GCHIDEventSourceDescription> * _sourceDescription;
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
- (id)initWithSource:(id)arg1 service:(id)arg2;
- (id)materializeWithContext:(id)arg1;

@end
