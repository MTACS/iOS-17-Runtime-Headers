
@protocol PKPaymentWebServiceProxyObjectExportedInterface <NSObject>

@required

- (void)addISO18013Blobs:(void *)arg1 cardType:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSMapTable *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)addPassData:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)addPendingProvisionings:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)allPaymentApplicationUsageSummariesWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)appleAccountInformationWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKAppleAccountInformation *, void*
- (void)applePayTrustKeyForIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKApplePayTrustKey *, void*
- (void)archiveBackgroundContext:(PKPaymentWebServiceBackgroundContext *)arg1;
- (void)archiveContext:(PKPaymentWebServiceContext *)arg1;
- (bool)areUnifiedAccessPassesSupported;
- (void)availableHomeKeyPassesWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)cachedFeatureApplicationsForProvisioningWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)canProvisionPaymentPassWithPrimaryAccountIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)checkFidoKeyPresenceForRelyingParty:(void *)arg1 relyingPartyAccountHash:(void *)arg2 fidoKeyHash:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)claimSecureElementForCurrentUserWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)createApplePayTrustKeyWithRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: PKApplePayTrustKeyRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKApplePayTrustKey *, NSError *, void*
- (void)createFidoKeyForRelyingParty:(void *)arg1 relyingPartyAccountHash:(void *)arg2 challenge:(void *)arg3 externalizedAuth:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 13: NSString *, NSString *, NSData *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSData *, NSData *, NSError *, void*
- (void)currentPasscodeMeetsUpgradedPasscodePolicy:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)currentSecureElementSnapshot:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKProvisioningSEStorageSnapshot *, NSError *, void*
- (void)deleteApplePayTrustKeyWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)deleteApplicationWithAID:(NSString *)arg1;
- (void)deleteKeyMaterialForSubCredentialId:(NSString *)arg1;
- (void)deleteReservation:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)deviceMetadataWithFields:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentDeviceMetadata *, void*
- (void)didRegisterWithRegionMap:(NSDictionary *)arg1 primaryRegionTopic:(NSString *)arg2;
- (void)downloadAllPaymentPasses;
- (void)endRequiringUpgradedPasscodeIfNecessary;
- (void)enforceUpgradedPasscodePolicyWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)familyMembersWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)featureApplicationsForProvisioningWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)generateISOEncryptionCertificateForSubCredentialId:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSData *, NSError *, void*
- (void)generateSEEncryptionCertificateForSubCredentialId:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)generateTransactionKeyWithParameters:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 10: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSArray *, NSData *, NSError *, void*
- (void)getConfigurationDataWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentDeviceConfigurationData *, NSError *, void*
- (void)getContextWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentWebServiceContext *, void*
- (void)getEncryptedServiceProviderDataForSecureElementPass:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: PKSecureElementPass *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)getProvisioningDataIncludingDeviceMetadata:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentDeviceProvisioningData *, NSError *, void*
- (void)getRegistrationDataWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentDeviceRegistrationData *, NSError *, void*
- (void)getTrustedDeviceEnrollmentInfoWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKTrustedDeviceEnrollmentInfo *, void*
- (void)handlePotentialExpressPass:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: PKPaymentPass *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)hasPassesOfType:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)invalidateRemoteProxyTargetDevice;
- (void)longTermPrivacyKeyForCredentialGroupIdentifier:(void *)arg1 reuseExisting:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)maximumPaymentCardsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)notePasscodeUpgradeFlowDidEnd;
- (void)notePasscodeUpgradeFlowWillBeginWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)noteProvisioningDidBegin;
- (void)noteProvisioningDidEnd;
- (void)noteProvisioningUserInterfaceDidAppear;
- (void)noteProvisioningUserInterfaceDidDisappear;
- (void)passOwnershipTokenWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)passesOfType:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)paymentSupportedInCurrentRegion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)performDeviceCheckInWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)performDeviceRegistrationReturningContextForReason:(void *)arg1 brokerURL:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: NSString *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, PKPaymentWebServiceContext *, NSError *, void*
- (void)prepareProvisioningTarget:(void *)arg1 checkFamilyCircle:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: PKPushProvisioningTarget *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKEncryptedPushProvisioningTarget *, bool, NSError *, void*
- (void)provisionHomeKeyPassForSerialNumbers:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)queueConnectionToTrustedServiceManagerForPushTopic:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)registrationSupportedInCurrentRegionWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)removePass:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: PKPass *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)renewAppleAccountWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, PKAppleAccountInformation *, void*
- (void)reserveStorageForAppletTypes:(void *)arg1 metadata:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: NSArray *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, bool, NSError *, void*
- (void)secureElementIsAvailableWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)secureElementOwnershipStateForCurrentUserWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)setDefaultPaymentPassUniqueIdentifier:(NSString *)arg1;
- (void)setNewAuthRandom:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setNewAuthRandomIfNecessaryReturningPairingState:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSData *, NSData *, void*
- (void)signData:(void *)arg1 signatureEntanglementMode:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 10: NSData *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, PKSecureElementSignatureInfo *, NSError *, void*
- (void)signWithFidoKeyForRelyingParty:(void *)arg1 relyingPartyAccountHash:(void *)arg2 fidoKeyHash:(void *)arg3 challenge:(void *)arg4 publicKeyIdentifier:(void *)arg5 externalizedAuth:(void *)arg6 completion:(void *)arg7; // needs 7 arg types, found 13: NSString *, NSString *, NSData *, NSData *, NSString *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(bool)arg1;
- (void)statusForShareableCredentials:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSArray *, NSError *, void*
- (void)storePassOwnershipToken:(NSString *)arg1 withIdentifier:(NSString *)arg2;
- (void)supportedFeatureIdentifiersForAccountProvisioningWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)supportedFeatureIdentifiersWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)supportsAccountsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)supportsPeerPaymentRegistrationWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)triggerCloudStoreZoneCreationForAccount:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: PKAccount *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)updateAccountWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKAccount *, NSError *, void*
- (void)updatedAccountsForProvisioningWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, void*
- (void)usingSynchronousProxy:(void *)arg1 meetsProvisioningRequirements:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: bool, PKProvisioningRequirementsContainer *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, PKProvisioningRequirementsContainer *, void*
- (void)validateAddPreconditionsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)validateTransferPreconditionsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@optional

- (void)performDeviceRegistrationForReason:(void *)arg1 brokerURL:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*

@end
