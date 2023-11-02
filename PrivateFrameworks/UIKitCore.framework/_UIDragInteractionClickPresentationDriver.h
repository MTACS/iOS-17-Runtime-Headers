
@interface _UIDragInteractionClickPresentationDriver : _UIDragInteractionDriver {
    UIDelayedAction * _delayedLift;
    id /* block */  _itemIterator;
    id /* block */  _liftCompletion;
    id /* block */  _sessionHandler;
    NSSet * _touches;
}

- (void).cxx_destruct;
- (void)_performDelayedLift;
- (void)beginDragWithTouches:(id)arg1 itemIterator:(id /* block */)arg2 beginningSessionHandler:(id /* block */)arg3;
- (void)beginLiftAtLocation:(struct CGPoint { double x1; double x2; })arg1 useDefaultLiftAnimation:(bool)arg2 delay:(double)arg3 completion:(id /* block */)arg4;
- (bool)canBeginLiftAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)cancel;
- (void)didTransitionToBeginState;
- (void)didTransitionToInactiveState;
- (void)didTransitionToInflightState;
- (bool)isLifted;
- (bool)isPreparingToDrag;

@end
