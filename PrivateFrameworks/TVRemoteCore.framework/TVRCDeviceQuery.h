
@interface TVRCDeviceQuery : NSObject {
    <TVRCDeviceQueryDelegate> * _delegate;
}

@property (nonatomic) <TVRCDeviceQueryDelegate> *delegate;
@property (nonatomic, readonly, copy) NSSet *devices;

+ (id)_allDiscoveredDevices;
+ (void)_allDiscoveredDevicesDidUpdate:(id)arg1;
+ (void)_updateSuggestedDevices:(id)arg1;
+ (id)deviceForDeviceState:(id)arg1;
+ (void)fetchActiveEndpointUIDWithCompletion:(id /* block */)arg1;
+ (void)getConnectionStatusToDeviceWithIdentifier:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)devices;
- (void)fetchSuggestedDevicesWithResponse:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)stop;

@end
