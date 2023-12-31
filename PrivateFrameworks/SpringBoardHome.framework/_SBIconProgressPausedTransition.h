
@interface _SBIconProgressPausedTransition : _SBIconProgressTransition {
    double  _duration;
    double  _fraction;
    CAMediaTimingFunction * _timingFunction;
    bool  _toPaused;
    double  _totalElapsedTime;
}

+ (id)newTransitionToPaused:(bool)arg1;

- (void).cxx_destruct;
- (id)_initToPaused:(bool)arg1;
- (void)_updateElapsedTimeFromFraction;
- (void)_updateTimingFunction;
- (void)_updateView:(id)arg1;
- (void)completeTransitionAndUpdateView:(id)arg1;
- (bool)isCompleteWithView:(id)arg1;
- (void)updateToPaused:(bool)arg1;
- (void)updateView:(id)arg1 withElapsedTime:(double)arg2;

@end
