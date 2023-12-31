
@interface _UIImpactFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration {
    _UIFeedback<_UIFeedbackDiscretePlayable> * _feedback;
    id /* block */  _feedbackUpdateBlock;
    double  _minimumInterval;
}

@property (nonatomic, retain) _UIFeedback<_UIFeedbackDiscretePlayable> *feedback;
@property (nonatomic, copy) id /* block */ feedbackUpdateBlock;
@property (nonatomic) double minimumInterval;

+ (id)defaultConfiguration;
+ (id)lightConfiguration;
+ (id)rigidConfiguration;
+ (id)softConfiguration;
+ (id)strongConfiguration;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)feedback;
- (id)feedbackKeyPaths;
- (id /* block */)feedbackUpdateBlock;
- (bool)isEqual:(id)arg1;
- (double)minimumInterval;
- (long long)requiredSupportLevel;
- (void)setFeedback:(id)arg1;
- (void)setFeedbackUpdateBlock:(id /* block */)arg1;
- (void)setMinimumInterval:(double)arg1;

@end
