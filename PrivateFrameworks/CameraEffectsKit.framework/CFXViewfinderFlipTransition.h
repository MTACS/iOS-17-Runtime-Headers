
@interface CFXViewfinderFlipTransition : NSObject {
    CAMSnapshotView * __backSnapshotView;
    unsigned long long  __currentAnimationID;
    CAMSnapshotView * __frontSnapshotView;
    CAMSnapshotView * __targetSnapshotView;
    UIView * _viewfinderView;
}

@property (setter=_setBackSnapshotView:, nonatomic, retain) CAMSnapshotView *_backSnapshotView;
@property (setter=_setCurrentAnimationID:, nonatomic) unsigned long long _currentAnimationID;
@property (setter=_setFrontSnapshotView:, nonatomic, retain) CAMSnapshotView *_frontSnapshotView;
@property (setter=_setTargetSnapshotView:, nonatomic, retain) CAMSnapshotView *_targetSnapshotView;
@property (nonatomic) UIView *viewfinderView;

- (void).cxx_destruct;
- (double)_backSnapshotTargetRadiansForDirection:(long long)arg1 frontSnapshotRadians:(double)arg2;
- (id)_backSnapshotView;
- (void)_cleanupFromFlipTransition;
- (unsigned long long)_currentAnimationID;
- (double)_frontSnapshotTargetRadiansForDirection:(long long)arg1 fromRadians:(double)arg2;
- (id)_frontSnapshotView;
- (void)_getCurrentRadians:(out double*)arg1 targetRadians:(out double*)arg2 forDirection:(long long)arg3 withAnimation:(id)arg4 onFrontSnapshotLayer:(id)arg5;
- (void)_setBackSnapshotView:(id)arg1;
- (void)_setCurrentAnimationID:(unsigned long long)arg1;
- (void)_setFrontSnapshotView:(id)arg1;
- (void)_setTargetSnapshotView:(id)arg1;
- (id)_snapshotFlipAnimationFromValue:(double)arg1 toValue:(double)arg2;
- (id)_targetSnapshotView;
- (void)completeTransitionToLivePreviewWithCompletionHandler:(id /* block */)arg1;
- (id)initWithViewfinderView:(id)arg1;
- (void)performFlipTransitionWithDirection:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)setViewfinderView:(id)arg1;
- (id)viewfinderView;

@end
