
@interface MRUHardwareVolumeDataSource : NSObject <SBSHardwareButtonEventConsuming> {
    bool  _debounceVolumeRepeat;
    double  _pendingVolumeChange;
    <MPVolumeControllerDataSource> * _volumeDataSource;
}

@property (nonatomic) bool debounceVolumeRepeat;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double pendingVolumeChange;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <MPVolumeControllerDataSource> *volumeDataSource;

- (void).cxx_destruct;
- (double)calculateButtonRepeatDelay;
- (void)cancelVolumeEvent;
- (void)changeVolumeBy:(double)arg1;
- (void)consumeSinglePressDownForButtonKind:(long long)arg1;
- (void)consumeSinglePressUpForButtonKind:(long long)arg1;
- (bool)debounceVolumeRepeat;
- (void)decreaseVolume;
- (void)handleDecreaseDown;
- (void)handleIncreaseDown;
- (void)increaseVolume;
- (id)initWithVolumeDataSource:(id)arg1;
- (double)pendingVolumeChange;
- (void)setDebounceVolumeRepeat:(bool)arg1;
- (void)setPendingVolumeChange:(double)arg1;
- (id)volumeDataSource;

@end
