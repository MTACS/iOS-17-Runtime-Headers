
@interface _LTDAssetModel : NSObject <_LTDAssetModelProtocol> {
    NSArray * _localeIdentifiers;
    NSObject<_LTDAssetModelProtocol> * _provider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isMultiLocaleAsset;
@property (nonatomic, readonly) _LTAssetProgress *progress;
@property (nonatomic, retain) NSObject<_LTDAssetModelProtocol> *provider;
@property (nonatomic, readonly) bool shouldPurgeWithLocale;
@property (readonly) Class superclass;

+ (id)descriptionForAssetState:(unsigned long long)arg1;
+ (id)localeIdentifiersForLanguageName:(id)arg1;

- (void).cxx_destruct;
- (bool)_isCompatibleWithThisDevice;
- (id)assetId;
- (id)assetLanguage;
- (id)assetName;
- (unsigned long long)assetType;
- (id)assetTypeName;
- (long long)assetVersion;
- (bool)canBePurged;
- (long long)compareAssetVersionReversed:(id)arg1;
- (long long)contentVersion;
- (id)debugDescription;
- (id)description;
- (long long)downloadSize;
- (long long)formatVersion;
- (id)getLocalFileUrl;
- (id)identifier;
- (id)initWithProvider:(id)arg1;
- (bool)isANEModel;
- (bool)isASRModel;
- (bool)isAvailable;
- (bool)isConfig;
- (bool)isDownloading;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isInstalled;
- (bool)isMTModel;
- (bool)isMultiLocaleAsset;
- (bool)isNewerCompatibleVersionThan:(id)arg1;
- (bool)isNewerVersionThan:(id)arg1;
- (bool)isPhrasebook;
- (bool)isPremiumTextLID;
- (bool)isTTSModel;
- (id)localeIdentifiers;
- (id)managedAssetType;
- (id)progress;
- (id)provider;
- (bool)refreshState;
- (long long)requiredCapabilityIdentifier;
- (void)setProvider:(id)arg1;
- (bool)shouldPurgeWithLocale;
- (unsigned long long)state;
- (id)stateDescription;
- (id)status;
- (id)supportedLanguages;
- (bool)supportsLocale:(id)arg1;
- (long long)unarchivedSize;

@end
