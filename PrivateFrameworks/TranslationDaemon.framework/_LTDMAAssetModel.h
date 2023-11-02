
@interface _LTDMAAssetModel : NSObject <_LTDAssetModelProtocol> {
    NSString * _identifier;
    MAAsset * _maAsset;
    _LTAssetProgress * _progress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MAAsset *maAsset;
@property (nonatomic, readonly) _LTAssetProgress *progress;
@property (readonly) Class superclass;

+ (id)modelFromAsset:(id)arg1;
+ (id)splitANECapabilityFromIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_attributes;
- (id)assetId;
- (id)assetLanguage;
- (id)assetName;
- (unsigned long long)assetType;
- (id)assetTypeName;
- (long long)assetVersion;
- (bool)canBePurged;
- (long long)contentVersion;
- (id)debugDescription;
- (id)description;
- (long long)downloadSize;
- (long long)formatVersion;
- (id)getLocalFileUrl;
- (id)identifier;
- (id)initWithMAAsset:(id)arg1;
- (bool)isAvailable;
- (bool)isDownloading;
- (bool)isInstalled;
- (bool)isPremiumTextLID;
- (id)maAsset;
- (id)managedAssetType;
- (id)progress;
- (bool)refreshState;
- (long long)requiredCapabilityIdentifier;
- (void)setMaAsset:(id)arg1;
- (unsigned long long)state;
- (id)supportedLanguages;
- (long long)unarchivedSize;

@end
