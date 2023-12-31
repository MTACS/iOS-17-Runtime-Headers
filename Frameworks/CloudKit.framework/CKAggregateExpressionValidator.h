
@interface CKAggregateExpressionValidator : CKPredicateValidatorInstance {
    NSArray * _subExpressionValidators;
}

@property (nonatomic, retain) NSArray *subExpressionValidators;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)initWithValidators:(id)arg1;
- (void)setSubExpressionValidators:(id)arg1;
- (id)subExpressionValidators;
- (bool)validate:(id)arg1 error:(id*)arg2;

@end
