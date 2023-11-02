
@interface WFWalletMerchant : NSObject <NSCopying, NSSecureCoding> {
    NSString * _displayName;
    NSURL * _logoURL;
    unsigned long long  _merchantType;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSURL *logoURL;
@property (nonatomic, readonly) unsigned long long merchantType;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayName:(id)arg1 uniqueIdentifier:(id)arg2 logoURL:(id)arg3 merchantType:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (id)logoURL;
- (unsigned long long)merchantType;
- (id)uniqueIdentifier;

@end
