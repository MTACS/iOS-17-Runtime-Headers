
@interface PKAccountWebServiceScheduleTransferRequest : PKAccountWebServiceRequest <PKAccountWebServiceApplePayTrustProtocol> {
    NSString * _accountIdentifier;
    PKPaymentDeviceMetadata * _deviceMetadata;
    NSString * _odiAssessment;
    NSData * _publicKeyHash;
    PKAccountTransferScheduleDetails * _scheduleDetails;
    PKAccountScheduledTransferList * _scheduledTransfers;
    NSURL * baseURL;
    PKApplePayTrustHashResponse * hashResponse;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, retain) NSURL *baseURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PKPaymentDeviceMetadata *deviceMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKApplePayTrustHashResponse *hashResponse;
@property (nonatomic, copy) NSString *odiAssessment;
@property (nonatomic, copy) NSData *publicKeyHash;
@property (nonatomic, retain) PKAccountTransferScheduleDetails *scheduleDetails;
@property (nonatomic, retain) PKAccountScheduledTransferList *scheduledTransfers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (id)accountIdentifier;
- (id)baseURL;
- (id)deviceMetadata;
- (id)endpointComponents;
- (id)hashResponse;
- (id)manifestHashWithReferenceIdentifier:(id)arg1;
- (id)odiAssessment;
- (id)publicKeyHash;
- (id)scheduleDetails;
- (id)scheduledTransfers;
- (void)setAccountIdentifier:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setDeviceMetadata:(id)arg1;
- (void)setHashResponse:(id)arg1;
- (void)setOdiAssessment:(id)arg1;
- (void)setPublicKeyHash:(id)arg1;
- (void)setScheduleDetails:(id)arg1;
- (void)setScheduledTransfers:(id)arg1;
- (Class)signatureResponseClass;

@end
