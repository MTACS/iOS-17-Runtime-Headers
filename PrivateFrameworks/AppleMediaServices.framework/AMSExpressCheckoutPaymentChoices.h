
@interface AMSExpressCheckoutPaymentChoices : NSObject <NSSecureCoding> {
    void details;
    void eligibleCards;
    void managePaymentsParams;
    void metrics;
    void title;
    void useApplePayButtonEnum;
    void useApplePayButtonTitle;
    void useDifferentPaymentMethodButtonTitle;
}

@property (nonatomic, readonly) long long cardsCount;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, copy) NSDictionary *metrics;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)cardsCount;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEmpty;
- (id)metrics;
- (void)setMetrics:(id)arg1;

@end
