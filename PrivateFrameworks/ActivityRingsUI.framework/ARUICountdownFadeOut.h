
@interface ARUICountdownFadeOut : ARUICountdownDefaultAnimation <ARUICountdownAnimation>

+ (id)identifier;

- (void)applyToCountdownView:(id)arg1 completion:(id /* block */)arg2;
- (bool)cancelable;
- (double)delay;
- (double)duration;
- (id)identifier;
- (id)timingFunction;

@end
