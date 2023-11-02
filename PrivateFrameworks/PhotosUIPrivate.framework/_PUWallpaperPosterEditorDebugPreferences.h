
@interface _PUWallpaperPosterEditorDebugPreferences : NSObject <PUMutableWallpaperEditorPreferences> {
    unsigned long long  _currentLookIndex;
    NSString * _currentLookName;
    unsigned long long  _numberOfLooks;
    UIColor * _statusBarTintColor;
    UIColor * _timeColor;
    UIFont * _timeFont;
}

@property (nonatomic) unsigned long long currentLookIndex;
@property (nonatomic, copy) NSString *currentLookName;
@property (nonatomic) unsigned long long numberOfLooks;
@property (nonatomic, retain) UIColor *statusBarTintColor;
@property (nonatomic, retain) UIColor *timeColor;
@property (nonatomic, retain) UIFont *timeFont;

- (void).cxx_destruct;
- (unsigned long long)currentLookIndex;
- (id)currentLookName;
- (unsigned long long)numberOfLooks;
- (void)setCurrentLookIndex:(unsigned long long)arg1;
- (void)setCurrentLookName:(id)arg1;
- (void)setNumberOfLooks:(unsigned long long)arg1;
- (void)setStatusBarTintColor:(id)arg1;
- (void)setTimeColor:(id)arg1;
- (void)setTimeFont:(id)arg1;
- (id)statusBarTintColor;
- (id)timeColor;
- (id)timeFont;

@end
