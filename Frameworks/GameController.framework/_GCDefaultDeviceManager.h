
@interface _GCDefaultDeviceManager : NSObject <_GCLogicalDeviceManager, _GCPhysicalDeviceManager> {
    NSMutableSet * _claimedServices;
    <_GCDefaultDeviceManagerDelegate> * _delegate;
    <_GCPhysicalDeviceRegistry><_GCLogicalDeviceRegistry> * _deviceRegistry;
    NSMutableDictionary * _hiddenPhysicalDevices;
    <NSObject><NSCopying><NSSecureCoding> * _identifier;
    <_GCDeviceMatchingFilter> * _matchingFilter;
    NSMutableDictionary * _physicalDevices;
    NSNumber * _probeScore;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_GCDefaultDeviceManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property <_GCPhysicalDeviceRegistry><_GCLogicalDeviceRegistry> *deviceRegistry;
@property (readonly) unsigned long long hash;
@property (readonly) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_onqueue_checkAndHideDuplicateDevice:(id)arg1;
- (void)_onqueue_registerDefaultConfigurationForDevice:(id)arg1 replaceExisting:(bool)arg2;
- (void)_onqueue_registerPhysicalDevice:(id)arg1 serviceInfo:(id)arg2 checkForDuplicateDevice:(bool)arg3;
- (void)_onqueue_relinquishHIDDevice:(id)arg1;
- (bool)acceptDriverConnection:(id)arg1 forHIDService:(id)arg2;
- (bool)acceptFilterConnection:(id)arg1 forHIDService:(id)arg2;
- (void)claimHIDService:(id)arg1;
- (id)configurationIdentifierForDevice:(id)arg1;
- (id)delegate;
- (id)deviceRegistry;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 matchingFilter:(id)arg2 probeScore:(id)arg3;
- (id)makeDeviceWithConfiguration:(id)arg1 dependencies:(id)arg2;
- (id)matchHIDService:(id)arg1;
- (void)refreshPhysicalDeviceConfiguration:(id)arg1;
- (void)relinquishHIDService:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceRegistry:(id)arg1;

@end
