
@interface PKPaymentRequirementsRequest : PKPaymentWebServiceRequest {
    NSString * _cardholderName;
    NSData * _challengeResponse;
    PKDSPContext * _context;
    NSData * _cryptogram;
    NSString * _passOwnershipToken;
    PKPaymentCredential * _paymentCredential;
    NSString * _primaryAccountNumber;
    NSString * _referrerIdentifier;
    NSString * _region;
    bool  _sendReducedDeviceData;
}

@property (nonatomic, copy) NSString *cardholderName;
@property (nonatomic, copy) NSData *challengeResponse;
@property (nonatomic, copy) PKDSPContext *context;
@property (nonatomic, copy) NSData *cryptogram;
@property (nonatomic, copy) NSString *passOwnershipToken;
@property (nonatomic, retain) PKPaymentCredential *paymentCredential;
@property (nonatomic, copy) NSString *primaryAccountNumber;
@property (nonatomic, copy) NSString *referrerIdentifier;
@property (nonatomic, retain) NSString *region;
@property (nonatomic) bool sendReducedDeviceData;

- (void).cxx_destruct;
- (id)_archivedDataForEncryptedDataDictionary:(id)arg1;
- (id)_cardDictionary;
- (void)_cardDictionaryForDeviceData:(id)arg1 inWebService:(id)arg2 includingDeviceScore:(bool)arg3 withCompletion:(id /* block */)arg4;
- (void)_deviceScoreUsingWebService:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_encryptedDataWithDeviceData:(id)arg1 certChain:(id)arg2 devSigned:(bool)arg3 includeDeviceScore:(bool)arg4 inWebService:(id)arg5 withCompletion:(id /* block */)arg6;
- (void)_updateContextUsingWebService:(id)arg1 completion:(id /* block */)arg2;
- (void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 certChain:(id)arg4 devSigned:(bool)arg5 deviceData:(id)arg6 webService:(id)arg7 completion:(id /* block */)arg8;
- (id)cardholderName;
- (id)challengeResponse;
- (id)context;
- (id)cryptogram;
- (id)initWithCardholderName:(id)arg1 primaryAccountNumber:(id)arg2;
- (id)initWithPaymentCredential:(id)arg1;
- (id)passOwnershipToken;
- (id)paymentCredential;
- (id)primaryAccountNumber;
- (id)referrerIdentifier;
- (id)region;
- (bool)sendReducedDeviceData;
- (void)setCardholderName:(id)arg1;
- (void)setChallengeResponse:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCryptogram:(id)arg1;
- (void)setPassOwnershipToken:(id)arg1;
- (void)setPaymentCredential:(id)arg1;
- (void)setPrimaryAccountNumber:(id)arg1;
- (void)setReferrerIdentifier:(id)arg1;
- (void)setRegion:(id)arg1;
- (void)setSendReducedDeviceData:(bool)arg1;

@end
