
@interface AEConcretePreferences : NSObject <AEPreferences> {
    <AEPreferencePrimitives> * _primitives;
}

@property (getter=shouldCaptureDisplays, nonatomic) bool captureDisplays;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=shouldDisableContinuity, nonatomic) bool disableContinuity;
@property (getter=shouldDisableDictation, nonatomic) bool disableDictation;
@property (getter=shouldDisableQuickNote, nonatomic) bool disableQuickNote;
@property (getter=shouldDisableSiri, nonatomic) bool disableSiri;
@property (getter=shouldDisableTrackpadLookup, nonatomic) bool disableTrackpadLookup;
@property (getter=shouldElevateWindows, nonatomic) bool elevateWindows;
@property (getter=shouldEnterSandbox, nonatomic) bool enterSandbox;
@property (readonly) unsigned long long hash;
@property (getter=isPortalDemoModeActive, nonatomic) bool portalDemoModeActive;
@property (getter=shouldPresentShields, nonatomic) bool presentShields;
@property (getter=shouldRestrictContentCapture, nonatomic) bool restrictContentCapture;
@property (getter=shouldRestrictFrontmostApp, nonatomic) bool restrictFrontmostApp;
@property (getter=shouldRestrictMedia, nonatomic) bool restrictMedia;
@property (getter=shouldRestrictNetworkAccess, nonatomic) bool restrictNetworkAccess;
@property (getter=shouldScrubPasteboard, nonatomic) bool scrubPasteboard;
@property (getter=shouldStopAirplayBeforehand, nonatomic) bool stopAirPlayBeforehand;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
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
