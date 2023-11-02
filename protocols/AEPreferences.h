
@protocol AEPreferences <NSObject>

@required

- (bool)isPortalDemoModeActive;
- (void)setCaptureDisplays:(bool)arg1;
- (void)setDisableContinuity:(bool)arg1;
- (void)setDisableDictation:(bool)arg1;
- (void)setDisableQuickNote:(bool)arg1;
- (void)setDisableSiri:(bool)arg1;
- (void)setDisableTrackpadLookup:(bool)arg1;
- (void)setElevateWindows:(bool)arg1;
- (void)setEnterSandbox:(bool)arg1;
- (void)setPortalDemoModeActive:(bool)arg1;
- (void)setPresentShields:(bool)arg1;
- (void)setRestrictContentCapture:(bool)arg1;
- (void)setRestrictFrontmostApp:(bool)arg1;
- (void)setRestrictMedia:(bool)arg1;
- (void)setRestrictNetworkAccess:(bool)arg1;
- (void)setScrubPasteboard:(bool)arg1;
- (void)setStopAirPlayBeforehand:(bool)arg1;
- (bool)shouldCaptureDisplays;
- (bool)shouldDisableContinuity;
- (bool)shouldDisableDictation;
- (bool)shouldDisableQuickNote;
- (bool)shouldDisableSiri;
- (bool)shouldDisableTrackpadLookup;
- (bool)shouldElevateWindows;
- (bool)shouldEnterSandbox;
- (bool)shouldPresentShields;
- (bool)shouldRestrictContentCapture;
- (bool)shouldRestrictFrontmostApp;
- (bool)shouldRestrictMedia;
- (bool)shouldRestrictNetworkAccess;
- (bool)shouldScrubPasteboard;
- (bool)shouldStopAirplayBeforehand;

@end
