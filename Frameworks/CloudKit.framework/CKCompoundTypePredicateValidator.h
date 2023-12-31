
@interface CKCompoundTypePredicateValidator : CKPredicateValidatorInstance {
    unsigned long long  _type;
}

@property (nonatomic) unsigned long long type;

- (id)CKPropertiesDescription;
- (id)initWithType:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;
- (bool)validate:(id)arg1 error:(id*)arg2;

@end
