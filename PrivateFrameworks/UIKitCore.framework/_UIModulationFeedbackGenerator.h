
@interface _UIModulationFeedbackGenerator : UIFeedbackGenerator {
    double  _currentValue;
    _UIFeedback<_UIFeedbackContinuousPlayable> * _playingContinuousFeedback;
}

@property (getter=_modulationConfiguration, nonatomic, readonly) _UIModulationFeedbackGeneratorConfiguration *modulationConfiguration;
@property (nonatomic, retain) _UIFeedback<_UIFeedbackContinuousPlayable> *playingContinuousFeedback;

+ (Class)_configurationClass;

- (void).cxx_destruct;
- (id)_modulationConfiguration;
- (id)_stats_key;
- (void)activateWithCompletionBlock:(id /* block */)arg1;
- (void)activateWithInitialValue:(double)arg1 completionBlock:(id /* block */)arg2;
- (void)deactivate;
- (id)playingContinuousFeedback;
- (void)setPlayingContinuousFeedback:(id)arg1;
- (void)valueUpdated:(double)arg1;

@end
