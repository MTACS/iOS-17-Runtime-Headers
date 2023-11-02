
@interface _GCNintendoJoyConDeviceManager : NSObject <_GCLogicalDeviceManager, _GCPhysicalDeviceManager> {
    NSMutableSet * _claimedServices;
    <_GCPhysicalDeviceRegistry><_GCLogicalDeviceRegistry> * _deviceRegistry;
    NSMutableSet * _fusionGestureDevices;
    NSMutableDictionary * _pendingDevices;
    _GCNintendoJoyConDevice * _pendingJoyCon;
    NSMutableDictionary * _physicalDevices;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property <_GCPhysicalDeviceRegistry> *deviceRegistry;
@property (readonly) unsigned long long hash;
@property (readonly) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_onqueue_registerDefaultConfigurationForDevice:(id)arg1;
- (void)_onqueue_registerDefaultConfigurationForJoyConDevice:(id)arg1;
- (void)_onqueue_registerDefaultConfigurationsForDevice:(id)arg1;
- (void)_onqueue_registerFusionConfigurationWithLeftDevice:(id)arg1 rightDevice:(id)arg2;
- (void)_onqueue_relinquishHIDService:(id)arg1;
- (void)_onqueue_tryRegisteringFusionConfigurationWithDevice:(id)arg1;
- (bool)acceptDriverConnection:(id)arg1 forHIDService:(id)arg2;
- (bool)acceptFilterConnection:(id)arg1 forHIDService:(id)arg2;
- (void)activateLogicalDevice:(id)arg1;
- (void)claimHIDService:(id)arg1;
- (void)deactivateLogicalDevice:(id)arg1;
- (void)device:(id)arg1 fusionGestureActive:(bool)arg2;
- (id)deviceRegistry;
- (id)identifier;
- (id)init;
- (id)makeDeviceWithConfiguration:(id)arg1 dependencies:(id)arg2;
- (id)matchHIDService:(id)arg1;
- (void)relinquishHIDService:(id)arg1;
- (void)setDeviceRegistry:(id)arg1;

@end
