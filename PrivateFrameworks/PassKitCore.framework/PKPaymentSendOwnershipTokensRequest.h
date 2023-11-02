
@interface PKPaymentSendOwnershipTokensRequest : PKPaymentWebServiceRequest {
    NSSet * _passOwnershipTokens;
    unsigned long long  _reason;
}

@property (nonatomic, retain) NSSet *passOwnershipTokens;
@property (nonatomic) unsigned long long reason;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 deviceMetadata:(id)arg3 appleAccountInformation:(id)arg4;
- (id)passOwnershipTokens;
- (unsigned long long)reason;
- (void)setPassOwnershipTokens:(id)arg1;
- (void)setReason:(unsigned long long)arg1;

@end
