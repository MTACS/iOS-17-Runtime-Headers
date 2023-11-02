
@interface CRKFetchASMCertificatesOperation : CATOperation {
    <CRKIDSPrimitives> * _IDSPrimitives;
    <CRKIDSAddressTranslator> * _addressTranslator;
    DMFControlGroupIdentifier * _controlGroupIdentifier;
    NSString * _destinationAppleID;
    NSString * _destinationDeviceIdentifier;
    long long  _destinationRole;
    <CRKCancelable> * _messageReceiveSubscription;
    NSData * _requesterCertificate;
    NSString * _sourceAppleID;
    long long  _sourceRole;
}

@property (nonatomic, readonly) <CRKIDSPrimitives> *IDSPrimitives;
@property (nonatomic, readonly) <CRKIDSAddressTranslator> *addressTranslator;
@property (nonatomic, readonly) DMFControlGroupIdentifier *controlGroupIdentifier;
@property (nonatomic, readonly, copy) NSString *destinationAppleID;
@property (nonatomic, readonly, copy) NSString *destinationDeviceIdentifier;
@property (nonatomic, readonly) long long destinationRole;
@property (nonatomic, retain) <CRKCancelable> *messageReceiveSubscription;
@property (nonatomic, readonly, copy) NSData *requesterCertificate;
@property (nonatomic, readonly, copy) NSString *sourceAppleID;
@property (nonatomic, readonly) long long sourceRole;

- (void).cxx_destruct;
- (id)IDSPrimitives;
- (id)addressTranslator;
- (void)cancel;
- (id)controlGroupIdentifier;
- (id)destinationAppleID;
- (id)destinationDeviceIdentifier;
- (long long)destinationRole;
- (void)didSendMessage:(id)arg1;
- (id)initWithIDSPrimitives:(id)arg1 addressTranslator:(id)arg2 controlGroupIdentifier:(id)arg3 destinationAppleID:(id)arg4 sourceAppleID:(id)arg5 destinationDeviceIdentifier:(id)arg6 sourceRole:(long long)arg7 destinationRole:(long long)arg8 requesterCertificate:(id)arg9;
- (bool)isAsynchronous;
- (void)main;
- (id)messageReceiveSubscription;
- (void)operationWillFinish;
- (void)processMessage:(id)arg1 senderAppleID:(id)arg2 requestIdentifier:(id)arg3;
- (id)requesterCertificate;
- (void)setMessageReceiveSubscription:(id)arg1;
- (id)sourceAppleID;
- (long long)sourceRole;

@end
