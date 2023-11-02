
@interface WorkoutCore.TrackRunningCoordinator : _TtCs12_SwiftObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _hasTrackUnitsOfMeasure;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _preferredUnit;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _trackModeEnabled;
    void canShowTrackPrompt;
    void control;
    void didShowTrackPrompt;
    void domain;
    void trackId;
    void unitManager;
}

@property (nonatomic) bool canShowTrackPrompt;
@property (nonatomic) bool didShowTrackPrompt;
@property (nonatomic) bool trackModeEnabled;

- (bool)canShowTrackPrompt;
- (bool)didShowTrackPrompt;
- (void)reset;
- (void)setCanShowTrackPrompt:(bool)arg1;
- (void)setDidShowTrackPrompt:(bool)arg1;
- (void)setTrackModeEnabled:(bool)arg1;
- (bool)trackModeEnabled;
- (void)unitPreferencesDidChange;

@end
