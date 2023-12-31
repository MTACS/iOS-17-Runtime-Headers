
@interface PKPaymentHostUpdate : NSObject <NSSecureCoding> {
    PKPaymentMethod * _paymentMethod;
    PKContact * _shippingContact;
    PKShippingMethod * _shippingMethod;
}

@property (nonatomic, readonly) PKPaymentMethod *paymentMethod;
@property (nonatomic, readonly) PKContact *shippingContact;
@property (nonatomic, readonly) PKShippingMethod *shippingMethod;

+ (id)paymentUpdateWithProtobuf:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1 shippingMethod:(id)arg2 paymentMethod:(id)arg3;
- (id)paymentMethod;
- (id)protobuf;
- (id)shippingContact;
- (id)shippingMethod;

@end
