
@interface SSVCookieKey : NSObject <NSCopying> {
    NSNumber * _identifier;
    long long  _scope;
}

@property (nonatomic, copy) NSNumber *identifier;
@property (nonatomic) long long scope;

+ (id)keyWithIdentifier:(id)arg1 scope:(long long)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (long long)scope;
- (void)setIdentifier:(id)arg1;
- (void)setScope:(long long)arg1;

@end
