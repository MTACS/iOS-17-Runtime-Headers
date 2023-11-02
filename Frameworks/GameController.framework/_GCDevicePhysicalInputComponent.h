
@interface _GCDevicePhysicalInputComponent : NSObject <GCDeviceComponent, _GCDevicePhysicalInputGroupDataSource, _GCGamepadEventSink> {
    _GCDevicePhysicalInputGroup * _defaultPhysicalInputGroup;
    <GCDevice> * _device;
    id  _gamepadEventObservation;
    <NSObject><NSCopying><NSSecureCoding> * _identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)capture;
- (void)handleGamepadEvent:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 defaultPhysicalInput:(id)arg2;
- (id)initWithIdentifier:(id)arg1 physicalInputs:(id)arg2;
- (void)physicalInputGroupPoll:(id)arg1 forLatest:(bool)arg2;
- (void)physicalInputGroupPreferredTransactionQueueDepthDidChange:(id)arg1;
- (void)physicalInputGroupQueueDidChange:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setGamepadEventSource:(id)arg1;

@end
