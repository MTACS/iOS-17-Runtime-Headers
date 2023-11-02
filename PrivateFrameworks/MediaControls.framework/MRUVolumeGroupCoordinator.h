
@interface MRUVolumeGroupCoordinator : NSObject <MRUVolumeControllerCoordinationDelegate> {
    MRUVolumeController * _mainVolumeController;
    NSArray * _volumeControllers;
    NSArray * _volumeScales;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MRUVolumeController *mainVolumeController;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *volumeControllers;
@property (nonatomic, retain) NSArray *volumeScales;

- (void).cxx_destruct;
- (void)beginEqualization;
- (void)equalizeVolumes;
- (void)finishEqualization;
- (id)initWithMainVolumeController:(id)arg1;
- (id)mainVolumeController;
- (void)setVolumeControllers:(id)arg1;
- (void)setVolumeScales:(id)arg1;
- (bool)shouldAllowEqualization;
- (float)updateVolumeScales;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (id)volumeControllers;
- (id)volumeScales;

@end
