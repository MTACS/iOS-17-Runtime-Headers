
@interface VUIPostPlayUpsellManager : NSObject {
    double  _deferredElapsedTime;
    NSObject<TVPMediaItem> * _deferredMediaItem;
}

@property (nonatomic) double deferredElapsedTime;
@property (nonatomic, retain) NSObject<TVPMediaItem> *deferredMediaItem;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_currentMediaItemWillChange:(id)arg1;
- (void)_handleDeferredMediaItemUpsellIfNeeded;
- (void)_handleUpsellForMediaItem:(id)arg1 elapsedTimeInterval:(double)arg2;
- (bool)_isFullScreenPlaybackUIShown;
- (void)_isPlaybackUIBeingShownDidChange:(id)arg1;
- (void)_reset;
- (double)deferredElapsedTime;
- (id)deferredMediaItem;
- (void)handleRouterDataSourceIfNeeded:(id)arg1;
- (id)init;
- (void)setDeferredElapsedTime:(double)arg1;
- (void)setDeferredMediaItem:(id)arg1;

@end
