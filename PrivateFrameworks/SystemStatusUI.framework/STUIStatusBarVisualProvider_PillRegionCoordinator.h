
@interface STUIStatusBarVisualProvider_PillRegionCoordinator : NSObject {
    STUIStatusBarDisplayItemPlacement * _backgroundActivityDetailPlacement;
    NSTimer * _backgroundActivityDetailTimer;
    STUIStatusBarDisplayItemPlacement * _pillIconPlacement;
    STUIStatusBarRegion * _pillRegion;
    <STUIStatusBarPillRegionVisualProvider> * _visualProvider;
    bool  _visualProviderImplementsBackgroundActivityPillAnimation;
}

@property (nonatomic, retain) STUIStatusBarDisplayItemPlacement *backgroundActivityDetailPlacement;
@property (nonatomic, retain) NSTimer *backgroundActivityDetailTimer;
@property (nonatomic, retain) STUIStatusBarDisplayItemPlacement *pillIconPlacement;
@property (nonatomic, retain) STUIStatusBarRegion *pillRegion;
@property (nonatomic) <STUIStatusBarPillRegionVisualProvider> *visualProvider;

- (void).cxx_destruct;
- (void)_hideActivityDetailAndUpdate:(bool)arg1;
- (void)_updateBackgroundActivityWithEntry:(id)arg1 timeEntry:(id)arg2 needsUpdate:(bool)arg3;
- (id)animationForBackgroundActivityIcon;
- (id)animationForBackgroundActivityPill;
- (id)animationForBackgroundActivityPillWithDuration:(double)arg1 scale:(double)arg2;
- (id)backgroundActivityDetailPlacement;
- (id)backgroundActivityDetailTimer;
- (bool)handledUpdateOfActionable:(id)arg1 highlighted:(bool)arg2 initialPress:(bool)arg3;
- (id)pillIconPlacement;
- (id)pillRegion;
- (void)setBackgroundActivityDetailPlacement:(id)arg1;
- (void)setBackgroundActivityDetailTimer:(id)arg1;
- (void)setPillIconPlacement:(id)arg1;
- (void)setPillRegion:(id)arg1;
- (void)setVisualProvider:(id)arg1;
- (void)updateDataForBackgroundActivity:(id)arg1;
- (void)updatePill;
- (void)updateRegion:(id)arg1 highlighted:(bool)arg2 initialPress:(bool)arg3 cornerRadius:(double)arg4;
- (id)visualProvider;

@end
