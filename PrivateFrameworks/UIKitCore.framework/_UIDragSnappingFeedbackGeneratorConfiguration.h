
@interface _UIDragSnappingFeedbackGeneratorConfiguration : _UIDragFeedbackGeneratorConfiguration {
    _UIFeedback<_UIFeedbackDiscretePlayable> * _objectSnappedFeedback;
}

@property (nonatomic, retain) _UIFeedback<_UIFeedbackDiscretePlayable> *objectSnappedFeedback;

+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (id)feedbackKeyPaths;
- (id)objectSnappedFeedback;
- (void)setObjectSnappedFeedback:(id)arg1;

@end
