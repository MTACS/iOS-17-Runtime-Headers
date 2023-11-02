
@interface SBIconListViewIconSizeChangeAnimator : SBIconListViewClusterAnimator <SBIconListLayoutAnimating> {
    NSMutableArray * _animationCompletionHandlers;
    SBHIconEditingSettings * _iconEditingSettings;
    SBIconView * _iconView;
    UIView * _priorIconImageSnapshotView;
    UIView * _snapshotContainerView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBHIconEditingSettings *iconEditingSettings;
@property (nonatomic, readonly) SBIconView *iconView;
@property (nonatomic, readonly) UIView *priorIconImageSnapshotView;
@property (nonatomic, retain) UIView *snapshotContainerView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addAnimationCompletionHandler:(id /* block */)arg1;
- (id)iconEditingSettings;
- (void)iconListView:(id)arg1 wantsAnimatedLayoutForIconView:(id)arg2 withParameters:(struct SBIconListLayoutAnimationParameters { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; struct SBIconImageInfo { struct CGSize { double x_1_2_1; double x_1_2_2; } x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; bool x4; struct SBIconCoordinate { long long x_5_1_1; long long x_5_1_2; } x5; bool x6; bool x7; unsigned long long x8; })arg3 alongsideAnimationBlock:(id /* block */)arg4;
- (id)iconView;
- (id)initWithIconView:(id)arg1 priorIconImageSnapshotView:(id)arg2;
- (void)prepareAnimationForListView:(id)arg1;
- (id)priorIconImageSnapshotView;
- (void)setSnapshotContainerView:(id)arg1;
- (id)snapshotContainerView;

@end
