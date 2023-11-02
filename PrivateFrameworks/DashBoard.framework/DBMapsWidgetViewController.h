
@interface DBMapsWidgetViewController : DBWidgetSceneViewController {
    NSArray * _availableWidgetSizes;
    BSAnimationSettings * _pendingAnimationSettings;
    BKSAnimationFenceHandle * _pendingFenceHandle;
    <DBWidgetSizeManaging> * _widgetSizeManager;
}

@property (nonatomic, retain) NSArray *availableWidgetSizes;
@property (nonatomic, retain) BSAnimationSettings *pendingAnimationSettings;
@property (nonatomic, retain) BKSAnimationFenceHandle *pendingFenceHandle;
@property (nonatomic) <DBWidgetSizeManaging> *widgetSizeManager;

- (void).cxx_destruct;
- (id)availableWidgetSizes;
- (void)clientSetWantsLargeSize:(bool)arg1 fenceHandle:(id)arg2 animationSettings:(id)arg3;
- (void)connectionReady;
- (id)initWithEnvironment:(id)arg1 animationManager:(id)arg2 widgetSizeManager:(id)arg3;
- (id)pendingAnimationSettings;
- (id)pendingFenceHandle;
- (void)prepareLoadingViewAnimated:(bool)arg1;
- (id)sceneID;
- (void)setAvailableWidgetSizes:(id)arg1;
- (void)setPendingAnimationSettings:(id)arg1;
- (void)setPendingFenceHandle:(id)arg1;
- (void)setWantsLargeSize:(bool)arg1;
- (void)setWidgetSizeManager:(id)arg1;
- (void)updateAppearanceForWallpaper;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)widgetSizeManager;

@end
