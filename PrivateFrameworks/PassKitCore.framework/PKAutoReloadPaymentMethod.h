
@interface PKAutoReloadPaymentMethod : NSObject <NSSecureCoding> {
    NSString * _fpanIdentifier;
    NSString * _imageName;
    NSURL * _managementURL;
    NSString * _merchantTokenIdentifier;
    NSString * _name;
    NSString * _suffix;
    unsigned long long  _type;
}

@property (nonatomic, retain) NSString *fpanIdentifier;
@property (nonatomic, retain) NSString *imageName;
@property (nonatomic, retain) NSURL *managementURL;
@property (nonatomic, retain) NSString *merchantTokenIdentifier;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *suffix;
@property (nonatomic) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fpanIdentifier;
- (id)imageName;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)managementURL;
- (id)merchantTokenIdentifier;
- (id)name;
- (void)setFpanIdentifier:(id)arg1;
- (void)setImageName:(id)arg1;
- (void)setManagementURL:(id)arg1;
- (void)setMerchantTokenIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSuffix:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)suffix;
- (unsigned long long)type;

@end
