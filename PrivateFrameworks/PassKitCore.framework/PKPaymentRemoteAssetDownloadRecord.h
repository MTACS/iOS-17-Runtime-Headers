
@interface PKPaymentRemoteAssetDownloadRecord : PKPaymentBackgroundDownloadRecord <NSSecureCoding> {
    NSURL * _passURL;
    NSDictionary * _remoteAssetsByRecordName;
    NSDictionary * _remoteAssetsByTaskIdentifier;
}

@property (nonatomic, retain) NSURL *passURL;
@property (nonatomic, retain) NSDictionary *remoteAssetsByRecordName;
@property (nonatomic, retain) NSDictionary *remoteAssetsByTaskIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasOutstandingRemoteAssetTasks;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)passURL;
- (id)remoteAssetsByRecordName;
- (id)remoteAssetsByTaskIdentifier;
- (void)removeRemoteCloudStoreAssetForRecordName:(id)arg1;
- (void)removeRemoteURLAssetForTaskIdentifier:(id)arg1;
- (void)setPassURL:(id)arg1;
- (void)setRemoteAssetsByRecordName:(id)arg1;
- (void)setRemoteAssetsByTaskIdentifier:(id)arg1;
- (void)setRemoteCloudStoreAsset:(id)arg1 forRecordName:(id)arg2;
- (void)setRemoteURLAsset:(id)arg1 forTaskIdentifier:(id)arg2;

@end
