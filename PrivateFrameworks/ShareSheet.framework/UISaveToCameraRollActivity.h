
@interface UISaveToCameraRollActivity : UIActivity {
    long long  _imageCount;
    long long  _livePhotoCount;
    _UISaveToCameraRollSaveItemsController * _saveController;
    long long  _videoCount;
}

@property (nonatomic) long long imageCount;
@property (nonatomic) long long livePhotoCount;
@property (nonatomic, retain) _UISaveToCameraRollSaveItemsController *saveController;
@property (nonatomic) long long videoCount;

+ (unsigned long long)_xpcAttributes;

- (void).cxx_destruct;
- (id)_activityImage;
- (bool)_canSaveImages;
- (void)_prepareWithActivityItems:(id)arg1 completion:(id /* block */)arg2;
- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (long long)imageCount;
- (long long)livePhotoCount;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (id)saveController;
- (void)setImageCount:(long long)arg1;
- (void)setLivePhotoCount:(long long)arg1;
- (void)setSaveController:(id)arg1;
- (void)setVideoCount:(long long)arg1;
- (long long)videoCount;

@end
