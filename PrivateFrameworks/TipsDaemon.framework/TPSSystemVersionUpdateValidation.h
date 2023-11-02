
@interface TPSSystemVersionUpdateValidation : TPSTargetingValidation

- (bool)validateLastMajorSystemVersionUpdateSinceTimeInterval:(double)arg1 desiredOrder:(long long)arg2;
- (void)validateWithCompletion:(id /* block */)arg1;

@end
