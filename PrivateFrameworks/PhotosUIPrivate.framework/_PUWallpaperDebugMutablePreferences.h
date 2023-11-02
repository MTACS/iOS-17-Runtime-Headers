
@interface _PUWallpaperDebugMutablePreferences : NSObject <PUWallpaperMutablePreferences> {
    bool  _hideChrome;
    unsigned long long  _significantEventOptions;
    unsigned long long  _significantEventTime;
    UIColor * _statusBarTintColor;
    UIColor * _timeColor;
    UIFont * _timeFont;
    bool  _userTapEventsRequested;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideChrome;
@property (nonatomic) unsigned long long significantEventOptions;
@property (nonatomic) unsigned long long significantEventTime;
@property (nonatomic, retain) UIColor *statusBarTintColor;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *timeColor;
@property (nonatomic, retain) UIFont *timeFont;
@property (nonatomic) bool userTapEventsRequested;

- (void).cxx_destruct;
- (bool)hideChrome;
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
