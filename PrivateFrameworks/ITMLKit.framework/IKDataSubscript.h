
@interface IKDataSubscript : IKDataAccessor {
    long long  _subscriptIndex;
}

@property (nonatomic, readonly) long long subscriptIndex;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithSubscriptIndex:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (long long)subscriptIndex;

@end
