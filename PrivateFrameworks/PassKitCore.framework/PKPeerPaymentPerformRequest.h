
@interface PKPeerPaymentPerformRequest : PKPeerPaymentWebServiceRequest {
    NSString * _accountNumber;
    NSDictionary * _certificates;
    PKContact * _contact;
    NSString * _cryptogramType;
    unsigned long long  _destination;
    NSString * _passSerialNumber;
    NSString * _passTypeIdentifier;
    NSData * _paymentData;
    NSString * _pushToken;
    NSString * _quoteIdentifier;
    NSString * _recipientPhoneOrEmail;
    NSString * _routingNumber;
    NSData * _signedEnrollmentDataSignature;
}

@property (nonatomic, retain) NSString *accountNumber;
@property (nonatomic, copy) NSDictionary *certificates;
@property (nonatomic, retain) PKContact *contact;
@property (nonatomic, copy) NSString *cryptogramType;
@property (nonatomic) unsigned long long destination;
@property (nonatomic, copy) NSString *passSerialNumber;
@property (nonatomic, copy) NSString *passTypeIdentifier;
@property (nonatomic, copy) NSData *paymentData;
@property (nonatomic, copy) NSString *pushToken;
@property (nonatomic, copy) NSString *quoteIdentifier;
@property (nonatomic, copy) NSString *recipientPhoneOrEmail;
@property (nonatomic, retain) NSString *routingNumber;
@property (nonatomic, copy) NSData *signedEnrollmentDataSignature;

+ (id)requestWithAuthorizedPeerPaymentQuote:(id)arg1;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4 odiAssessment:(id)arg5 deviceMetadata:(id)arg6;
- (id)accountNumber;
- (id)certificates;
- (id)contact;
- (id)cryptogramType;
- (unsigned long long)destination;
- (id)passSerialNumber;
- (id)passTypeIdentifier;
- (id)paymentData;
- (id)pushToken;
- (id)quoteIdentifier;
- (id)recipientPhoneOrEmail;
- (id)routingNumber;
- (void)setAccountNumber:(id)arg1;
- (void)setCertificates:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setCryptogramType:(id)arg1;
- (void)setDestination:(unsigned long long)arg1;
- (void)setPassSerialNumber:(id)arg1;
- (void)setPassTypeIdentifier:(id)arg1;
- (void)setPaymentData:(id)arg1;
- (void)setPushToken:(id)arg1;
- (void)setQuoteIdentifier:(id)arg1;
- (void)setRecipientPhoneOrEmail:(id)arg1;
- (void)setRoutingNumber:(id)arg1;
- (void)setSignedEnrollmentDataSignature:(id)arg1;
- (id)signedEnrollmentDataSignature;

@end
