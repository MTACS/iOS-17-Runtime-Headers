
@interface IKDataProperty : IKDataAccessor {
    NSString * _property;
}

@property (nonatomic, readonly) NSString *property;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithProperty:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)property;

@end
