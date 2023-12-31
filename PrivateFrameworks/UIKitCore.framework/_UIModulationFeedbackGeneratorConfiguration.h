
@interface _UIModulationFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration {
    _UIFeedback<_UIFeedbackContinuousPlayable> * _feedback;
    id /* block */  _feedbackUpdateBlock;
}

@property (nonatomic, retain) _UIFeedback<_UIFeedbackContinuousPlayable> *feedback;
@property (nonatomic, copy) id /* block */ feedbackUpdateBlock;

+ (id)defaultConfiguration;
+ (id)sliderConfiguration;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)feedback;
- (id)feedbackKeyPaths;
- (id /* block */)feedbackUpdateBlock;
- (long long)requiredSupportLevel;
- (void)setFeedback:(id)arg1;
- (void)setFeedbackUpdateBlock:(id /* block */)arg1;

@end
