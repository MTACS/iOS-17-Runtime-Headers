
@interface CKFunctionExpressionValidator : CKPredicateValidatorInstance {
    NSArray * _argumentValidators;
    NSString * _functionName;
}

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (bool)validate:(id)arg1 error:(id*)arg2;

@end
