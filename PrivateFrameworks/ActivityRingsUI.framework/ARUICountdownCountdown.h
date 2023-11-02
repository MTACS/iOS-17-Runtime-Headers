
@interface ARUICountdownCountdown : ARUICountdownDefaultAnimation <ARUICountdownAnimation> {
    bool  _cancelable;
    double  _percent;
    unsigned long long  _step;
}

@property (nonatomic) double percent;

+ (id)identifier;

- (void)applyToCountdownView:(id)arg1 completion:(id /* block */)arg2;
- (bool)cancelable;
- (unsigned long long)countdownStep;
- (double)delay;
- (id)description;
- (double)duration;
- (id)identifier;
- (id)initWithPercent:(double)arg1 andStep:(unsigned long long)arg2 cancelable:(bool)arg3;
- (double)percent;
- (void)setPercent:(double)arg1;
- (id)timingFunction;

@end
