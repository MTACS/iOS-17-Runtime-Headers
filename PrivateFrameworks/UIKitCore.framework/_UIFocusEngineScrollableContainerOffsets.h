
@interface _UIFocusEngineScrollableContainerOffsets : NSObject {
    bool  _adjustsTargetsOnContentOffsetChanges;
    id /* block */  _completion;
    double  _convergenceRate;
    _UIFocusEnvironmentScrollableContainerTuple * _environmentScrollableContainer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastContentOffset;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastRoundedOffset;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastVelocity;
    <UIScrollViewDelegate> * _scrollDelegate;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startContentOffset;
    struct CGPoint { 
        double x; 
        double y; 
    }  _targetContentOffset;
}

@property (nonatomic) bool adjustsTargetsOnContentOffsetChanges;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic) double convergenceRate;
@property (nonatomic, retain) _UIFocusEnvironmentScrollableContainerTuple *environmentScrollableContainer;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastContentOffset;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastRoundedOffset;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastVelocity;
@property (nonatomic, retain) <UIScrollViewDelegate> *scrollDelegate;
@property (nonatomic) struct CGPoint { double x1; double x2; } startContentOffset;
@property (nonatomic) struct CGPoint { double x1; double x2; } targetContentOffset;

- (void).cxx_destruct;
- (bool)adjustsTargetsOnContentOffsetChanges;
- (id /* block */)completion;
- (double)convergenceRate;
- (id)environmentScrollableContainer;
- (struct CGPoint { double x1; double x2; })lastContentOffset;
- (struct CGPoint { double x1; double x2; })lastRoundedOffset;
- (struct CGPoint { double x1; double x2; })lastVelocity;
- (id)scrollDelegate;
- (void)setAdjustsTargetsOnContentOffsetChanges:(bool)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setConvergenceRate:(double)arg1;
- (void)setEnvironmentScrollableContainer:(id)arg1;
- (void)setLastContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLastRoundedOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLastVelocity:(struct CGPoint { double x1; double x2; })arg1;
- (void)setScrollDelegate:(id)arg1;
- (void)setStartContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTargetContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })startContentOffset;
- (struct CGPoint { double x1; double x2; })targetContentOffset;

@end
