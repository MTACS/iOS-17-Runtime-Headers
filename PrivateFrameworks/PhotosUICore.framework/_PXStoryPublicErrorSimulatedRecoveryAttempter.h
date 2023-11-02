
@interface _PXStoryPublicErrorSimulatedRecoveryAttempter : _PXStoryPublicErrorRecoveryAttempter

@property (nonatomic, readonly) NSArray *recoveryOptions;

- (bool)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (id)recoveryOptions;

@end
