
@interface IKDataBindingLiteral : IKDataBindingValue {
    NSString * _literal;
}

@property (nonatomic, readonly) NSString *literal;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithLiteral:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)literal;

@end
