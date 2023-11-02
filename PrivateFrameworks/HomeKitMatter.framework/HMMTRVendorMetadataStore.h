
@interface HMMTRVendorMetadataStore : HMFObject <HMFLogging, UARPControllerDelegateProtocol> {
    <HMMTRFileManager> * _fileManager;
    NSURL * _fileURL;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    UARPController * _uarpController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <HMMTRFileManager> *fileManager;
@property (readonly, copy) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (readonly, copy) HMMTRVendorMetadata *metadata;
@property (readonly) Class superclass;
@property (readonly) UARPController *uarpController;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_addProductInfoToMetadata:(id)arg1 accessories:(id)arg2;
- (void)_addVendorInfoToMetadata:(id)arg1 accessories:(id)arg2;
- (void)_saveMetadata:(id)arg1;
- (void)assetAvailablityUpdateForAccessoryID:(id)arg1 assetID:(id)arg2;
- (void)fetchCloudMetadata;
- (id)fileManager;
- (id)fileURL;
- (id)initWithFileURL:(id)arg1;
- (id)initWithFileURL:(id)arg1 uarpController:(id)arg2 fileManager:(id)arg3;
- (id)metadata;
- (bool)sendMessageToAccessory:(id)arg1 uarpMsg:(id)arg2 error:(id*)arg3;
- (id)staticMetadata;
- (id)staticMetadataFileURL;
- (void)supportedAccessories:(id)arg1 forProductGroup:(id)arg2;
- (id)uarpController;

@end
