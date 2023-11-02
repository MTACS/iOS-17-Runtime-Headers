
@interface PBUIWallpaperServer : NSObject <BSServiceConnectionListenerDelegate, PBUIWallpaperClientToServerInterface> {
    FBServiceClientAuthenticator * _clientAuthenticator;
    BSServiceConnectionListener * _connectionListener;
    NSMutableArray * _connections;
    <PBUIWallpaperServerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PBUIWallpaperServerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_addConnection:(id)arg1;
- (void)_queue_removeConnection:(id)arg1;
- (void)activate;
- (id)delegate;
- (id)getWallpaperLegibilitySettingsForVariant:(id)arg1;
- (id)getWallpaperOptionsForVariant:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)removeWallpaperVideo;
- (void)restoreDefaultWallpaper;
- (void)setDelegate:(id)arg1;
- (void)setProceduralWallpaperIdentifier:(id)arg1 options:(id)arg2 locations:(id)arg3;
- (bool)setWallpaperColor:(id)arg1 darkColor:(id)arg2 forLocations:(id)arg3;
- (bool)setWallpaperGradient:(id)arg1 forLocations:(id)arg2;
- (bool)setWallpaperImage:(id)arg1 adjustedImage:(id)arg2 thumbnailData:(id)arg3 imageHashData:(id)arg4 wallpaperOptions:(id)arg5 forLocations:(id)arg6 currentWallpaperMode:(id)arg7;
- (bool)setWallpaperWithVideo:(id)arg1 sandboxToken:(id)arg2 cropRect:(id)arg3 wallpaperMode:(id)arg4;

@end
