
@interface OADBackgroundProperties : OADBackground {
    NSArray * mEffects;
    OADFill * mFill;
}

- (void).cxx_destruct;
- (id)effects;
- (id)fill;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setEffects:(id)arg1;
- (void)setFill:(id)arg1;

@end
