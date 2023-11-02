
@interface AMSPaymentVerificationTokenResult : NSObject <NSSecureCoding> {
    NSData * _tokenData;
}

@property (nonatomic, readonly) NSData *tokenData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTokenData:(id)arg1;
- (id)tokenData;

@end
