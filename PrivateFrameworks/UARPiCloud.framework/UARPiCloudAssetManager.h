
@interface UARPiCloudAssetManager : NSObject {
    NSMutableDictionary * _accessories;
    UARPAssetManager * _assetManager;
    id  _cloudManager;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_os_log> * _log;
    bool  _uarpDownloadOnCellularAllowed;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property bool uarpDownloadOnCellularAllowed;

- (void).cxx_destruct;
- (unsigned int)_getCoreCryptoDigestAlgorithmFromCHIPFirmwareAlgorithm:(unsigned long long)arg1;
- (bool)checkLocalUARPCacheForAccessory:(id)arg1 versionAvailable:(id*)arg2 firmwarePath:(id*)arg3 releaseNotesPath:(id*)arg4;
- (void)cleanupAssetCache;
- (id)delegateQueue;
- (long long)downloadFirmwareForAccessory:(id)arg1;
- (long long)downloadReleaseNotesForAccessory:(id)arg1;
- (long long)getAttestationCertificates:(id)arg1 inContainer:(id)arg2;
- (long long)getSupportedAccessories:(id)arg1 inContainer:(id)arg2;
- (void)handleFirmwareDownloadResponseFromLocation:(id)arg1 forAccessory:(id)arg2;
- (long long)handleReleaseNotesDownloadRequestForAccessory:(id)arg1;
- (void)handleReleaseNotesDownloadResponseFromLocation:(id)arg1 forAccessory:(id)arg2;
- (void)handleRemoteDownloadRequestForAttestationCertificatesForSubjectKeyIdentifier:(id)arg1 inContainer:(id)arg2;
- (void)handleRemoteDownloadRequestForSupportedAccessoriesForProductGroup:(id)arg1 inContainer:(id)arg2;
- (void)handleRemoteDownloadResponseForAttestationCertificates:(id)arg1 forSubKeyIdentifier:(id)arg2;
- (void)handleRemoteDownloadResponseForSupportedAccessories:(id)arg1 forProductGroup:(id)arg2;
- (void)handleRemoteFetchCompletion:(id)arg1 error:(id)arg2;
- (long long)handleRemoteFirmwareDownloadRequestForAccessory:(id)arg1;
- (long long)handleRemoteQueryRequestForAccessories:(id)arg1 inContainer:(id)arg2;
- (id)initWithManager:(id)arg1;
- (bool)isFirmwareHash:(id)arg1 equalToHash:(id)arg2;
- (bool)moveFileAtURL:(id)arg1 toTempURL:(id)arg2;
- (id)moveToUARPCacheFromRemoteURL:(id)arg1 assetType:(long long)arg2 forAcessory:(id)arg3;
- (id)pathToSuperBinaryInAccessoryVersionDirectory:(id)arg1 uarpVersion:(id*)arg2;
- (long long)performRemoteUpdateCheckForAccessories:(id)arg1 inContainer:(id)arg2;
- (void)remoteFetchCompletion:(id)arg1 error:(id)arg2;
- (void)remoteFetchCompletionForAttestationCertificates:(id)arg1 subjectKeyIdentifier:(id)arg2 error:(id)arg3;
- (void)remoteFetchCompletionForSupportedAccessories:(id)arg1 productGroup:(id)arg2 error:(id)arg3;
- (void)setFirmwareDownloadFailureStatusForAccessory:(id)arg1;
- (void)setFirmwareDownloadSuccessStatusForAccessory:(id)arg1;
- (void)setReleaseNotesDownloadFailureStatusForAccessory:(id)arg1;
- (void)setReleaseNotesDownloadSuccessStatusForAccessory:(id)arg1;
- (void)setUarpDownloadOnCellularAllowed:(bool)arg1;
- (bool)uarpDownloadOnCellularAllowed;

@end
