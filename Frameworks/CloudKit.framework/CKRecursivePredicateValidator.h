
@interface CKRecursivePredicateValidator : CKPredicateValidatorInstance {
    <CKObjectValidating> * _validator;
}

@property (nonatomic, retain) <CKObjectValidating> *validator;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)initWithValidator:(id)arg1;
- (void)setValidator:(id)arg1;
- (bool)validate:(id)arg1 error:(id*)arg2;
- (id)validator;

@end
