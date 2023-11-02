
@interface MRUVolumeController : MPVolumeController {
    <MRUVolumeControllerCoordinationDelegate> * _coordinationDelegate;
    <MRUVolumeControllerDelegate> * _delegate;
    NSTimer * _optimisticTimer;
    NSNumber * _optimisticValue;
}

@property (nonatomic) <MRUVolumeControllerCoordinationDelegate> *coordinationDelegate;
@property (nonatomic) <MRUVolumeControllerDelegate> *delegate;
@property (nonatomic, retain) NSNumber *optimisticValue;

- (void).cxx_destruct;
- (void)beginEqualization;
- (id)coordinationDelegate;
- (id)description;
- (void)finishEqualization;
- (id)optimisticValue;
- (void)restoreDelegate;
- (void)setCoordinationDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOptimisticValue:(id)arg1;
- (void)setVolumeValue:(float)arg1;
- (float)volumeValue;

@end
