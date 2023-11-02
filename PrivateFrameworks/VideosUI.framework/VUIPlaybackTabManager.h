
@interface VUIPlaybackTabManager : NSObject {
    <VUIPlaybackTabManagerDelegate> * _delegate;
    NSMutableDictionary * _hudViewControllers;
    double  _playbackFromBeginningTimeOffset;
    long long  _playbackTabError;
    VUIPlaybackTabInfo * _tabInfo;
    VUIPlaybackTabInfo * _tabsInfo;
}

@property (nonatomic) <VUIPlaybackTabManagerDelegate> *delegate;
@property (nonatomic, retain) NSMutableDictionary *hudViewControllers;
@property (nonatomic, readonly) bool isCurrentMediaMovie;
@property (nonatomic, readonly) bool isCurrentMediaTVShow;
@property (nonatomic, readonly) NSString *moreInfoTitle;
@property (nonatomic, readonly) UIImage *playImageForFromBeginningAction;
@property (nonatomic, readonly) NSString *playTitleForFromBeginningAction;
@property (nonatomic, readonly) double playbackFromBeginningTimeOffset;
@property (nonatomic) long long playbackTabError;
@property (nonatomic, readonly) bool shouldShowMoreInfoButton;
@property (nonatomic, retain) VUIPlaybackTabInfo *tabInfo;
@property (nonatomic, retain) VUIPlaybackTabInfo *tabsInfo;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addMetadataInfoToEvent:(id)arg1;
- (id)_createHudContentViewControllerWithTabId:(id)arg1 excludingCanonicals:(id)arg2 isMultiview:(bool)arg3 locale:(id)arg4 playsFromStart:(bool)arg5;
- (id)_createPrefetchedDataForPlayerHUDWithTabId:(id)arg1 excludingCanonicals:(id)arg2 isMultiview:(bool)arg3 locale:(id)arg4 playsFromStart:(bool)arg5;
- (id)_documentRefContextDataForCurrentMediaTypeWithCanonicalID:(id)arg1 showCanonicalID:(id)arg2;
- (void)_getTabsForCanonicalID:(id)arg1 adamId:(id)arg2 completion:(id /* block */)arg3;
- (bool)_isCurrentMediaLive;
- (bool)_isCurrentMediaSportingEvent;
- (void)_updateHUDsForAVPlayerViewController:(id)arg1 tabInfo:(id)arg2 excludingCanonicals:(id)arg3;
- (id)appContext;
- (id)createHUDViewControllerWithTabInfo:(id)arg1 excludingCanonicals:(id)arg2 isMultiview:(bool)arg3 locale:(id)arg4 playsFromStart:(bool)arg5;
- (id)delegate;
- (id)hudViewControllers;
- (id)init;
- (bool)isCurrentMediaMovie;
- (bool)isCurrentMediaTVShow;
- (bool)isPlayerTabsEnabled;
- (id)moreInfoTitle;
- (id)moreInfoViewControllerWithAppContext:(id)arg1;
- (id)playImageForFromBeginningAction;
- (id)playTitleForFromBeginningAction;
- (double)playbackFromBeginningTimeOffset;
- (long long)playbackTabError;
- (void)reportMoreInfoMetrics;
- (void)reportPlayFromBeginningMetrics;
- (void)resetPlayerTabsForPlayerViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHudViewControllers:(id)arg1;
- (void)setPlaybackTabError:(long long)arg1;
- (void)setTabInfo:(id)arg1;
- (void)setTabsInfo:(id)arg1;
- (bool)shouldShowMoreInfoButton;
- (bool)shouldShowPlayFromBeginningButtonForMediaInfo:(bool)arg1;
- (id)tabInfo;
- (id)tabsInfo;
- (void)updatePlayerTabsExcludingCanonicals:(id)arg1 isEnteringFullScreenFromMultiview:(bool)arg2 completion:(id /* block */)arg3;
- (void)updatePrefetchedDataOnExistingHUDContentViewController:(id)arg1 excludingCanonicals:(id)arg2;

@end
