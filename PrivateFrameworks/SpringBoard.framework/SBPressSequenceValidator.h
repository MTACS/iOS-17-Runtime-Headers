
@interface SBPressSequenceValidator : NSObject {
    SBPressSequenceSettings * _settings;
}

@property (nonatomic, readonly) SBPressSequenceSettings *settings;

- (void).cxx_destruct;
- (long long)_modeForDesiredIndex:(unsigned long long)arg1 isDownEvent:(bool)arg2;
- (struct _SBPressSequenceValidatorBounds { double x1; double x2; })_pressDownBoundsForDesiredIndex:(unsigned long long)arg1 sequence:(id)arg2;
- (struct _SBPressSequenceValidatorBounds { double x1; double x2; })_pressUpBoundsForDesiredIndex:(unsigned long long)arg1 sequence:(id)arg2;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (bool)pressEventIsValidInSequence:(id)arg1 endingDownEvent:(bool)arg2 duration:(double)arg3;
- (id)settings;
- (double)timeUntilNextPressEventIsInValidInSequence:(id)arg1 lastPressEventInSequenceIsDown:(bool)arg2;

@end
