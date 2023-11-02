
@interface CAMViewfinderOpenAndCloseTransition : NSObject {
    CAMSnapshotView * __snapshotView;
    <CAMViewfinderTransitionable> * __transitionableViewfinder;
    bool  _didEnterBackground;
}

@property (setter=_setSnapshotView:, nonatomic, retain) CAMSnapshotView *_snapshotView;
@property (nonatomic, readonly) <CAMViewfinderTransitionable> *_transitionableViewfinder;
@property (nonatomic) bool didEnterBackground;

- (void).cxx_destruct;
- (void)_closeViewfinder:(bool)arg1 animated:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)_existingSnapshotViewCreateIfNecessary:(bool)arg1 removedOnCompletion:(bool)arg2;
- (void)_setSnapshotView:(id)arg1;
- (id)_snapshotView;
- (id)_transitionableViewfinder;
- (void)closeAnimated:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)closeWithoutBlurring;
- (bool)didEnterBackground;
- (id)initWithTransitionableViewfinder:(id)arg1;
- (void)openAnimated:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setDidEnterBackground:(bool)arg1;

@end
