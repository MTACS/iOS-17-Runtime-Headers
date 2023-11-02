
@interface PKRemoteAssetManifest : NSObject {
    NSArray * _encryptedDeviceSpecificRemoteAssetFilenames;
    NSURL * _fileURL;
    NSURL * _passURL;
    NSMutableDictionary * _remoteAssets;
}

@property (nonatomic, readonly) NSArray *encryptedDeviceSpecificRemoteAssetFilenames;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) NSDictionary *remoteAssets;

+ (Class)_remoteAssestManifestItemClassWithValues:(id)arg1;

- (void).cxx_destruct;
- (id)deviceSpecificAsset;
- (id)deviceSpecificAssetForScreenScale:(double)arg1 suffix:(id)arg2;
- (id)encryptedDeviceSpecificRemoteAssetFilenames;
- (id)fileURL;
- (id)initWithFileURL:(id)arg1 passURL:(id)arg2 deviceSEIDs:(id)arg3 error:(id*)arg4;
- (id)initWithFileURL:(id)arg1 passURL:(id)arg2 error:(id*)arg3;
- (id)remoteAssets;

@end
