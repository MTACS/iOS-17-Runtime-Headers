
@interface PXMediaViewSettings : PXSettings {
    bool  _demoMultipleMediaViews;
    bool  _enableDemoActionInGrids;
    bool  _showMediaControls;
    long long  _transitionType;
}

@property (nonatomic) bool demoMultipleMediaViews;
@property (nonatomic) bool enableDemoActionInGrids;
@property (nonatomic) bool showMediaControls;
@property (nonatomic) long long transitionType;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)demoMultipleMediaViews;
- (bool)enableDemoActionInGrids;
- (id)parentSettings;
- (void)setDefaultValues;
- (void)setDemoMultipleMediaViews:(bool)arg1;
- (void)setEnableDemoActionInGrids:(bool)arg1;
- (void)setShowMediaControls:(bool)arg1;
- (void)setTransitionType:(long long)arg1;
- (bool)showMediaControls;
- (long long)transitionType;

@end
