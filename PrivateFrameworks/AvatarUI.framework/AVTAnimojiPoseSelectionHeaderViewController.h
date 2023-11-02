
@interface AVTAnimojiPoseSelectionHeaderViewController : UIViewController {
    <AVTAvatarRecord> * _avatarRecord;
    AVTView * _avtView;
    AVTStickerConfiguration * _displayedConfiguration;
    AVTViewUpdater * _viewUpdater;
}

@property (nonatomic, retain) <AVTAvatarRecord> *avatarRecord;
@property (nonatomic, retain) AVTView *avtView;
@property (nonatomic, retain) AVTStickerConfiguration *displayedConfiguration;
@property (nonatomic, retain) AVTViewUpdater *viewUpdater;

- (void).cxx_destruct;
- (id)avatarRecord;
- (id)avtView;
- (void)beginFaceTrackingWithCompletionBlock:(id /* block */)arg1;
- (id)displayedConfiguration;
- (void)endFaceTracking;
- (id)initWithRecord:(id)arg1;
- (id)newStickerConfigurationFromCurrentPose;
- (void)pauseFaceTracking;
- (void)setAvatarRecord:(id)arg1;
- (void)setAvtView:(id)arg1;
- (void)setDisplayedConfiguration:(id)arg1;
- (void)setViewUpdater:(id)arg1;
- (void)updateForStickerConfiguration:(id)arg1 animated:(bool)arg2;
- (void)viewDidLoad;
- (id)viewUpdater;

@end
