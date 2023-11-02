
@interface PXGainMapAnimationDurationFilter : PXNumberFilter {
    double  _activationThreshold;
    bool  _enabled;
    double  _filterStartTime;
    bool  _gainMapImageAvailable;
}

@property (nonatomic) double activationThreshold;
@property (nonatomic) bool enabled;
@property (nonatomic) double filterStartTime;
@property (nonatomic) bool gainMapImageAvailable;

- (double)activationThreshold;
- (bool)enabled;
- (double)filterStartTime;
- (bool)gainMapImageAvailable;
- (id)init;
- (void)setActivationThreshold:(double)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFilterStartTime:(double)arg1;
- (void)setGainMapImageAvailable:(bool)arg1;
- (double)updatedOutput;

@end
