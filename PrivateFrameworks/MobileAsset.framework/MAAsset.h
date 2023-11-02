
@interface MAAsset : NSObject {
    NSString * _assetId;
    NSString * _assetType;
    NSDictionary * _attributes;
    NSString * _purpose;
    long long  _state;
}

@property (nonatomic, readonly) NSString *assetId;
@property (nonatomic, readonly) NSString *assetType;
@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) NSString *purpose;
@property (readonly) long long state;

// Image: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset

+ (void)cancelCatalogDownload:(id)arg1 then:(id /* block */)arg2;
+ (void)cancelCatalogDownload:(id)arg1 withPurpose:(id)arg2 then:(id /* block */)arg3;
+ (id)getLoadResultFromMessage:(id)arg1;
+ (id)loadSync:(id)arg1 allowingDifferences:(id)arg2 error:(id*)arg3;
+ (id)loadSync:(id)arg1 allowingDifferences:(id)arg2 withPurpose:(id)arg3 error:(id*)arg4;
+ (id)loadSync:(id)arg1 error:(id*)arg2;
+ (id)loadSync:(id)arg1 withPurpose:(id)arg2 error:(id*)arg3;
+ (void)startCatalogDownload:(id)arg1 options:(id)arg2 completionWithError:(id /* block */)arg3;
+ (void)startCatalogDownload:(id)arg1 options:(id)arg2 then:(id /* block */)arg3;
+ (void)startCatalogDownload:(id)arg1 then:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_invokeClientDownloadCompletionAlreadyOnQueue:(long long)arg1 asset:(id)arg2 completionBlockWithError:(id /* block */)arg3;
- (id)absoluteAssetId;
- (id)assetId;
- (id)assetProperty:(id)arg1;
- (id)assetServerUrl;
- (id)assetType;
- (void)attachProgressCallBack:(id /* block */)arg1;
- (id)attributes;
- (long long)calculateTimeout;
- (void)cancelDownload:(id /* block */)arg1;
- (long long)cancelDownloadSync;
- (void)commonAssetDownload:(id)arg1 options:(id)arg2 then:(id /* block */)arg3;
- (void)configDownload:(id)arg1 completion:(id /* block */)arg2;
- (long long)configDownloadSync:(id)arg1;
- (id)description;
- (id)getLocalFilePath;
- (id)getLocalFileUrl;
- (id)getLocalUrl;
- (unsigned long long)hash;
- (id)hashToString:(id)arg1;
- (id)initWithAttributes:(id)arg1;
- (void)invokeClientDownloadCompletion:(long long)arg1 asset:(id)arg2 completionBlockWithError:(id /* block */)arg3;
- (bool)isEqual:(id)arg1;
- (void)logAsset;
- (bool)nonUserInitiatedDownloadsAllowed;
- (bool)overrideGarbageCollectionThreshold:(unsigned long long)arg1;
- (void)purge:(id /* block */)arg1;
- (long long)purgeSync;
- (void)purgeWithError:(id /* block */)arg1;
- (id)purpose;
- (bool)refreshState;
- (bool)spaceCheck:(long long*)arg1;
- (void)startDownload:(id /* block */)arg1;
- (void)startDownload:(id)arg1 completionWithError:(id /* block */)arg2;
- (void)startDownload:(id)arg1 then:(id /* block */)arg2;
- (void)startDownloadWithExtractor:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)startDownloadWithExtractor:(id /* block */)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)startDownloadWithExtractor:(id /* block */)arg1 options:(id)arg2 completionWithError:(id /* block */)arg3;
- (long long)state;
- (bool)wasDownloadable;
- (bool)wasInCatalog;
- (bool)wasLocal;
- (bool)wasPreinstalled;
- (bool)wasPurgeable;

// Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech

- (id)_compatibilityVersion;
- (id)_footprint;
- (id)_version;
- (bool)canBePurged;
- (id)getCSAssetOfType:(unsigned long long)arg1;
- (bool)isCSAssetInstalled;
- (bool)isDownloading;
- (bool)isLatestCompareTo:(id)arg1;
- (bool)isPremium;
- (id)path;

// Image: /System/Library/PrivateFrameworks/DictionaryUI.framework/DictionaryUI

- (long long)_contentVersion;
- (long long)_formatVersion;

// Image: /System/Library/PrivateFrameworks/FlexMusicKit.framework/FlexMusicKit

- (bool)isEqualToSongAsset:(id)arg1;
- (bool)isPresent;

// Image: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore

+ (void)SUCoreBorder_cancelCatalogDownload:(id)arg1 completionWithCancelResult:(id /* block */)arg2;
+ (id)SUCoreBorder_loadSync:(id)arg1 allowingDifferences:(id)arg2 withPurpose:(id)arg3 error:(id*)arg4 simulateForDescriptor:(id)arg5 simulateForType:(long long)arg6;
+ (void)SUCoreBorder_startCatalogDownload:(id)arg1 options:(id)arg2 completionWithError:(id /* block */)arg3;
+ (id)_SUCoreBorder_MAAssetResultAtBegin:(id)arg1 withDescriptor:(id)arg2 type:(long long)arg3 error:(id*)arg4;
+ (id)_SUCoreBorder_MAAssetResultAtEnd:(id)arg1 withDescriptor:(id)arg2 type:(long long)arg3 withResult:(id)arg4 error:(id*)arg5;
+ (long long)_SUCoreBorder_MAAssetState:(id)arg1;
+ (id)_SUCoreBorder_MAAttributesAtBegin:(id)arg1;
+ (id)_SUCoreBorder_MAAttributesAtEnd:(id)arg1 withBaseAttributes:(id)arg2;
+ (bool)_SUCoreBorder_MABoolResultAtBegin:(id)arg1;
+ (bool)_SUCoreBorder_MABoolResultAtEnd:(id)arg1 withResult:(bool)arg2;
+ (void)_SUCoreBorder_MACancelDownloadResultAtBegin:(id)arg1 withCompletion:(id /* block */)arg2;
+ (void)_SUCoreBorder_MACancelDownloadResultAtEnd:(id)arg1 withResult:(long long)arg2 withCompletion:(id /* block */)arg3;
+ (void)_SUCoreBorder_MADownloadResultAtBegin:(id)arg1 withCompletion:(id /* block */)arg2;
+ (void)_SUCoreBorder_MADownloadResultAtEnd:(id)arg1 withResult:(long long)arg2 withError:(id)arg3 withCompletion:(id /* block */)arg4;
+ (void)_SUCoreBorder_MAOperationResultAtBegin:(id)arg1 withCompletion:(id /* block */)arg2;
+ (void)_SUCoreBorder_MAOperationResultAtEnd:(id)arg1 withResult:(long long)arg2 withCompletion:(id /* block */)arg3;
+ (void)_SUCoreBorder_MAPurgeResultAtBegin:(id)arg1 withCompletion:(id /* block */)arg2;
+ (void)_SUCoreBorder_MAPurgeResultAtEnd:(id)arg1 withResult:(long long)arg2 withError:(id)arg3 withCompletion:(id /* block */)arg4;
+ (id)_getSimulatedAssetForDescriptor:(id)arg1 type:(long long)arg2;

- (id)SUCoreBorder_attributes;
- (void)SUCoreBorder_cancelDownload:(id /* block */)arg1;
- (void)SUCoreBorder_configDownload:(id)arg1 completion:(id /* block */)arg2;
- (void)SUCoreBorder_purgeWithError:(id /* block */)arg1;
- (bool)SUCoreBorder_refreshState;
- (void)SUCoreBorder_startDownload:(id)arg1 completionWithError:(id /* block */)arg2;
- (long long)SUCoreBorder_state;
- (void)_prepAndSendDownloadFinishedSplunkEvent:(long long)arg1 withError:(id)arg2 withSessionId:(id)arg3;
- (void)_prepAndSendDownloadStartedSplunkEvent:(id)arg1;
- (void)_setCommonSplunkFields:(id)arg1 withSessionId:(id)arg2;

// Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices

- (bool)cancelDownload;
- (void)cancelDownloadIfNecessary;
- (void)cleanupAsset;
- (bool)isDownloading;
- (bool)isDownloadingOrInstalled;
- (bool)isEmergencyUpdate;
- (bool)isInstalled;
- (bool)purge;

// Image: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition

- (id)_compatibilityVersion;
- (id)_footprint;
- (id)_version;
- (bool)canBePurged;
- (id)getCSAssetOfType:(unsigned long long)arg1;
- (bool)isCSAssetInstalled;
- (bool)isDownloading;
- (bool)isLatestCompareTo:(id)arg1;
- (bool)isPremium;
- (id)path;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (long long)_contentVersion;
- (long long)_formatVersion;

// Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger

- (bool)canBePurged;
- (id)compatibilityVersion;
- (id)description;
- (id)footprint;
- (bool)isAvailableLocally;
- (bool)isDownloading;
- (bool)isLatestCompareTo:(id)arg1;
- (bool)isPremium;
- (bool)isVTAssetInstalled;
- (id)languages;
- (id)path;
- (id)version;

@end
