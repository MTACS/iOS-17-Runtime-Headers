
@interface MDMWallpaperUtilities : NSObject {
    PRSExternalSystemService * _externalPosterService;
    PRSService * _posterService;
}

@property (nonatomic, retain) PRSExternalSystemService *externalPosterService;
@property (nonatomic, retain) PRSService *posterService;

- (void).cxx_destruct;
- (void)_createNewConfigurationIfNeeedWithCompletionHandler:(id /* block */)arg1;
- (void)_createNewConfigurationWithCompletionHandler:(id /* block */)arg1;
- (void)_removeImageFromURL:(id)arg1;
- (void)_setWallpaper:(id)arg1 forConfigurationWithUUID:(id)arg2 setLockScreen:(bool)arg3 setHomeScreen:(bool)arg4 completionHandler:(id /* block */)arg5;
- (id)_storeImageToTempDirectory:(id)arg1;
- (void)_verifyWallpaperConfigExistsWithUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)externalPosterService;
- (id)posterService;
- (void)setExternalPosterService:(id)arg1;
- (void)setPosterService:(id)arg1;
- (void)setWallpaper:(id)arg1 forLockScreen:(bool)arg2 homeScreen:(bool)arg3 completionHandler:(id /* block */)arg4;

@end
