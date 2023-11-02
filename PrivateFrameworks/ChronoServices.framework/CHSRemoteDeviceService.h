
@interface CHSRemoteDeviceService : NSObject <BSInvalidatable, CHSChronoServiceClient> {
    CHSChronoServicesConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _lock_monitors;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allPairedDevices;
- (id)browseNearbyDevicesWithHandler:(id /* block */)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (void)nearbyDevicesDidChange:(id)arg1;
- (void)pairDevice:(id)arg1 completion:(id /* block */)arg2;
- (bool)reloadRemoteWidgetsWithError:(id*)arg1;
- (bool)remoteWidgetsEnabled;
- (bool)toggleRemoteWidgetsEnabled:(bool)arg1 error:(id*)arg2;
- (bool)unpairDevice:(id)arg1 error:(id*)arg2;

@end
