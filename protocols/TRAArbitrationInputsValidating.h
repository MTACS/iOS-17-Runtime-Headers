
@protocol TRAArbitrationInputsValidating <NSObject>

@required

- (TRAArbitrationInputs *)validateInputs:(TRAArbitrationInputs *)arg1 withContext:(TRAInputsValidationContext *)arg2;
- (NSNumber *)validatorOrder;

@end
