
@interface CKComparisonOperatorValidator : CKPredicateValidatorInstance {
    unsigned long long  _operatorType;
}

@property (nonatomic) unsigned long long operatorType;

- (id)CKPropertiesDescription;
- (id)initWithOperatorType:(unsigned long long)arg1;
- (unsigned long long)operatorType;
- (void)setOperatorType:(unsigned long long)arg1;
- (bool)validate:(id)arg1 error:(id*)arg2;

@end
