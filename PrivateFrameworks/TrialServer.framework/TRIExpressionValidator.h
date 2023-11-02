
@interface TRIExpressionValidator : NSObject

- (bool)_validSystemCovariateFunction:(id)arg1;
- (bool)_validUserCovariateFunction:(id)arg1;
- (id)_validationErrorWithDetails:(id)arg1;
- (bool)validateExpression:(id)arg1 outError:(id*)arg2;
- (bool)validatePredicate:(id)arg1 outError:(id*)arg2;

@end
