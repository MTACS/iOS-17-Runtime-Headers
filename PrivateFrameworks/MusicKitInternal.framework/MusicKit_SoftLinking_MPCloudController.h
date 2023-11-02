
@interface MusicKit_SoftLinking_MPCloudController : NSObject {
    MPCloudController * _underlyingCloudController;
}

@property (nonatomic, readonly) bool canShowCloudDownloadButtons;
@property (getter=isUpdateInProgress, nonatomic, readonly) bool updateInProgress;

+ (id)canShowCloudDownloadButtonsDidChangeNotificationName;
+ (id)isUpdateInProgressDidChangeNotificationName;
+ (id)sharedCloudController;

- (void).cxx_destruct;
- (void)_handleCanShowCloudDownloadButtonsDidChangeNotification:(id)arg1;
- (void)_handleIsUpdateInProgressDidChangeNotificationName:(id)arg1;
- (id)_initWithUnderlyingCloudController:(id)arg1;
- (void)becomeActive;
- (bool)canShowCloudDownloadButtons;
- (long long)cloudAddToPlaylistBehavior;
- (void)dealloc;
- (bool)isUpdateInProgress;
- (void)resignActive;
- (void)setCloudAddToPlaylistBehavior:(long long)arg1 completionHandler:(id /* block */)arg2;

@end
