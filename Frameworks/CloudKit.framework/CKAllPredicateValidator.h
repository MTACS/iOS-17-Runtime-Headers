
@interface CKAllPredicateValidator : CKPredicateValidatorInstance {
    NSArray * _validators;
}

@property (nonatomic, retain) NSArray *validators;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)initWithValidators:(id)arg1;
- (void)setValidators:(id)arg1;
- (bool)validate:(id)arg1 error:(id*)arg2;
- (id)validators;

@end
