
@interface BLSHPendingTwoPhaseUpdateDisplayMode : BLSHPendingUpdateDisplayMode {
    BLSHPendingTwoPhaseUpdateDisplayMode * _next;
    BLSHPendingTwoPhaseUpdateDisplayMode * _previous;
}

@property (retain) BLSHPendingTwoPhaseUpdateDisplayMode *next;
@property BLSHPendingTwoPhaseUpdateDisplayMode *previous;

- (void).cxx_destruct;
- (id)description;
- (id)first;
- (id)inProgressOperation;
- (bool)isFullyCompleted;
- (bool)isStarted;
- (bool)isTwoPhaseUpdate;
- (id)last;
- (id)next;
- (id)previous;
- (id)rampOperation;
- (void)setNext:(id)arg1;
- (void)setPrevious:(id)arg1;
- (id)updateOperation;

@end
