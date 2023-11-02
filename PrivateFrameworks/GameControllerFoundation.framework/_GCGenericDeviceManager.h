
@interface _GCGenericDeviceManager : NSObject <_GCLogicalDeviceManager, _GCPhysicalDeviceManager> {
    NSMutableSet * _claimedServices;
    <_GCPhysicalDeviceRegistry> * _deviceRegistry;
    unsigned int  _ioHIDDeviceIterator;
    struct IONotificationPort { } * _ioNotificationPort;
    NSObject<OS_dispatch_queue> * _ioNotificationQueue;
    NSMutableDictionary * _pendingDevices;
    NSMutableDictionary * _physicalDevices;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property <_GCPhysicalDeviceRegistry> *deviceRegistry;
@property <_GCLogicalDeviceRegistry> *deviceRegistry;
@property (readonly) unsigned long long hash;
@property (readonly) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/GameControllerFoundation.framework/GameControllerFoundation

- (void).cxx_destruct;
- (void)_onioqueue_setupHIDMatching;
- (void)_onqueue_registerDefaultConfigurationForDevice:(id)arg1;
- (bool)acceptDriverConnection:(id)arg1 forHIDService:(id)arg2;
- (bool)acceptFilterConnection:(id)arg1 forHIDService:(id)arg2;
- (void)claimHIDService:(id)arg1;
- (void)dealloc;
- (id)deviceRegistry;
- (id)identifier;
- (id)init;
- (id)matchHIDService:(id)arg1;
- (void)relinquishHIDService:(id)arg1;
- (id)serviceFor:(id)arg1 client:(id)arg2;
- (void)setDeviceRegistry:(id)arg1;

// Image: /System/Library/Frameworks/GameController.framework/GameController

- (id)makeDeviceWithConfiguration:(id)arg1 dependencies:(id)arg2;

@end
