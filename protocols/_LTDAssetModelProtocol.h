
@protocol _LTDAssetModelProtocol <_LTAssetProgressReporting>

@required

- (NSString *)assetId;
- (NSString *)assetLanguage;
- (NSString *)assetName;
- (unsigned long long)assetType;
- (NSString *)assetTypeName;
- (long long)assetVersion;
- (bool)canBePurged;
- (long long)contentVersion;
- (long long)downloadSize;
- (long long)formatVersion;
- (NSURL *)getLocalFileUrl;
- (NSString *)identifier;
- (bool)isAvailable;
- (bool)isDownloading;
- (bool)isInstalled;
- (bool)isPremiumTextLID;
- (NSString *)managedAssetType;
- (long long)requiredCapabilityIdentifier;
- (unsigned long long)state;
- (NSArray *)supportedLanguages;
- (long long)unarchivedSize;

@optional

- (NSDictionary *)_attributes;
- (bool)refreshState;

@end
