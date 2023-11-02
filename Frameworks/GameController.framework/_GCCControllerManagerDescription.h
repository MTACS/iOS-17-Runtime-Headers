
@interface _GCCControllerManagerDescription : _GCImplicitIPCObjectDescription <_GCHIDEventSourceDescription>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)init;
- (id)initWithControllerManager:(id)arg1;
- (id)materializeWithContext:(id)arg1;

@end
