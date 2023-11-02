
@interface MNNavigationServiceCallback_DidUpdateStepIndex : MNNavigationServiceCallbackParameters {
    unsigned long long  _segmentIndex;
    unsigned long long  _stepIndex;
}

@property (nonatomic) unsigned long long segmentIndex;
@property (nonatomic) unsigned long long stepIndex;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)segmentIndex;
- (void)setSegmentIndex:(unsigned long long)arg1;
- (void)setStepIndex:(unsigned long long)arg1;
- (unsigned long long)stepIndex;
- (unsigned long long)type;

@end
