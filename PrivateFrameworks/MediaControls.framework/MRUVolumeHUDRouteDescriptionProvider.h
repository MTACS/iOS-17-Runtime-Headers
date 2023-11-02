
@interface MRUVolumeHUDRouteDescriptionProvider : NSObject <MRUSystemOutputDeviceRouteControllerObserver> {
    <MRUVolumeHUDRouteDescriptionProviderDelegate> * _delegate;
    MRUOutputDeviceAsset * _outputDeviceAsset;
    MRUOutputDeviceAsset * _overrideOutputDeviceAsset;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MRUVolumeHUDRouteDescriptionProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MRUOutputDeviceAsset *outputDeviceAsset;
@property (nonatomic, retain) MRUOutputDeviceAsset *overrideOutputDeviceAsset;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cycleOverridePackageDescriptions;
- (id)delegate;
- (id)init;
- (id)outputDeviceAsset;
- (id)overrideOutputDeviceAsset;
- (id)packageStateForVolumeValue:(float)arg1;
- (void)resetOverridePackageDescription;
- (void)setDelegate:(id)arg1;
- (void)setOutputDeviceAsset:(id)arg1;
- (void)setOverrideOutputDeviceAsset:(id)arg1;
- (void)systemOutputDeviceRouteControllerDidUpdateOutputDeviceProperties:(id)arg1;
- (void)updateOutputDeviceAsset;

@end
