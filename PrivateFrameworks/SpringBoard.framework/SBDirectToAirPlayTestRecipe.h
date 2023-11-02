
@interface SBDirectToAirPlayTestRecipe : NSObject <SBTestRecipe> {
    SBApplication * _currentlyPlayingApp;
    SBApplication * _currentlyReadyApp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_anyForegroundApplication;
- (void)_claimForegroundAppIsPlayingVideo;
- (void)_clearPlayingApp;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (id)title;

@end
