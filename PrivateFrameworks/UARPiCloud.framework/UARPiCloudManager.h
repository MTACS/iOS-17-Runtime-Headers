
@interface UARPiCloudManager : NSObject {
    UARPiCloudContainer * _container;
    <UARPiCloudManagerDelegate> * _delegate;
    NSObject<OS_os_log> * _log;
    NSMutableSet * _pendingiCloudAccessoryRequests;
    NSObject<OS_dispatch_queue> * _recordProcessingQueue;
}

@property (readonly) UARPiCloudContainer *container;
@property (readonly) <UARPiCloudManagerDelegate> *delegate;
@property (readonly) NSObject<OS_os_log> *log;

- (void).cxx_destruct;
- (id)calculateDigestFromCHIPAccessoryCKRecord:(id)arg1;
- (id)calculateDigestFromCHIPAttestationCertificateRecord:(id)arg1;
- (id)calculateDigestFromCHIPFirmwareRecord:(id)arg1;
- (id)calculateDigestFromUARPAccessoryRecord:(id)arg1;
- (id)container;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)copyPublicKeyForVerificationCertificateData:(id)arg1 policy:(struct __SecPolicy { }*)arg2;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)copyPublicKeyFromCertificateID:(id)arg1;
- (id)delegate;
- (long long)fetchRemoteDatabaseChangesInContainer:(id)arg1 completion:(id /* block */)arg2;
- (bool)fetchVerificationCertificateInContainer:(id)arg1;
- (void)fetchZoneChangesInContainer:(id)arg1 forAccessories:(id)arg2;
- (id)filterInterestedZonesInContainer:(id)arg1 forAccessories:(id)arg2;
- (void)handleRemoteFetchRequestForAccessories:(id)arg1;
- (void)handleRemoteFetchRequestForCHIPAccessoriesMetadata:(id)arg1;
- (void)handleRemoteFetchRequestForCHIPAttestationCertificates:(id)arg1;
- (void)handleRemoteFetchRequestSyncForCHIPAccessoriesMetadata:(id*)arg1 productGroup:(id)arg2;
- (void)handleRemoteFetchRequestSyncForCHIPAttestationCertificates:(id*)arg1 subjectKeyIdentifier:(id)arg2;
- (id)initWithDelegate:(id)arg1 containerID:(id)arg2;
- (id)log;
- (void)performRemoteFetchForAccessories:(id)arg1;
- (void)performRemoteFetchForAttestationCertificates:(id)arg1;
- (void)performRemoteFetchForCHIPVerificationCertificateSync;
- (void)performRemoteFetchForSupportedAccessoriesMetadata:(id)arg1;
- (void)performRemoteFetchForSupportedAccessoriesMetadataInZone:(id)arg1;
- (bool)processCHIPAccessoriesRecord:(id)arg1;
- (void)processCHIPAccessoriesRecords:(id)arg1 productGroup:(id)arg2;
- (bool)processCHIPAttestationCertificateRecord:(id)arg1 subjectKeyIdentifier:(id)arg2;
- (void)processCHIPAttestationCertificateRecords:(id)arg1 subjectKeyIdentifier:(id)arg2;
- (void)processCHIPFirmwareRecord:(id)arg1 inContainer:(id)arg2 forAccessory:(id)arg3;
- (void)processCKRecord:(id)arg1 inContainer:(id)arg2 forAccessory:(id)arg3;
- (void)processRecordsInContainer:(id)arg1 forAccessory:(id)arg2;
- (void)processUpdatedRecordsInContainer:(id)arg1 forAccessories:(id)arg2;
- (void)processVerificationCertificateRecord:(id)arg1 forContainer:(id)arg2;
- (bool)validateCHIPFirmwareRecord:(id)arg1 inContainer:(id)arg2 forAccessory:(id)arg3;
- (bool)validateSignatureForUARPAccessoryRecord:(id)arg1 inContainer:(id)arg2;

@end
