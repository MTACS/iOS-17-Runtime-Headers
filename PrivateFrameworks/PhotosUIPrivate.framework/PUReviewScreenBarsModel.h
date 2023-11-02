
@interface PUReviewScreenBarsModel : PXObservable <PUMutableReviewScreenBarsModel> {
    bool  __needsUpdateAvailableControls;
    UIView * _accessoryView;
    NSSet * _availableControls;
    NSDictionary * _availableItemsByIdentifier;
    struct CGPoint { 
        double x; 
        double y; 
    }  _controlCenterAlignmentPoint;
    NSSet * _enabledControls;
    bool  _lastControlAlignmentChangeForcedLayout;
    bool  _shouldBarsCounterrotate;
    bool  _shouldPlaceScrubberInScrubberBar;
    bool  _transitioningWithCamera;
    bool  _useVerticalControlLayout;
}

@property (setter=_setNeedsUpdateAvailableControls:, nonatomic) bool _needsUpdateAvailableControls;
@property (nonatomic, readonly) UIView *accessoryView;
@property (setter=_setAvailableControls:, nonatomic, retain) NSSet *availableControls;
@property (nonatomic, readonly, copy) NSDictionary *availableItemsByIdentifier;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } controlCenterAlignmentPoint;
@property (setter=_setEnabledControls:, nonatomic, retain) NSSet *enabledControls;
@property (nonatomic, readonly) bool lastControlAlignmentChangeForcedLayout;
@property (nonatomic, readonly) bool shouldBarsCounterrotate;
@property (nonatomic, readonly) bool shouldPlaceScrubberInScrubberBar;
@property (getter=isTransitioningWithCamera, nonatomic, readonly) bool transitioningWithCamera;
@property (nonatomic, readonly) bool useVerticalControlLayout;

- (void).cxx_destruct;
- (bool)_needsUpdateAvailableControls;
- (void)_setAvailableControls:(id)arg1;
- (void)_setEnabledControls:(id)arg1;
- (void)_setNeedsUpdateAvailableControls:(bool)arg1;
- (void)_updateAvailableControls;
- (id)accessoryView;
- (id)availableControls;
- (id)availableItemsByIdentifier;
- (struct CGPoint { double x1; double x2; })controlCenterAlignmentPoint;
- (id)enabledControls;
- (void)invokeCallbackForBarButtonItemWithIdentifier:(long long)arg1;
- (bool)isTransitioningWithCamera;
- (bool)lastControlAlignmentChangeForcedLayout;
- (id)mutableChangeObject;
- (void)performChanges:(id /* block */)arg1;
- (void)setAccessoryView:(id)arg1;
- (void)setAvailableItemsByIdentifier:(id)arg1;
- (void)setControlCenterAlignmentPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setControlCenterAlignmentPoint:(struct CGPoint { double x1; double x2; })arg1 forceLayout:(bool)arg2;
- (void)setShouldBarsCounterrotate:(bool)arg1;
- (void)setShouldPlaceScrubberInScrubberBar:(bool)arg1;
- (void)setTransitioningWithCamera:(bool)arg1;
- (void)setUseVerticalControlLayout:(bool)arg1;
- (bool)shouldBarsCounterrotate;
- (bool)shouldPlaceScrubberInScrubberBar;
- (bool)useVerticalControlLayout;

@end
