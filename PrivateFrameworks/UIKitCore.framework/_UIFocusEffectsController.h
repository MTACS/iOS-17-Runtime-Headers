
@interface _UIFocusEffectsController : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _currentOffset;
    double  _displayMovementAdjustment;
    struct CGPoint { 
        double x; 
        double y; 
    }  _displayOffset;
    bool  _displayOffsetAccumulatorEnabled;
    NSHashTable * _observers;
    _UIDynamicValueConvergenceAnimation * _rollbackAnimation;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } currentOffset;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } displayOffset;
@property (nonatomic) bool displayOffsetAccumulatorEnabled;

- (void).cxx_destruct;
- (void)_notifyObserversForMovementDirection:(struct CGVector { double x1; double x2; })arg1;
- (void)addObserver:(id)arg1;
- (void)adjustDisplayOffsetAccumulationFactorForFocusTransfer;
- (void)cancelRollbackAnimation;
- (struct CGPoint { double x1; double x2; })currentOffset;
- (struct CGPoint { double x1; double x2; })displayOffset;
- (bool)displayOffsetAccumulatorEnabled;
- (id)init;
- (void)removeObserver:(id)arg1;
- (void)reset;
- (void)resetDisplayOffsetAccumulationFactor;
- (void)setDisplayOffsetAccumulatorEnabled:(bool)arg1;
- (void)startRollbackAnimation;
- (void)updateCurrentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateCurrentOffset:(struct CGPoint { double x1; double x2; })arg1 overrideDisplayOffset:(id)arg2;

@end
