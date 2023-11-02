
@interface AVURLAsset : AVAsset <AVContentKeyRecipient, AVContentKeyRecipientInternal> {
    AVURLAssetInternal * _URLAsset;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic, readonly) NSUUID *httpSessionIdentifier;
@property (nonatomic, readonly) double ic_durationInSeconds;
@property (nonatomic, readonly) bool mayRequireContentKeysForMediaDataProcessing;
@property (nonatomic, readonly, copy) NSURL *mcui_safeURL;
@property (nonatomic, readonly) AVAssetResourceLoader *resourceLoader;
@property (nonatomic, readonly) bool shouldMatchDataInCacheByURLPathComponentOnly;
@property (nonatomic, readonly) bool shouldMatchDataInCacheByURLWithoutQueryComponent;
@property (nonatomic, readonly) NSArray *variants;

// Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore

+ (id)URLAssetWithURL:(id)arg1 options:(id)arg2;
+ (id)UTTypeIDArrayFromUTTypeArray:(id)arg1;
+ (id)_UTTypes;
+ (id)_avfValidationPlist;
+ (id)_avfValidationPlistWithPlaylistMIMETypesTreatedAsISOBMFFMIMETypes;
+ (id)_figFileMIMETypes;
+ (id)_figFilePathExtensions;
+ (id)_figFileUTIs;
+ (id)_figHFSFileTypes;
+ (id)_figMIMETypes;
+ (id)_figStreamingMIMETypes;
+ (id)_figStreamingUTIs;
+ (id)_fileUTTypes;
+ (id)_getFigAssetCreationOptionsFromURLAssetInitializationOptions:(id)arg1 assetLoggingIdentifier:(id)arg2 figAssetCreationFlags:(unsigned long long*)arg3 error:(id*)arg4;
+ (id)_getFigAssetiTunesStoreContentInfoFromURLAssetiTunesStoreContentInfo:(id)arg1;
+ (id)_initializationOptionsClasses;
+ (id)_objectWithItemProviderFileURL:(id)arg1 typeIdentifier:(id)arg2 isInPlace:(bool)arg3 error:(id*)arg4;
+ (long long)_preferredRepresentationForItemProviderReadableTypeIdentifier:(id)arg1;
+ (long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)arg1;
+ (id)_streamingUTTypes;
+ (id)assetForNSURLSessionWithURL:(id)arg1 propertyList:(id)arg2;
+ (id)audiovisualMIMETypes;
+ (id)audiovisualTypes;
+ (id)instanceIdentifierMapTable;
+ (bool)isPlayableExtendedMIMEType:(id)arg1;
+ (bool)isPlayableExtendedMIMEType:(id)arg1 options:(id)arg2;
+ (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg1;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
+ (void)setUserInfoObject:(id)arg1 forURLAsset:(id)arg2;
+ (id)userInfoObjectForURLAsset:(id)arg1;
+ (id)userInfoObjectForURLAssetInstanceIdentifier:(id)arg1;
+ (id)writableTypeIdentifiersForItemProvider;

- (id)SHA1Digest;
- (id)URL;
- (id)_absoluteURL;
- (void)_addFigAssetNotifications;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (int)_attachToContentKeySession:(id)arg1 contentKeyBoss:(struct CMBaseObject { }*)arg2 failedSinceAlreadyAttachedToAnotherSession:(bool*)arg3;
- (bool)_attachedToExternalContentKeySession;
- (Class)_classForAssetTracks;
- (Class)_classForFigAssetInspectorLoader;
- (Class)_classForTrackInspectors;
- (bool)_clientURLLoadingRepresentsAccurateNetworkStatistics;
- (struct OpaqueFigFormatReader { }*)_copyFormatReader;
- (void)_ensureAssetDownloadCache;
- (id)_errorForFigNotificationPayload:(struct __CFDictionary { }*)arg1 key:(struct __CFString { }*)arg2;
- (bool)_hasResourceLoaderDelegate;
- (id)_installHandlerForNSURLSessionConfiguration:(id)arg1 queue:(id)arg2;
- (id)_loadFileRepresentationOfTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (id)_managedAssetCache;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (void)_removeFigAssetNotifications;
- (void)_removeUserInfoObject;
- (bool)_requiresInProcessOperation;
- (id)_resourceLoaderWithRemoteHandlerContext:(id)arg1;
- (id)_serializableCreationOptions;
- (void)_setAssetInspectorLoader:(id)arg1;
- (void)_setUserInfoObject:(id)arg1;
- (bool)_shouldOptimizeAccessForLinearMoviePlayback;
- (void)_tracksDidChange;
- (id)assetCache;
- (id)cacheKey;
- (void)cancelLoading;
- (id)contentKeySession;
- (id)contentKeySpecifiersEligibleForPreloading;
- (id)creationOptions;
- (void)dealloc;
- (id)description;
- (id)downloadDestinationURL;
- (unsigned long long)downloadToken;
- (void)expire;
- (id)httpSessionIdentifier;
- (id)identifyingTag;
- (id)identifyingTagClass;
- (id)init;
- (id)initWithFigCreationOptions:(id)arg1 options:(id)arg2 figAssetCreationOptions:(id)arg3 figAssetCreationFlags:(unsigned long long)arg4;
- (id)initWithFileURL:(id)arg1 offset:(long long)arg2 length:(long long)arg3 options:(id)arg4;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (id)lyrics;
- (bool)mayRequireContentKeysForMediaDataProcessing;
- (id)originalNetworkContentURL;
- (id)propertyListForNSURLSessionAssetReturningError:(id*)arg1;
- (unsigned long long)referenceRestrictions;
- (id)resolvedURL;
- (id)resourceLoader;
- (bool)shouldMatchDataInCacheByURLPathComponentOnly;
- (bool)shouldMatchDataInCacheByURLWithoutQueryComponent;
- (id)tracks;
- (id)variants;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (struct CGSize { double x1; double x2; })hk_assetSize;
- (id)hk_thumbnailImage;

// Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI

- (struct CGSize { double x1; double x2; })hrui_assetSize;
- (id)hrui_thumbnailImage;

// Image: /System/Library/PrivateFrameworks/MediaCoreUI.framework/MediaCoreUI

- (id)mcui_safeURL;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (id)mpc_HLSAVMetadataItemInMetadata:(id)arg1;
- (void)mpc_addDownloadCompletionHandler:(id /* block */)arg1;
- (id)mpc_synchronousHLSSessionDataWithTimeout:(long long)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/NotesSupport.framework/NotesSupport

+ (id)ic_safeURLAssetWithURL:(id)arg1;

- (double)ic_durationInSeconds;

// Image: /System/Library/PrivateFrameworks/SeymourMedia.framework/SeymourMedia

+ (id)smm_alternativeConfigurationMediaIdentifierKey;
+ (id)smm_alternativeConfigurationOptionsKey;
+ (id)smm_alternativeConfigurationServiceIdentifierKey;
+ (id)smm_alternativeConfigurationiTunesServiceMonitoringKey;
+ (id)smm_iTunesStoreContentHLSAssetURLStringKey;
+ (id)smm_iTunesStoreContentInfoKey;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

+ (id)rc_preciseTimingAssetWithURL:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility

- (id)tsu_compatibleTrackForCompositionTrack:(id)arg1;

@end
