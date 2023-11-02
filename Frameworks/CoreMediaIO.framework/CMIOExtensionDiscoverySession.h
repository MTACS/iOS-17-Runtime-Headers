
@interface CMIOExtensionDiscoverySession : NSObject <CMIOExtensionSessionProviderDelegate> {
    NSObject<OS_xpc_event_publisher> * _extensionEventPublisher;
    NSMutableDictionary * _providersByBundleIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *devices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void)_invalidateProvider:(id)arg1;
- (void)completeRegistrationForBundleID:(id)arg1 token:(unsigned long long)arg2;
- (id)copyProviderBundleID;
- (void)dealloc;
- (id)devices;
- (id)initWithQueue:(id)arg1;
- (void)postDeviceChangeNotification;
- (void)provider:(id)arg1 availableDevicesChanged:(id)arg2;
- (void)provider:(id)arg1 didFailWithError:(id)arg2;
- (void)provider:(id)arg1 initializeDevices:(id)arg2 properties:(id)arg3;
- (void)provider:(id)arg1 propertiesChanged:(id)arg2;
- (void)providerHasBeenInvalidated:(id)arg1;
- (void)setUpRegistration;

@end
