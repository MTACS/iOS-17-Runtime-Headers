
@interface ABActionSelectorViewController : UIViewController <ABCarouselViewDelegate, ABDeviceSceneViewControllerDelegate> {
    NSArray * _actionItems;
    ABDeviceButtonHighlightView * _buttonHighlightView;
    ABCarouselView * _carouselView;
    UIView<ABActionSelectorContent> * _contentView;
    <ABActionSelectorViewControllerDelegate> * _delegate;
    bool  _hasPresentedViewController;
    long long  _mode;
    ABHitTestPassthroughView * _overlayContainerView;
    ABTransformView * _overlayView;
    ABDeviceSceneDriver * _sceneDriver;
    ABDeviceSceneViewController * _sceneViewController;
    long long  _selectedIndex;
    ABShadowView * _shadowView;
    ABDelayedBlockExecutor * _transitionScheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ABActionSelectorViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long mode;
@property (nonatomic) long long selectedIndex;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clipDuringNavigationTransiton;
- (void)_doScheduleUpdateWithMode:(long long)arg1 afterDelay:(double)arg2;
- (void)_occlusionDidChange;
- (void)_renderWithTargetTimestamp:(double)arg1 duration:(double)arg2;
- (void)_revealSceneIfNeeded;
- (void)_sceneStateDidChange:(long long)arg1 previosState:(long long)arg2;
- (void)_scheduleZoomOutIfNeeded;
- (void)_updateCurrentMode;
- (void)_updateHighlightColorAnimated:(bool)arg1;
- (void)_updateSubviews;
- (void)carouselView:(id)arg1 didDragToOffset:(double)arg2 initialOffset:(double)arg3;
- (void)carouselView:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)carouselViewWillEndDragging:(id)arg1;
- (void)carouselViewWillStartDragging:(id)arg1;
- (id)delegate;
- (void)deviceSceneViewControllerWillRenderScene:(id)arg1;
- (id)initWithActionItems:(id)arg1 selectedIndex:(long long)arg2 mode:(long long)arg3 contentView:(id)arg4;
- (long long)mode;
- (void)pauseSceneUpdates;
- (void)resumeSceneUpdates;
- (void)scheduleUpdateWithMode:(long long)arg1;
- (void)scheduleUpdateWithMode:(long long)arg1 afterDelay:(double)arg2;
- (long long)selectedIndex;
- (void)setDelegate:(id)arg1;
- (void)setSelectedIndex:(long long)arg1;
- (void)setSelectedIndex:(long long)arg1 animated:(bool)arg2;
- (void)updateWithActionItems:(id)arg1;
- (void)updateWithMode:(long long)arg1;
- (void)updateWithZoomedOutStateParamsOverride:(id)arg1 zoomedInStateParamsOverride:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
