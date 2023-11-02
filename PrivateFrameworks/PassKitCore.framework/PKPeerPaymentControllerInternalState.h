
@interface PKPeerPaymentControllerInternalState : NSObject <NSSecureCoding> {
    NSString * accountName;
    NSString * accountNumber;
    unsigned long long  frequency;
    unsigned long long  mode;
    PKPeerPaymentPerformResponse * performQuoteResponse;
    PKPeerPaymentQuote * quote;
    PKPeerPaymentQuoteCertificatesResponse * quoteCertificatesResponse;
    PKPeerPaymentQuoteRequest * quoteRequest;
    PKPeerPaymentRecipient * recipient;
    NSString * recipientDisplayName;
    NSString * recipientPhoneOrEmail;
    NSString * recurringPaymentIdentifier;
    PKPeerPaymentRequestToken * requestToken;
    NSString * routingNumber;
    NSString * senderPhoneOrEmail;
    NSDate * startDate;
    unsigned long long  state;
    bool  supportsPreserveCurrentBalance;
    NSDecimalNumber * threshold;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPeerPaymentControllerInternalState:(id)arg1;

@end
