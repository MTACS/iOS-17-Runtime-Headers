
@interface MRUMirroringDiscoverySessionController : NSObject {
    NSArray * _availableOutputDevices;
    NSArray * _cachedAvailableOutputDevices;
    <MRUMirroringDiscoverySessionControllerDelegate> * _delegate;
    bool  _detailedDiscovery;
    bool  _needsUpdate;
    AVOutputDeviceDiscoverySession * _outputDeviceDiscoverySession;
}

@property (nonatomic, retain) NSArray *availableOutputDevices;
@property (nonatomic, retain) NSArray *cachedAvailableOutputDevices;
@property (nonatomic) <MRUMirroringDiscoverySessionControllerDelegate> *delegate;
@property (nonatomic) bool detailedDiscovery;
@property (getter=isExternalOutputDeviceAvailable, nonatomic, readonly) bool externalOutputDeviceAvailable;
@property (nonatomic) bool needsUpdate;
@property (nonatomic, retain) AVOutputDeviceDiscoverySession *outputDeviceDiscoverySession;

- (void).cxx_destruct;
- (id)availableOutputDevices;
- (void)availableOutputDevicesChangedNotification:(id)arg1;
- (id)cachedAvailableOutputDevices;
- (void)dealloc;
- (id)delegate;
- (bool)detailedDiscovery;
- (id)filterAndSortOutputDevices:(id)arg1;
- (id)init;
- (id)initWithDeviceFeatures:(unsigned long long)arg1;
- (bool)isExternalOutputDeviceAvailable;
- (bool)needsUpdate;
- (id)outputDeviceDiscoverySession;
- (void)setAvailableOutputDevices:(id)arg1;
- (void)setCachedAvailableOutputDevices:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetailedDiscovery:(bool)arg1;
- (void)setNeedsUpdate:(bool)arg1;
- (void)setOutputDeviceDiscoverySession:(id)arg1;
- (bool)sortDeviceToTop:(id)arg1;
- (void)startDetailedDiscovery;
- (void)stopDetailedDiscovery;
- (void)updateDiscoveryMode;
- (void)updateOutputDevicesForAvailableOutputDevices:(id)arg1;
- (void)updateOutputDevicesIfNeeded;
- (void)updateOutputDevicesImmediately;

@end
