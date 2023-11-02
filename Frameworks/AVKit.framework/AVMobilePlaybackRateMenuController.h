
@interface AVMobilePlaybackRateMenuController : NSObject {
    bool  _activeMenuHasImage;
    NSArray * _activeMenuItems;
    AVPlaybackSpeedCollection * _activePlaybackRateCollection;
    AVPlaybackSpeed * _activeSelectedPlaybackSpeed;
    AVObservationController * _observationController;
    UIMenu * _playbackRateMenu;
    AVPlaybackSpeedCollection * _playbackSpeedCollection;
}

@property (nonatomic, readonly) UIMenu *menu;
@property (nonatomic, retain) AVPlaybackSpeedCollection *playbackSpeedCollection;

+ (void)_loadPlaybackSpeedControlImageWithCompletionHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_reconstructPlaybackRateMenuItems;
- (void)_updatePlaybackRateMenuIfNeeded;
- (void)_updatePlaybackRateMenuItemStatesIfNeeded;
- (void)dealloc;
- (id)init;
- (id)menu;
- (id)playbackSpeedCollection;
- (void)setPlaybackSpeedCollection:(id)arg1;

@end
