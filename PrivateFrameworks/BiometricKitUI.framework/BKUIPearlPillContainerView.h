
@interface BKUIPearlPillContainerView : UIView {
    long long  _clockwise;
    long long  _counterwise;
    struct CGPoint { 
        double x; 
        double y; 
    }  _enrollViewCenter;
    bool  _hasPillStateStash;
    long long  _lastAngle;
    long long  _numberOfVisiblePillViews;
    NSMutableArray * _pillViews;
    double  _radius;
    bool  _squareNeedsPositionLayout;
    unsigned long long  _stashedPillStates;
    int  _state;
    LAUICheckmarkLayer * _successAnimation;
    <UITraitChangeRegistration> * _traitChangeRegistration;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } enrollViewCenter;
@property (nonatomic, readonly) double radius;
@property (nonatomic) bool squareNeedsPositionLayout;
@property (nonatomic) int state;
@property (nonatomic, retain) <UITraitChangeRegistration> *traitChangeRegistration;

- (void).cxx_destruct;
- (void)_animateToFinishedCompletion:(id /* block */)arg1;
- (long long)_indexForPillAtAngle:(double)arg1;
- (unsigned long long)_numberOfVisiblePillViews;
- (void)animateToState:(int)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (struct CGPoint { double x1; double x2; })enrollViewCenter;
- (bool)fillPillsAroundAngle:(double)arg1;
- (bool)fillPillsAroundAngle:(double)arg1 forTutorial:(bool)arg2;
- (id)init;
- (void)layoutSubviews;
- (double)percentOfPillsCompleted;
- (double)radius;
- (void)resetPillsAnimated:(bool)arg1;
- (void)setAllPillState:(unsigned long long)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setEnrollViewCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRadius:(double)arg1 center:(struct CGPoint { double x1; double x2; })arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)setSquareNeedsPositionLayout:(bool)arg1;
- (void)setState:(int)arg1;
- (void)setTraitChangeRegistration:(id)arg1;
- (bool)squareNeedsPositionLayout;
- (void)stashPillStates;
- (int)state;
- (id)traitChangeRegistration;
- (id)unfilledDirections;
- (void)unstashPillStatesAnimated:(bool)arg1;
- (bool)unstashPillStatesIfNeededAnimated:(bool)arg1;

@end
