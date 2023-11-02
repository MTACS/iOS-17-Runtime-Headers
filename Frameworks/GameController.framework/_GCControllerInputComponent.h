
@interface _GCControllerInputComponent : _GCDevicePhysicalInputComponent <GCControllerComponent> {
    GCSProfile * _appliedSettingsProfile;
    NSArray * _eventRemappingActions;
    NSArray * _templateElementParameters;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)handleGamepadEvent:(id)arg1;
- (id)initWithIdentifier:(id)arg1 templateFacadeParameters:(id)arg2 templateElementParameters:(id)arg3;
- (void)setController:(id)arg1;
- (void)setSettingsProfile:(id)arg1;

@end
