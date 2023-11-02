
@interface PKPaymentRequestMerchantSessionUpdate : NSObject <NSSecureCoding> {
    PKPaymentMerchantSession * _session;
    long long  _status;
}

@property (nonatomic, retain) PKPaymentMerchantSession *session;
@property (nonatomic) long long status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatus:(long long)arg1 merchantSession:(id)arg2;
- (id)session;
- (void)setSession:(id)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;

@end
