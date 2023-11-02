
@interface PKPaymentClientUpdate : NSObject <NSSecureCoding> {
    PKAutomaticReloadPaymentRequest * _automaticReloadPaymentRequest;
    PKDeferredPaymentRequest * _deferredPaymentRequest;
    NSArray * _multiTokenContexts;
    NSArray * _paymentSummaryItems;
    PKRecurringPaymentRequest * _recurringPaymentRequest;
    NSString * _selectedAID;
    unsigned long long  _selectedPaymentMethodType;
    PKShippingMethods * _shippingMethods;
    long long  _status;
}

@property (nonatomic, readonly) PKAutomaticReloadPaymentRequest *automaticReloadPaymentRequest;
@property (nonatomic, readonly) PKDeferredPaymentRequest *deferredPaymentRequest;
@property (nonatomic, readonly, copy) NSArray *multiTokenContexts;
@property (nonatomic, readonly, copy) NSArray *paymentSummaryItems;
@property (nonatomic, readonly) PKRecurringPaymentRequest *recurringPaymentRequest;
@property (nonatomic, readonly, copy) NSString *selectedAID;
@property (nonatomic, readonly) unsigned long long selectedPaymentMethodType;
@property (nonatomic, readonly, copy) PKShippingMethods *shippingMethods;
@property (nonatomic, readonly) long long status;

+ (id)paymentUpdateResponseWithProtobuf:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)automaticReloadPaymentRequest;
- (id)deferredPaymentRequest;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaymentSummaryItems:(id)arg1 shippingMethods:(id)arg2 multiTokenContexts:(id)arg3 recurringPaymentRequest:(id)arg4 automaticReloadPaymentRequest:(id)arg5 deferredPaymentRequest:(id)arg6 status:(long long)arg7 selectedAID:(id)arg8 selectedPaymentMethodType:(unsigned long long)arg9;
- (id)multiTokenContexts;
- (id)paymentSummaryItems;
- (id)protobuf;
- (id)recurringPaymentRequest;
- (id)selectedAID;
- (unsigned long long)selectedPaymentMethodType;
- (id)shippingMethods;
- (long long)status;

@end
