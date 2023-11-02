
@interface PKPeerPaymentRequestTokenRequest : PKPeerPaymentWebServiceRequest {
    NSDecimalNumber * _amount;
    NSString * _currency;
    NSString * _recipientIdentifier;
    NSString * _recipientPhoneOrEmail;
    NSString * _senderAddress;
    unsigned long long  _source;
}

@property (nonatomic, copy) NSDecimalNumber *amount;
@property (nonatomic, copy) NSString *currency;
@property (nonatomic, copy) NSString *recipientIdentifier;
@property (nonatomic, copy) NSString *recipientPhoneOrEmail;
@property (nonatomic, copy) NSString *senderAddress;
@property (nonatomic) unsigned long long source;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4 odiAssessment:(id)arg5 deviceMetadata:(id)arg6;
- (id)amount;
- (id)currency;
- (id)recipientIdentifier;
- (id)recipientPhoneOrEmail;
- (id)senderAddress;
- (void)setAmount:(id)arg1;
- (void)setCurrency:(id)arg1;
- (void)setRecipientIdentifier:(id)arg1;
- (void)setRecipientPhoneOrEmail:(id)arg1;
- (void)setSenderAddress:(id)arg1;
- (void)setSource:(unsigned long long)arg1;
- (unsigned long long)source;

@end
