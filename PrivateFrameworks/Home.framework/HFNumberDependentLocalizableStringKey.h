
@interface HFNumberDependentLocalizableStringKey : HFLocalizableStringKey {
    long long  _integerArgument;
}

@property (nonatomic) long long integerArgument;

- (id)initWithKey:(id)arg1;
- (long long)integerArgument;
- (id)localizedStringWithArgumentBlock:(id /* block */)arg1;
- (void)setIntegerArgument:(long long)arg1;

@end
