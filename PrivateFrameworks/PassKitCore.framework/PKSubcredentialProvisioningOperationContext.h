
@interface PKSubcredentialProvisioningOperationContext : NSObject {
    PKAppletSubcredential * _addedCredential;
    PKPaymentPass * _downloadedPass;
    bool  _hasAcceptedInvitation;
    NSObject<OS_dispatch_queue> * _operationQueue;
    NSURL * _passURL;
    PKSubcredentialEncryptedContainer * _registrationData;
    PKAppletSubcredentialSharingInvitation * _sentInvitation;
    NSData * _trackingAttestation;
    PKSubcredentialEncryptedContainer * _vehicleMobilizationEncryptedContainer;
}

@property (nonatomic, retain) PKAppletSubcredential *addedCredential;
@property (nonatomic, retain) PKPaymentPass *downloadedPass;
@property (nonatomic) bool hasAcceptedInvitation;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *operationQueue;
@property (nonatomic, copy) NSURL *passURL;
@property (nonatomic, retain) PKSubcredentialEncryptedContainer *registrationData;
@property (nonatomic, retain) PKAppletSubcredentialSharingInvitation *sentInvitation;
@property (nonatomic, retain) NSData *trackingAttestation;
@property (nonatomic, retain) PKSubcredentialEncryptedContainer *vehicleMobilizationEncryptedContainer;

- (void).cxx_destruct;
- (id)addedCredential;
- (id)downloadedPass;
- (bool)hasAcceptedInvitation;
- (id)initWithQueue:(id)arg1;
- (id)operationQueue;
- (id)passURL;
- (id)registrationData;
- (id)sentInvitation;
- (void)setAddedCredential:(id)arg1;
- (void)setDownloadedPass:(id)arg1;
- (void)setHasAcceptedInvitation:(bool)arg1;
- (void)setPassURL:(id)arg1;
- (void)setRegistrationData:(id)arg1;
- (void)setSentInvitation:(id)arg1;
- (void)setTrackingAttestation:(id)arg1;
- (void)setVehicleMobilizationEncryptedContainer:(id)arg1;
- (id)trackingAttestation;
- (id)vehicleMobilizationEncryptedContainer;

@end
