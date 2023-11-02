
@interface MagnifierModelsManager : NSObject <MagnifierAssetsManagerDelegate> {
    NSURL * _doorAttributesClassiferUncompiledModelPath;
    NSDictionary * _doorAttributesClassifierAssetProperties;
    MagnifierAssetsManager * _downloadManager;
    NSDictionary * _signDetectorAssetProperties;
    NSURL * _signDetectorUncompiledModelPath;
}

@property (nonatomic, readonly) NSURL *doorAttributesClassifierModelPath;
@property (nonatomic, readonly) NSDictionary *doorAttributesClassifierProperties;
@property (nonatomic, retain) MagnifierAssetsManager *downloadManager;
@property (nonatomic, readonly) NSURL *signDetectorModelPath;
@property (nonatomic, readonly) NSDictionary *signDetectorProperties;

+ (id)shared;

- (void).cxx_destruct;
- (id)doorAttributesClassifierModelPath;
- (id)doorAttributesClassifierProperties;
- (id)downloadManager;
- (id)init;
- (void)setDownloadManager:(id)arg1;
- (id)signDetectorModelPath;
- (id)signDetectorProperties;
- (void)updateAssetURLs;

@end
