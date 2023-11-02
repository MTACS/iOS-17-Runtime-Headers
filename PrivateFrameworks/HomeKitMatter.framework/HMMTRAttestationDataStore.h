
@interface HMMTRAttestationDataStore : HMFObject <HMFLogging, UARPControllerDelegateProtocol> {
    <HMMTRFileManager> * _fileManager;
    NSURL * _fileURL;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    UARPController * _uarpController;
}

@property (readonly, copy) NSArray *cdCertificates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <HMMTRFileManager> *fileManager;
@property (readonly) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *paaCertificates;
@property (readonly) Class superclass;
@property (readonly) UARPController *uarpController;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)assetAvailablityUpdateForAccessoryID:(id)arg1 assetID:(id)arg2;
- (void)attestationCertificates:(id)arg1 forSubjectKeyIdentifier:(id)arg2;
- (id)cdCertificates;
- (id)convertPEMtoDERforCertificate:(id)arg1;
- (void)fetchCloudAttestationData;
- (id)fileManager;
- (id)fileURL;
- (id)initWithFileURL:(id)arg1;
- (id)initWithFileURL:(id)arg1 uarpController:(id)arg2 fileManager:(id)arg3;
- (id)paaCertificates;
- (void)saveWithPaaCertificates:(id)arg1 cdCertificates:(id)arg2;
- (bool)sendMessageToAccessory:(id)arg1 uarpMsg:(id)arg2 error:(id*)arg3;
- (id)staticAttestationData;
- (id)staticAttestationDataFileURL;
- (id)uarpController;

@end
