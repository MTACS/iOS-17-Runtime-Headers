
@interface SPBeaconDescription : NSObject <NSCopying, NSSecureCoding> {
    NSString * _model;
    NSString * _name;
    long long  _productId;
    long long  _role;
    NSString * _stableIdentifier;
    NSString * _systemVersion;
    long long  _vendorId;
}

@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long productId;
@property (nonatomic) long long role;
@property (nonatomic, readonly, copy) NSString *stableIdentifier;
@property (nonatomic, copy) NSString *systemVersion;
@property (nonatomic) long long vendorId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStableIdentifier:(id)arg1 name:(id)arg2 model:(id)arg3 systemVersion:(id)arg4 vendorId:(long long)arg5 productId:(long long)arg6 role:(long long)arg7;
- (id)model;
- (id)name;
- (long long)productId;
- (long long)role;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setProductId:(long long)arg1;
- (void)setRole:(long long)arg1;
- (void)setSystemVersion:(id)arg1;
- (void)setVendorId:(long long)arg1;
- (id)stableIdentifier;
- (id)systemVersion;
- (long long)vendorId;

@end
