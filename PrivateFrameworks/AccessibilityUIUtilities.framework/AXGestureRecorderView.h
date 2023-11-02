
@interface AXGestureRecorderView : AXGestureRecorderGradientView <CAAnimationDelegate> {
    NSMutableDictionary * _activeLayers;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _constrainedBoundsForDrawing;
    <AXGestureRecorderViewDelegate> * _dataSource;
    UIColor * _dynamicFingerPathBackgroundGradientPatternColor;
    UIView * _dynamicFingerPathsContainerView;
    double  _freezeDryDrawPercentage;
    double  _freezeDryStartIndex;
    double  _freezeDryStartTime;
    NSMutableArray * _freezedDynamicPaths;
    UIAccessibilityCustomAction * _hideControlsAction;
    NSMutableDictionary * _instantReplayViews;
    NSMutableDictionary * _previouslyActiveLayersByInstantReplayFingerIndex;
    bool  _replayMode;
    UIAccessibilityCustomAction * _showControlsAction;
    NSMutableArray * _staticLayers;
    AXGestureRecorderStyleProvider * _styleProvider;
    NSMutableArray * _transitionLayers;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } constrainedBoundsForDrawing;
@property (nonatomic) <AXGestureRecorderViewDelegate> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIColor *dynamicFingerPathBackgroundGradientPatternColor;
@property (nonatomic, retain) UIView *dynamicFingerPathsContainerView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIAccessibilityCustomAction *hideControlsAction;
@property (nonatomic, retain) NSMutableDictionary *previouslyActiveLayersByInstantReplayFingerIndex;
@property (nonatomic) bool replayMode;
@property (nonatomic, retain) UIAccessibilityCustomAction *showControlsAction;
@property (nonatomic, retain) AXGestureRecorderStyleProvider *styleProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)_dynamicFingerPathAtIndex:(unsigned long long)arg1;
- (void)_hideControls;
- (void)_performTransitionToStaticFingers:(id)arg1 transitionLayers:(id)arg2 hasExistingStaticFingers:(bool)arg3;
- (void)_showControls;
- (id)accessibilityCustomActions;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)clearInstantReplayFingerPaths;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })constrainedBoundsForDrawing;
- (id)dataSource;
- (void)deleteAllFingerPaths;
- (void)didMoveToWindow;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)dynamicFingerPathBackgroundGradientPatternColor;
- (id)dynamicFingerPathsContainerView;
- (void)fingerPathDidChange:(unsigned long long)arg1;
- (void)finishInstantReplayAtIndex:(unsigned long long)arg1;
- (void)freezeAllDynamicFingerPaths;
- (void)freezeAllDynamicFingerPathsWithInstantReplayOffset:(unsigned long long)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)hideControlsAction;
- (void)hideStaticView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)insertDynamicFingerPathAtIndex:(unsigned long long)arg1;
- (bool)isAccessibilityElement;
- (id)previouslyActiveLayersByInstantReplayFingerIndex;
- (void)reloadDynamicFingerPathAtIndex:(unsigned long long)arg1;
- (bool)replayMode;
- (void)setConstrainedBoundsForDrawing:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDataSource:(id)arg1;
- (void)setDynamicFingerPathBackgroundGradientPatternColor:(id)arg1;
- (void)setDynamicFingerPathsContainerView:(id)arg1;
- (void)setHideControlsAction:(id)arg1;
- (void)setPreviouslyActiveLayersByInstantReplayFingerIndex:(id)arg1;
- (void)setReplayMode:(bool)arg1;
- (void)setShowControlsAction:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (id)showControlsAction;
- (id)styleProvider;
- (void)updateInstantReplayAtIndex:(unsigned long long)arg1 withPartialPath:(id)arg2;

@end
