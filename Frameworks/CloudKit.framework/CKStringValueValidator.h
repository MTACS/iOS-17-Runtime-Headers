
@interface CKStringValueValidator : CKPredicateValidatorInstance {
    NSString * _value;
}

@property (nonatomic, retain) NSString *value;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)initWithValue:(id)arg1;
- (void)setValue:(id)arg1;
- (bool)validate:(id)arg1 error:(id*)arg2;
- (id)value;

@end
