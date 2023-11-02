
@interface PKPaymentRequestUpdate : NSObject <NSSecureCoding> {
    PKAutomaticReloadPaymentRequest * _automaticReloadPaymentRequest;
    PKShippingMethods * _availableShippingMethods;
    NSArray * _contentItems;
    PKDeferredPaymentRequest * _deferredPaymentRequest;
    NSArray * _multiTokenContexts;
    NSArray * _paymentSummaryItems;
    PKRecurringPaymentRequest * _recurringPaymentRequest;
    long long  _status;
}

@property (nonatomic, retain) PKAutomaticReloadPaymentRequest *automaticReloadPaymentRequest;
@property (nonatomic, copy) PKShippingMethods *availableShippingMethods;
@property (nonatomic, copy) NSArray *contentItems;
@property (nonatomic, retain) PKDeferredPaymentRequest *deferredPaymentRequest;
@property (nonatomic, copy) NSArray *multiTokenContexts;
@property (nonatomic, copy) NSArray *paymentSummaryItems;
@property (nonatomic, retain) PKRecurringPaymentRequest *recurringPaymentRequest;
@property (nonatomic, copy) NSArray *shippingMethods;
@property (nonatomic) long long status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)automaticReloadPaymentRequest;
- (id)availableShippingMethods;
- (id)contentItems;
- (id)deferredPaymentRequest;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaymentSummaryItems:(id)arg1;
- (id)multiTokenContexts;
- (id)paymentSummaryItems;
- (id)recurringPaymentRequest;
- (void)setAutomaticReloadPaymentRequest:(id)arg1;
- (void)setAvailableShippingMethods:(id)arg1;
- (void)setContentItems:(id)arg1;
- (void)setDeferredPaymentRequest:(id)arg1;
- (void)setMultiTokenContexts:(id)arg1;
- (void)setPaymentSummaryItems:(id)arg1;
- (void)setRecurringPaymentRequest:(id)arg1;
- (void)setShippingMethods:(id)arg1;
- (void)setStatus:(long long)arg1;
- (id)shippingMethods;
- (long long)status;

@end
