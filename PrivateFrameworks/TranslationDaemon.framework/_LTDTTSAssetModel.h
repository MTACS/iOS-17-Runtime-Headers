
@interface _LTDTTSAssetModel : NSObject <_LTDAssetModelProtocol> {
    NSString * _assetName;
    NSString * _language;
    NSString * _ltIdentifier;
    _LTAssetProgress * _progress;
    TTSAsset * _ttsAsset;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _LTAssetProgress *progress;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) TTSAsset *ttsAsset;

+ (id)modelFromAsset:(id)arg1;

- (void).cxx_destruct;
- (id)assetId;
- (id)assetLanguage;
- (id)assetName;
- (unsigned long long)assetType;
- (id)assetTypeName;
- (long long)assetVersion;
- (bool)canBePurged;
- (long long)contentVersion;
- (long long)downloadSize;
- (long long)formatVersion;
- (id)getLocalFileUrl;
- (id)identifier;
- (id)initWithAssetIdentifier:(id)arg1;
- (bool)isAvailable;
- (bool)isDownloading;
- (bool)isInstalled;
- (bool)isPremiumTextLID;
- (id)managedAssetType;
- (id)progress;
- (long long)requiredCapabilityIdentifier;
- (unsigned long long)state;
- (id)supportedLanguages;
- (id)ttsAsset;
- (long long)unarchivedSize;

@end
