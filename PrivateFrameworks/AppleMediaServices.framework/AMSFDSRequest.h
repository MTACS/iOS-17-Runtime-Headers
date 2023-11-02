
@interface AMSFDSRequest : NSObject <NSCopying, NSSecureCoding> {
    ACAccount * _account;
    NSString * _logKey;
    AMSFDSOptions * _options;
    NSNumber * _purchaseIdentifier;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, copy) NSString *logKey;
@property (nonatomic, readonly) AMSFDSOptions *options;
@property (nonatomic, readonly, copy) NSNumber *purchaseIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)account;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPurchaseIdentifier:(id)arg1 account:(id)arg2 options:(id)arg3;
- (id)logKey;
- (id)options;
- (id)purchaseIdentifier;
- (void)setLogKey:(id)arg1;

@end
