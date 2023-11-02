
@interface PKPeerPaymentQuoteDynamicFraudContent : NSObject <NSSecureCoding> {
    NSString * _defaultButtonTitle;
    NSString * _header;
    NSString * _message;
    NSString * _otherButtonTitle;
}

@property (nonatomic, readonly, copy) NSString *defaultButtonTitle;
@property (nonatomic, readonly, copy) NSString *header;
@property (nonatomic, readonly, copy) NSString *message;
@property (nonatomic, readonly, copy) NSString *otherButtonTitle;

+ (id)dynamicFraudContentWithDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)defaultButtonTitle;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)header;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)message;
- (id)otherButtonTitle;

@end
