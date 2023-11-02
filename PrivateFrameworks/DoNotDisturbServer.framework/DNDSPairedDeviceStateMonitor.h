
@interface DNDSPairedDeviceStateMonitor : NSObject <DNDSSysdiagnoseDataProvider, IDSServiceDelegate> {
    NSSet * _cloudDevices;
    IDSService * _cloudService;
    NSObject<OS_dispatch_source> * _coalescingTimer;
    <DNDSPairedDeviceStateMonitorDelegate> * _delegate;
    IDSService * _localService;
    DNDSPairedDevice * _pairedDevice;
    int  _pairedDeviceDidChangeNotificationToken;
    DNDSPairedDevice * _previousPairedDevice;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly, copy) DNDAccountFeatureSupport *accountFeatureSupport;
@property (copy) NSSet *cloudDevices;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DNDSPairedDeviceStateMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) DNDSPairedDevice *pairedDevice;
@property (copy) DNDSPairedDevice *previousPairedDevice;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *sysdiagnoseDataIdentifier;

- (void).cxx_destruct;
- (void)_beginMonitoringForChanges;
- (void)_endMonitoringForChanges;
- (id)_getCurrentPairedDevice;
- (void)_pairedDeviceStateChanged:(id)arg1;
- (void)_queue_informDelegatesOfPairedStateChange;
- (void)_queue_updateCloudDevices;
- (void)_queue_updatePairedState;
- (id)accountFeatureSupport;
- (id)cloudDevices;
- (void)dealloc;
- (id)delegate;
- (id)initWithLocalIDSService:(id)arg1 cloudIDSService:(id)arg2;
- (id)pairedDevice;
- (id)pairedDeviceForDeviceIdentifier:(id)arg1;
- (id)previousPairedDevice;
- (void)resume;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)setCloudDevices:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPairedDevice:(id)arg1;
- (void)setPreviousPairedDevice:(id)arg1;
- (id)sysdiagnoseDataForDate:(id)arg1 redacted:(bool)arg2;
- (id)sysdiagnoseDataIdentifier;

@end
