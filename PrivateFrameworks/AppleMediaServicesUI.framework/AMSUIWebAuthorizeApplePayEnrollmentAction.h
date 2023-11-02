
@interface AMSUIWebAuthorizeApplePayEnrollmentAction : AMSUIWebAction {
    NSNumber * _confirmationStyle;
    NSString * _passSerialNumber;
    NSString * _passTypeIdentifier;
    NSDictionary * _paymentSession;
}

@property (nonatomic, retain) NSNumber *confirmationStyle;
@property (nonatomic, retain) NSString *passSerialNumber;
@property (nonatomic, retain) NSString *passTypeIdentifier;
@property (nonatomic, retain) NSDictionary *paymentSession;

- (void).cxx_destruct;
- (id)confirmationStyle;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)passSerialNumber;
- (id)passTypeIdentifier;
- (id)paymentSession;
- (id)runAction;
- (void)setConfirmationStyle:(id)arg1;
- (void)setPassSerialNumber:(id)arg1;
- (void)setPassTypeIdentifier:(id)arg1;
- (void)setPaymentSession:(id)arg1;

@end
