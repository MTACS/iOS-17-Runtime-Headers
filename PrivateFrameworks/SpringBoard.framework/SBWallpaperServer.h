
@interface SBWallpaperServer : FBSServiceFacility {
    FBServiceClientAuthenticator * _accessAuthenticator;
    <SBWallpaperServerDelegate> * _delegate;
}

@property (nonatomic, retain) FBServiceClientAuthenticator *accessAuthenticator;
@property (nonatomic) <SBWallpaperServerDelegate> *delegate;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_clientPermittedToModifyWallpaper:(id)arg1;
- (long long)_deviceOrientationFromXPCDictionary:(id)arg1;
- (void)_handleFetchContentCutoutBoundsMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleFetchLimitedOcclusionBoundsMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleFetchLockScreenContentCutoutBoundsMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleFetchLockScreenForegroundBoundsMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleFetchLockScreenMaximalContentCutoutBoundsMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleFetchLockScreenTimeBoundsMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleFetchOriginalImageMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleFetchOriginalVideoURLMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleFetchPosterSignificantEventsCounterMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleFetchThumbnailMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleRestoreDefaultWallpaperMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleSetColorMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleSetColorNameMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleSetGradientMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleSetVideoMessageWithWallpaperMode:(id)arg1 fromClient:(id)arg2;
- (void)_handleTriggerPosterSignificantEventMessage:(id)arg1 fromClient:(id)arg2;
- (id)_init;
- (long long)_wallpaperModeFromXPCDictionary:(id)arg1;
- (long long)_wallpaperVariantFromXPCDictionary:(id)arg1;
- (bool)_xpcObjectIsDictionary:(id)arg1;
- (id)accessAuthenticator;
- (id)delegate;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (void)setAccessAuthenticator:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
