
@interface AVPlayerControllerVolumeAnimator : NSObject {
    bool  _animatingAwayFromZero;
    bool  _animatingTowardsZero;
    AVPlayerController * _playerController;
    double  _volumeToRestore;
}

@property (getter=isAnimatingAwayFromZero, nonatomic) bool animatingAwayFromZero;
@property (getter=isAnimatingTowardsZero, nonatomic) bool animatingTowardsZero;
@property (nonatomic, readonly) AVPlayerController *playerController;
@property (nonatomic) double volumeToRestore;

- (void).cxx_destruct;
- (bool)canAnimateVolumeAwayFromZero;
- (bool)canAnimateVolumeTowardsZero;
- (bool)currentRouteHasVolumeControl;
- (id)initWithPlayerController:(id)arg1;
- (bool)isAnimatingAwayFromZero;
- (bool)isAnimatingTowardsZero;
- (id)playerController;
- (void)restoreVolumeIfNeeded;
- (void)setAnimatingAwayFromZero:(bool)arg1;
- (void)setAnimatingTowardsZero:(bool)arg1;
- (void)setProgressAwayFromZero:(double)arg1;
- (void)setProgressTowardsZero:(double)arg1;
- (void)setVolumeToRestore:(double)arg1;
- (double)volumeToRestore;

@end
