
@interface CRKCertificateExchangeBroadcastHandler : NSObject <CRKIDSMessageBroadcastHandling> {
    <CRKIDSPrimitives> * _IDSPrimitives;
    <CRKAppleIDProviding> * _appleIDProvider;
    <CRKCertificateExchangeBroadcastHandlerDelegate> * _delegate;
}

@property (nonatomic, readonly) <CRKIDSPrimitives> *IDSPrimitives;
@property (nonatomic, readonly) <CRKAppleIDProviding> *appleIDProvider;
@property (nonatomic) <CRKCertificateExchangeBroadcastHandlerDelegate> *delegate;

- (void).cxx_destruct;
- (id)IDSPrimitives;
- (id)appleIDProvider;
- (id)delegate;
- (id)initWithIDSPrimitives:(id)arg1 appleIDProvider:(id)arg2;
- (void)processMessage:(id)arg1 senderAppleID:(id)arg2 senderAddress:(id)arg3;
- (void)setDelegate:(id)arg1;

@end
