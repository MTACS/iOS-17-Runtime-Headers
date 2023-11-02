
@interface _TtCC15PhotosUIPrivate43AmbientPhotoFramePlayergroundViewControllerP33_AA406F95772BEA5A2E5AABA48A24960034PlaygroundPosterMutablePreferences : NSObject <PUWallpaperMutablePreferences> {
    void hideChrome;
    void significantEventOptions;
    void significantEventTime;
    void statusBarTintColor;
    void timeColor;
    void timeFont;
    void userTapEventsRequested;
}

@property (nonatomic) bool hideChrome;
@property (nonatomic) unsigned long long significantEventOptions;
@property (nonatomic) unsigned long long significantEventTime;
@property (nonatomic, retain) UIColor *statusBarTintColor;
@property (nonatomic, retain) UIColor *timeColor;
@property (nonatomic, retain) UIFont *timeFont;
@property (nonatomic) bool userTapEventsRequested;

- (void).cxx_destruct;
- (bool)hideChrome;
- (id)init;
- (void)setHideChrome:(bool)arg1;
- (void)setSignificantEventOptions:(unsigned long long)arg1;
- (void)setSignificantEventTime:(unsigned long long)arg1;
- (void)setStatusBarTintColor:(id)arg1;
- (void)setTimeColor:(id)arg1;
- (void)setTimeFont:(id)arg1;
- (void)setUserTapEventsRequested:(bool)arg1;
- (unsigned long long)significantEventOptions;
- (unsigned long long)significantEventTime;
- (id)statusBarTintColor;
- (id)timeColor;
- (id)timeFont;
- (bool)userTapEventsRequested;

@end
