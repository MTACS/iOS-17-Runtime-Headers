
@interface PKPaymentAuthorizationResult : NSObject <NSSecureCoding> {
    NSArray * _errors;
    NSString * _localizedErrorMessageOverride;
    PKPaymentOrderDetails * _orderDetails;
    PKPeerPaymentTransactionMetadata * _peerPaymentTransactionMetadata;
    long long  _resultSource;
    long long  _status;
}

@property (nonatomic, copy) NSArray *errors;
@property (nonatomic, copy) NSString *localizedErrorMessageOverride;
@property (nonatomic, retain) PKPaymentOrderDetails *orderDetails;
@property (nonatomic, retain) PKPeerPaymentTransactionMetadata *peerPaymentTransactionMetadata;
@property (nonatomic) long long resultSource;
@property (nonatomic) long long status;

+ (id)sanitizedErrors:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)errors;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatus:(long long)arg1 errors:(id)arg2;
- (id)localizedErrorMessageOverride;
- (id)orderDetails;
- (id)peerPaymentTransactionMetadata;
- (long long)resultSource;
- (void)setErrors:(id)arg1;
- (void)setLocalizedErrorMessageOverride:(id)arg1;
- (void)setOrderDetails:(id)arg1;
- (void)setPeerPaymentTransactionMetadata:(id)arg1;
- (void)setResultSource:(long long)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;

@end
