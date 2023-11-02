
@protocol _UIDragInteractionDriverDelegate <NSObject>

@required

- (void)dragDriver:(void *)arg1 beginDragWithTouches:(void *)arg2 itemUpdater:(void *)arg3 beginningSessionHandler:(void *)arg4; // needs 4 arg types, found 14: <_UIDragInteractionDriving> *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIDragItem *, void*, id /* block */, void*, void, id /* block */, <UIDragSession> *, void*
- (bool)dragDriver:(id <_UIDragInteractionDriving>)arg1 canExcludeCompetingGestureRecognizer:(UIGestureRecognizer *)arg2;
- (bool)dragDriver:(id <_UIDragInteractionDriving>)arg1 competingGestureRecognizerShouldDelayLift:(UIGestureRecognizer *)arg2;
- (bool)dragDriver:(void *)arg1 prepareToLiftWithCompletion:(void *)arg2; // needs 2 arg types, found 6: <_UIDragInteractionDriving> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)dragDriver:(id <_UIDragInteractionDriving>)arg1 shouldBeginAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (bool)dragDriver:(id <_UIDragInteractionDriving>)arg1 shouldDelayCompetingGestureRecognizer:(UIGestureRecognizer *)arg2;
- (bool)dragDriver:(id <_UIDragInteractionDriving>)arg1 shouldReceiveTouch:(UITouch *)arg2;
- (bool)dragDriverBeginLift:(id <_UIDragInteractionDriving>)arg1;
- (void)dragDriverCancelAddItemsGesture:(id <_UIDragInteractionDriving>)arg1;
- (void)dragDriverCancelLift:(id <_UIDragInteractionDriving>)arg1;
- (bool)dragDriverWantsExclusionOverride:(id <_UIDragInteractionDriving>)arg1;

@end
