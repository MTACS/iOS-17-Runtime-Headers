
@interface EPBorder : EDBorder {
    unsigned long long  mPrecedence;
}

+ (id)borderWithBorder:(id)arg1 precedence:(unsigned long long)arg2 resources:(id)arg3;

- (id)initWithBorder:(id)arg1 precedence:(unsigned long long)arg2 resources:(id)arg3;
- (bool)isEqualToBorder:(id)arg1;
- (unsigned long long)precedence;

@end
