
@interface WQAOverlayCoordinator : NSObject <BLSBacklightStateObserving> {
    NSArray * _currentShapeLayersForHint;
    <WQAOverlayDataSource> * _dataSource;
    NSMutableArray * _quickActionShapeLayers;
}

@property (nonatomic, retain) NSArray *currentShapeLayersForHint;
@property (nonatomic) <WQAOverlayDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *quickActionShapeLayers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_astFocusRingIsVisible;
- (id)_createNonAnimatingShapeLayerFromPath:(id)arg1;
- (id)_localizedBannerInstructionText;
- (void)_mainQueue_addAnimatedShapeLayerForQuickAction:(id)arg1;
- (void)_mainQueue_backlightDidTurnOff;
- (void)_mainQueue_backlightDidTurnOn;
- (void)_mainQueue_cleanupHintViews;
- (void)_mainQueue_cleanupShapeLayers;
- (void)_mainQueue_removeShapeLayer:(id)arg1;
- (void)_mainQueue_showHintsWithPrimaryQuickActions:(id)arg1 completion:(id /* block */)arg2;
- (void)_mainQueue_showUIForQuickActions:(id)arg1;
- (bool)_shouldShowHintsForQuickActions:(id)arg1;
- (void)animateConfirmationForQuickAction:(id)arg1 completion:(id /* block */)arg2;
- (void)backlight:(id)arg1 didCompleteUpdateToState:(long long)arg2 forEvent:(id)arg3;
- (id)currentShapeLayersForHint;
- (id)dataSource;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1;
- (id)quickActionShapeLayers;
- (void)refreshOverlaysIfNecessary;
- (void)setCurrentShapeLayersForHint:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setQuickActionShapeLayers:(id)arg1;
- (void)stopCurrentOverlays;

@end
