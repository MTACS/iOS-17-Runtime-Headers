
@interface NSPersistentCloudKitContainerOptions : NSObject {
    NSString * _apsConnectionMachServiceName;
    bool  _automaticallyDownloadFileBackedFutures;
    NSNumber * _ckAssetThresholdBytes;
    NSString * _containerIdentifier;
    CKContainerOptions * _containerOptions;
    long long  _databaseScope;
    NSNumber * _operationMemoryThresholdBytes;
    NSObject<NSCloudKitMirroringDelegateProgressProvider> * _progressProvider;
    CKContainer * _testContainerOverride;
    bool  _useDeviceToDeviceEncryption;
}

@property (nonatomic, retain) NSString *apsConnectionMachServiceName;
@property (nonatomic) bool automaticallyDownloadFileBackedFutures;
@property (nonatomic, retain) NSNumber *ckAssetThresholdBytes;
@property (readonly, copy) NSString *containerIdentifier;
@property (nonatomic, retain) CKContainerOptions *containerOptions;
@property (nonatomic) long long databaseScope;
@property (nonatomic, retain) NSNumber *operationMemoryThresholdBytes;
@property (nonatomic) NSObject<NSCloudKitMirroringDelegateProgressProvider> *progressProvider;
@property (nonatomic, retain) CKContainer *testContainerOverride;
@property bool useDeviceToDeviceEncryption;
@property bool useEncryptedStorage;

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

- (void).cxx_destruct;
- (id)apsConnectionMachServiceName;
- (bool)automaticallyDownloadFileBackedFutures;
- (id)ckAssetThresholdBytes;
- (id)containerIdentifier;
- (id)containerOptions;
- (long long)databaseScope;
- (void)dealloc;
- (id)initWithContainer:(id)arg1;
- (id)initWithContainerIdentifier:(id)arg1;
- (id)operationMemoryThresholdBytes;
- (id)progressProvider;
- (void)setApsConnectionMachServiceName:(id)arg1;
- (void)setAutomaticallyDownloadFileBackedFutures:(bool)arg1;
- (void)setCkAssetThresholdBytes:(id)arg1;
- (void)setContainerOptions:(id)arg1;
- (void)setDatabaseScope:(long long)arg1;
- (void)setOperationMemoryThresholdBytes:(id)arg1;
- (void)setProgressProvider:(id)arg1;
- (void)setTestContainerOverride:(id)arg1;
- (void)setUseDeviceToDeviceEncryption:(bool)arg1;
- (void)setUseEncryptedStorage:(bool)arg1;
- (id)testContainerOverride;
- (bool)useDeviceToDeviceEncryption;
- (bool)useEncryptedStorage;

// Image: /System/Library/PrivateFrameworks/GroupKitCrypto.framework/GroupKitCrypto

+ (id)gpkCrypto_optionsWithContainerIdentifier:(id)arg1 apnsServiceName:(id)arg2;

@end
