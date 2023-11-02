
@interface RMSTVRemoteCoreDeviceController : NSObject <TVRCDeviceQueryDelegate> {
    TVRCDeviceQuery * _deviceQuery;
    NSMapTable * _discoveryCompletionHandlers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedController;

- (void).cxx_destruct;
- (id)_deviceForIdentifier:(id)arg1;
- (void)_finishDiscoveryWithDevice:(id)arg1 forIdentifier:(id)arg2;
- (id)deviceForIdentifier:(id)arg1;
- (void)deviceQueryDidUpdateDevices:(id)arg1;
- (void)discoverDeviceWithIdentifier:(id)arg1 timeout:(double)arg2 completionHandler:(id /* block */)arg3;

@end
