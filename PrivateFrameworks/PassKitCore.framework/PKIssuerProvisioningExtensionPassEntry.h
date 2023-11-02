
@interface PKIssuerProvisioningExtensionPassEntry : NSObject {
    struct CGImage { } * _art;
    NSString * _identifier;
    NSString * _title;
    long long  _type;
}

@property (nonatomic, readonly) struct CGImage { }*art;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithType:(long long)arg1 identifier:(id)arg2 title:(id)arg3 art:(struct CGImage { }*)arg4;
- (bool)_isEqualToEntry:(id)arg1;
- (struct CGImage { }*)art;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)paymentPassEntry;
- (void)setType:(long long)arg1;
- (id)title;
- (long long)type;

@end
