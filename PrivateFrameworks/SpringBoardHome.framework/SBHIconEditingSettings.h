
@interface SBHIconEditingSettings : PTSettings {
    double  _clusterFastestDuration;
    double  _clusterMiddleFastDuration;
    double  _clusterMiddleSlowDuration;
    double  _clusterSlowestDuration;
    double  _defaultPauseDuration;
    double  _defaultSpringDampingRatio;
    double  _defaultSpringDuration;
    double  _editingLiftDelay;
    double  _fastEditingPauseDuration;
    double  _longPressToEditDuration;
    long long  _overrideAnimationType;
    PTOutlet * _resetHomeScreenLayoutOutlet;
    bool  _showDragPlatterIconBorder;
    bool  _showIndexLabels;
    bool  _waitForPause;
}

@property (nonatomic) double clusterFastestDuration;
@property (nonatomic) double clusterMiddleFastDuration;
@property (nonatomic) double clusterMiddleSlowDuration;
@property (nonatomic) double clusterSlowestDuration;
@property (nonatomic) double defaultPauseDuration;
@property (nonatomic) double defaultSpringDampingRatio;
@property (nonatomic) double defaultSpringDuration;
@property (nonatomic) double editingLiftDelay;
@property (nonatomic) double fastEditingPauseDuration;
@property (nonatomic) double longPressToEditDuration;
@property (nonatomic) long long overrideAnimationType;
@property (nonatomic, retain) PTOutlet *resetHomeScreenLayoutOutlet;
@property (nonatomic) bool showDragPlatterIconBorder;
@property (nonatomic) bool showIndexLabels;
@property (nonatomic) bool waitForPause;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (double)clusterFastestDuration;
- (double)clusterMiddleFastDuration;
- (double)clusterMiddleSlowDuration;
- (double)clusterSlowestDuration;
- (double)defaultPauseDuration;
- (double)defaultSpringDampingRatio;
- (double)defaultSpringDuration;
- (double)editingLiftDelay;
- (double)fastEditingPauseDuration;
- (double)longPressToEditDuration;
- (long long)overrideAnimationType;
- (id)resetHomeScreenLayoutOutlet;
- (void)setClusterFastestDuration:(double)arg1;
- (void)setClusterMiddleFastDuration:(double)arg1;
- (void)setClusterMiddleSlowDuration:(double)arg1;
- (void)setClusterSlowestDuration:(double)arg1;
- (void)setDefaultPauseDuration:(double)arg1;
- (void)setDefaultSpringDampingRatio:(double)arg1;
- (void)setDefaultSpringDuration:(double)arg1;
- (void)setDefaultValues;
- (void)setEditingLiftDelay:(double)arg1;
- (void)setFastEditingPauseDuration:(double)arg1;
- (void)setLongPressToEditDuration:(double)arg1;
- (void)setOverrideAnimationType:(long long)arg1;
- (void)setResetHomeScreenLayoutOutlet:(id)arg1;
- (void)setShowDragPlatterIconBorder:(bool)arg1;
- (void)setShowIndexLabels:(bool)arg1;
- (void)setWaitForPause:(bool)arg1;
- (bool)showDragPlatterIconBorder;
- (bool)showIndexLabels;
- (bool)waitForPause;

@end
