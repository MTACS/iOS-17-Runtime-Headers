
@interface SCLTransportController : NSObject <SCLSettingsSyncTransport> {
    NSString * _IDSDeviceIdentifier;
    NRDevice * _NRDevice;
    <SCLTransportControllerDelegate> * _delegate;
    NRPairedDeviceRegistry * _deviceRegistry;
    IDSService * _service;
    SCLSettingsSyncCoordinator * _settingsSyncCoordinator;
    SCLTransportService * _transportService;
}

@property (nonatomic, readonly) NSString *IDSDeviceIdentifier;
@property (nonatomic, readonly) NRDevice *NRDevice;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SCLTransportControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) IDSDevice *device;
@property (nonatomic, readonly) NRPairedDeviceRegistry *deviceRegistry;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) IDSService *service;
@property (nonatomic) SCLSettingsSyncCoordinator *settingsSyncCoordinator;
@property (readonly) Class superclass;
@property (nonatomic) SCLTransportService *transportService;

- (void).cxx_destruct;
- (id)IDSDeviceIdentifier;
- (id)NRDevice;
- (void)addUnlockHistoryItem:(id)arg1;
- (void)applySchedule:(id)arg1;
- (id)delegate;
- (id)device;
- (id)deviceRegistry;
- (void)handleIncomingHistoryItem:(id)arg1;
- (void)handleIncomingSchedule:(id)arg1 forType:(int)arg2;
- (void)handleRemoteScheduleSettingsRequest;
- (id)initWithNRDevice:(id)arg1 deviceRegistry:(id)arg2 service:(id)arg3 deviceIdentifier:(id)arg4;
- (void)requestRemoteSettings;
- (bool)sendSchedule:(id)arg1 identifier:(id*)arg2 error:(id*)arg3;
- (id)service;
- (void)service:(id)arg1 didDeliverMessageWithIdentifier:(id)arg2;
- (void)service:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(bool)arg3 error:(id)arg4;
- (void)service:(id)arg1 incomingProtobuf:(id)arg2 fromID:(id)arg3 context:(id)arg4;
- (void)setDelegate:(id)arg1;
- (void)setSettingsSyncCoordinator:(id)arg1;
- (void)setTransportService:(id)arg1;
- (id)settingsSyncCoordinator;
- (id)transportService;

@end
