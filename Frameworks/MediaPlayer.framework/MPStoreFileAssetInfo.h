
@interface MPStoreFileAssetInfo : NSObject {
    ICStoreFileAssetInfo * _internalInfo;
}

@property (nonatomic, readonly, copy) NSURL *assetURL;
@property (nonatomic, readonly, copy) NSString *downloadKey;
@property (nonatomic, readonly, copy) NSArray *fairPlayInfoList;
@property (nonatomic, readonly, copy) NSString *fileExtension;
@property (nonatomic, readonly) unsigned long long fileSize;
@property (nonatomic, readonly) long long flavorType;
@property (nonatomic, readonly, copy) NSData *md5;
@property (nonatomic, readonly, copy) NSString *playbackAuthorizationToken;
@property (nonatomic, readonly) long long protectionType;

- (void).cxx_destruct;
- (id)assetURL;
- (id)downloadKey;
- (id)fairPlayInfoList;
- (id)fileExtension;
- (unsigned long long)fileSize;
- (long long)flavorType;
- (id)initWithiTunesCloudStoreFileAssetInfo:(id)arg1;
- (id)md5;
- (id)playbackAuthorizationToken;
- (long long)protectionType;

@end
