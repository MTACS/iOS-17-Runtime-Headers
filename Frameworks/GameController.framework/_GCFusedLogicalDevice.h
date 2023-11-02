
@interface _GCFusedLogicalDevice : _GCDefaultLogicalDevice {
    <_GCPhysicalDevice> * _secondaryDevice;
}

@property (nonatomic, readonly) <_GCPhysicalDevice> *secondaryDevice;

- (void).cxx_destruct;
- (id)_makeControllerGamepadEventSource;
- (id)init;
- (id)initWithPrimaryPhysicalDevice:(id)arg1 secondaryPhysicalDevice:(id)arg2 configuration:(id)arg3 manager:(id)arg4;
- (id)secondaryDevice;
- (id)underlyingDevices;

@end
