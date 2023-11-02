
@interface IRConfiguration : NSObject <NSCopying, NSSecureCoding> {
    long long  _mode;
    IRServiceToken * _serviceToken;
}

@property (nonatomic) long long mode;
@property (nonatomic, readonly, copy) IRServiceToken *serviceToken;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceToken:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)mode;
- (id)serviceToken;
- (void)setMode:(long long)arg1;

@end
