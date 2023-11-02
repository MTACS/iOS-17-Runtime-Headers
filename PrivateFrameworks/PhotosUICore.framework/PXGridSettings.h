
@interface PXGridSettings : PXSettings {
    bool  _disableSelectionOverlayView;
    bool  _enableAutomaticTransitionToSelectMode;
    bool  _simulateLongTitles;
    long long  _simulatedNumberOfLocations;
    long long  _weightingScheme;
}

@property (nonatomic) bool disableSelectionOverlayView;
@property (nonatomic) bool enableAutomaticTransitionToSelectMode;
@property (nonatomic) bool simulateLongTitles;
@property (nonatomic) long long simulatedNumberOfLocations;
@property (nonatomic) long long weightingScheme;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)disableSelectionOverlayView;
- (bool)enableAutomaticTransitionToSelectMode;
- (id)parentSettings;
- (void)setDefaultValues;
- (void)setDisableSelectionOverlayView:(bool)arg1;
- (void)setEnableAutomaticTransitionToSelectMode:(bool)arg1;
- (void)setSimulateLongTitles:(bool)arg1;
- (void)setSimulatedNumberOfLocations:(long long)arg1;
- (void)setWeightingScheme:(long long)arg1;
- (bool)simulateLongTitles;
- (long long)simulatedNumberOfLocations;
- (long long)weightingScheme;

@end
