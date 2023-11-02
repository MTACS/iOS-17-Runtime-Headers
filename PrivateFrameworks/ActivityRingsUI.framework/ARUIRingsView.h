
@interface ARUIRingsView : UIView <ARUIRingGroupDelegate> {
    bool  _backgrounded;
    bool  _discardBackBuffers;
    double  _emptyRingAlpha;
    UIImage * _iconSpriteImage;
    unsigned long long  _iconTextureColumns;
    unsigned long long  _iconTextureRows;
    bool  _inViewHierarchy;
    bool  _paused;
    long long  _preferredFramesPerSecond;
    ARUIRenderContext * _renderContext;
    ARUIRenderer * _renderer;
    NSArray * _ringGroupControllers;
    NSArray * _ringGroups;
    bool  _shouldBypassApplicationStateChecking;
    bool  _shouldCheckDrawableAvailable;
    bool  _shouldRenderOnLayout;
    bool  _viewIsVisible;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool discardBackBuffers;
@property (nonatomic) double emptyRingAlpha;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *iconSpriteImage;
@property (nonatomic) unsigned long long iconTextureColumns;
@property (nonatomic) unsigned long long iconTextureRows;
@property (nonatomic, readonly) CAMetalLayer *metalLayer;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic) long long preferredFramesPerSecond;
@property (nonatomic, readonly) ARUIRenderer *renderer;
@property (nonatomic, readonly) ARUIRingGroup *ringGroup;
@property (nonatomic, readonly) ARUIRingGroupController *ringGroupController;
@property (nonatomic, readonly) NSArray *ringGroupControllers;
@property (nonatomic) bool shouldBypassApplicationStateChecking;
@property (nonatomic) bool shouldCheckDrawableAvailable;
@property (nonatomic) bool shouldRenderOnLayout;
@property (nonatomic, readonly) UIImage *snapshot;
@property (readonly) Class superclass;
@property (nonatomic) bool synchronizesWithCA;
@property (nonatomic, readonly) bool viewIsVisible;

// Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI

+ (void)clearSharedCaches;
+ (Class)layerClass;
+ (id)ringsViewConfiguredForCompanionOfType:(long long)arg1 withRenderer:(id)arg2;
+ (id)ringsViewConfiguredForOneRingOnCompanionOfType:(long long)arg1;
+ (id)ringsViewConfiguredForOneRingOnWatchOfType:(long long)arg1;
+ (id)ringsViewConfiguredForOneRingOnWatchOfType:(long long)arg1 withIcon:(bool)arg2;
+ (id)ringsViewConfiguredForOneRingOnWatchOfType:(long long)arg1 withRenderer:(id)arg2;
+ (id)ringsViewConfiguredForThreeRingsOnCompanion;
+ (id)ringsViewConfiguredForThreeRingsOnCompanionWithRenderer:(id)arg1;
+ (id)ringsViewConfiguredForThreeRingsOnWatch;
+ (id)ringsViewConfiguredForThreeRingsOnWatchWithRenderer:(id)arg1;
+ (id)ringsViewConfiguredForWatchOfType:(long long)arg1 withIcon:(bool)arg2 renderer:(id)arg3;

- (void).cxx_destruct;
- (id)_allRings;
- (id)_anySpriteSheet;
- (void)_didEnterBackground:(id)arg1;
- (void)_discardBackBuffers;
- (void)_sharedInitWithRingGroups:(id)arg1 renderer:(id)arg2;
- (void)_sharedInitWithWithRingGroupControllers:(id)arg1 renderer:(id)arg2;
- (bool)_shouldAllowRendering;
- (void)_updateRenderContext;
- (void)_updateRingGroupPauseState;
- (void)_willEnterForeground:(id)arg1;
- (bool)discardBackBuffers;
- (double)emptyRingAlpha;
- (id)iconSpriteImage;
- (unsigned long long)iconTextureColumns;
- (unsigned long long)iconTextureRows;
- (id)initWithRingGroup:(id)arg1;
- (id)initWithRingGroup:(id)arg1 renderer:(id)arg2;
- (id)initWithRingGroupController:(id)arg1;
- (id)initWithRingGroupController:(id)arg1 renderer:(id)arg2;
- (id)initWithRingGroupControllers:(id)arg1;
- (id)initWithRingGroupControllers:(id)arg1 renderer:(id)arg2;
- (id)initWithRingGroups:(id)arg1;
- (id)initWithRingGroups:(id)arg1 renderer:(id)arg2;
- (bool)isPaused;
- (void)layoutSubviews;
- (id)metalLayer;
- (long long)preferredFramesPerSecond;
- (id)renderer;
- (id)ringGroup;
- (id)ringGroupController;
- (id)ringGroupControllers;
- (void)ringGroupHasUpdated:(id)arg1;
- (id)ringGroups;
- (void)setActiveEnergyPercentage:(double)arg1 animated:(bool)arg2;
- (void)setActiveEnergyPercentage:(double)arg1 briskPercentage:(double)arg2 movingHoursPercentage:(double)arg3 animated:(bool)arg4 completion:(id /* block */)arg5;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBriskPercentage:(double)arg1 animated:(bool)arg2;
- (void)setContentMode:(long long)arg1;
- (void)setDiscardBackBuffers:(bool)arg1;
- (void)setEmptyRingAlpha:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIconSpriteImage:(id)arg1;
- (void)setIconTextureColumns:(unsigned long long)arg1;
- (void)setIconTextureRows:(unsigned long long)arg1;
- (void)setMovingHoursPercentage:(double)arg1 animated:(bool)arg2;
- (void)setOpaque:(bool)arg1;
- (void)setPaused:(bool)arg1;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (void)setShouldBypassApplicationStateChecking:(bool)arg1;
- (void)setShouldCheckDrawableAvailable:(bool)arg1;
- (void)setShouldRenderOnLayout:(bool)arg1;
- (void)setSynchronizesWithCA:(bool)arg1;
- (bool)shouldBypassApplicationStateChecking;
- (bool)shouldCheckDrawableAvailable;
- (bool)shouldRenderOnLayout;
- (id)snapshot;
- (bool)synchronizesWithCA;
- (bool)viewIsVisible;
- (void)willMoveToWindow:(id)arg1;

// Image: /System/Library/Frameworks/HealthKitUI.framework/HealthKitUI

- (void)hk_configureWithActivitySummary:(id)arg1 animated:(bool)arg2;
- (void)hk_configureWithActivitySummary:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;

@end
