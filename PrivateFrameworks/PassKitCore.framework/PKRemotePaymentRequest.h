
@interface PKRemotePaymentRequest : NSObject <NSSecureCoding> {
    PKRemoteDevice * _device;
    NSString * _identifier;
    PKPaymentRequest * _paymentRequest;
    NSString * _selectedApplicationIdentifier;
    unsigned long long  _selectedPaymentMethodType;
}

@property (nonatomic, readonly) PKRemoteDevice *device;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) PKPaymentRequest *paymentRequest;
@property (nonatomic, copy) NSString *selectedApplicationIdentifier;
@property (nonatomic) unsigned long long selectedPaymentMethodType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)device;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 identifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRemoteRequest:(id)arg1;
- (id)paymentRequest;
- (id)selectedApplicationIdentifier;
- (unsigned long long)selectedPaymentMethodType;
- (void)setPaymentRequest:(id)arg1;
- (void)setSelectedApplicationIdentifier:(id)arg1;
- (void)setSelectedPaymentMethodType:(unsigned long long)arg1;

@end
