
@interface PXFooterSettings : PXSettings {
    double  _alternateTitleCyclingInterval;
    long long  _alternateTitleGridCycleCount;
    double  _alternateTitleGridCycleDelay;
    double  _animationDelay;
    float  _minimumDisplayedProgress;
    bool  _shouldAlternateTitleWithGridCycle;
    bool  _showFilterView;
    bool  _simulateAnimatedIconMode;
    bool  _simulateImportantInformation;
    long long  _simulatedAnimatedIconMode;
}

@property (nonatomic) double alternateTitleCyclingInterval;
@property (nonatomic) long long alternateTitleGridCycleCount;
@property (nonatomic) double alternateTitleGridCycleDelay;
@property (nonatomic) double animationDelay;
@property (nonatomic) float minimumDisplayedProgress;
@property (nonatomic) bool shouldAlternateTitleWithGridCycle;
@property (nonatomic) bool showFilterView;
@property (nonatomic) bool simulateAnimatedIconMode;
@property (nonatomic) bool simulateImportantInformation;
@property (nonatomic) long long simulatedAnimatedIconMode;

+ (void)resetLastShownInfo;
+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (double)alternateTitleCyclingInterval;
- (long long)alternateTitleGridCycleCount;
- (double)alternateTitleGridCycleDelay;
- (double)animationDelay;
- (float)minimumDisplayedProgress;
- (id)parentSettings;
- (void)setAlternateTitleCyclingInterval:(double)arg1;
- (void)setAlternateTitleGridCycleCount:(long long)arg1;
- (void)setAlternateTitleGridCycleDelay:(double)arg1;
- (void)setAnimationDelay:(double)arg1;
- (void)setDefaultValues;
- (void)setMinimumDisplayedProgress:(float)arg1;
- (void)setShouldAlternateTitleWithGridCycle:(bool)arg1;
- (void)setShowFilterView:(bool)arg1;
- (void)setSimulateAnimatedIconMode:(bool)arg1;
- (void)setSimulateImportantInformation:(bool)arg1;
- (void)setSimulatedAnimatedIconMode:(long long)arg1;
- (bool)shouldAlternateTitleWithGridCycle;
- (bool)showFilterView;
- (bool)simulateAnimatedIconMode;
- (bool)simulateImportantInformation;
- (long long)simulatedAnimatedIconMode;

@end
