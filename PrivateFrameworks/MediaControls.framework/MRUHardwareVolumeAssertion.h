
@interface MRUHardwareVolumeAssertion : NSObject <BSInvalidatable> {
    MRUHardwareVolumeController * _hardwareVolumeController;
    NSString * _reason;
    <MPVolumeControllerDataSource> * _volumeDataSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) MRUHardwareVolumeController *hardwareVolumeController;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *reason;
@property (readonly) Class superclass;
@property (nonatomic) <MPVolumeControllerDataSource> *volumeDataSource;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)hardwareVolumeController;
- (id)initWithHardwareVolumeController:(id)arg1 volumeDataSource:(id)arg2 reason:(id)arg3;
- (void)invalidate;
- (id)reason;
- (void)setHardwareVolumeController:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setVolumeDataSource:(id)arg1;
- (id)volumeDataSource;

@end
