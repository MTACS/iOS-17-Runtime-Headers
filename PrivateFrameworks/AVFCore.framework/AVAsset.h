
@interface AVAsset : NSObject <AVAsynchronousKeyValueLoading, AVIntegrityChecking, AVResourceReclaimable, AVResourceReclaimablePrivate, NSCopying> {
    AVAssetInternal * _asset;
}

@property (readonly) NSArray *availableChapterLocales;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDefunct, nonatomic, readonly) bool defunct;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (nonatomic, readonly) NSArray *fragments;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isProxy;
@property (readonly) NSString *localizedDisplayName;
@property (nonatomic, readonly, retain) <AVLoggingIdentifier> *loggingIdentifier;
@property (readonly) AVAssetTrack *mainAudioTrack;
@property (readonly) AVAssetTrack *mainVideoTrack;
@property (readonly) struct CGSize { double x1; double x2; } mainVideoTrackNaturalSize;
@property (readonly) float mainVideoTrackNominalFrameRate;
@property (readonly) struct CGSize { double x1; double x2; } mainVideoTrackPreferredSize;
@property (readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } mainVideoTrackPreferredTransform;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } minimumTimeOffsetFromLive;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } naturalSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } naturalSizeWithPreferredTransforms;
@property (nonatomic, readonly) NSArray *pf_metadata;
@property (nonatomic, readonly) AVDisplayCriteria *preferredDisplayCriteria;
@property (nonatomic, readonly) float preferredRate;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } preferredTransform;
@property (nonatomic, readonly) float preferredVolume;
@property (nonatomic, readonly) id propertyListForProxy;
@property (nonatomic, readonly) NSValue *pu_cachedDuration;
@property (nonatomic, readonly) bool pu_supportsVitality;
@property (nonatomic, readonly) NSValue *px_cachedDuration;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } px_dimensionsOfFirstVideoTrack;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } px_duration;
@property (getter=isQTAutoloopVideo, readonly) bool qtAutoloopVideo;
@property (nonatomic, readonly) AVAssetTrack *rc_audioTrack;
@property (setter=rc_setComposedAVURL:, nonatomic, retain) NSURL *rc_composedAVURL;
@property (nonatomic, readonly) double rc_durationInSeconds;
@property (nonatomic, readonly) NSDictionary *rc_recordingMetadata;
@property (readonly) struct CGSize { double x1; double x2; } scaleFactors;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool tsu_containsHDRContent;
@property (nonatomic, readonly) bool tsu_isPlayable;

// Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore

+ (bool)_assetCreationOptionsPrefersSandboxedOption:(id)arg1;
+ (bool)_assetCreationOptionsRequiresInProcessOperation:(id)arg1;
+ (id)assetProxyWithPropertyList:(id)arg1;
+ (id)assetWithData:(id)arg1 contentType:(id)arg2 options:(id)arg3;
+ (id)assetWithURL:(id)arg1;
+ (id)assetWithURL:(id)arg1 figPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg2 trackIDs:(id)arg3 dynamicBehavior:(bool)arg4;
+ (bool)expectsPropertyRevisedNotifications;
+ (void)initialize;
+ (id)inspectionOnlyAssetWithFigAsset:(struct OpaqueFigAsset { }*)arg1;
+ (id)inspectionOnlyAssetWithStreamDataParser:(id)arg1 tracks:(id)arg2;
+ (id)makeAssetLoggingIdentifier;
+ (bool)supportsPlayerItems;

- (id)_ID3Metadata;
- (id)_absoluteURL;
- (unsigned long long)_addChapterMetadataItem:(id)arg1 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 toChapters:(id)arg3 fromIndex:(unsigned long long)arg4;
- (id)_assetAnalysisMessages;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (bool)_automaticResourceReclamationEnabled;
- (id)_availableCanonicalizedChapterLanguages;
- (id)_chapterDataTypeForMediaSubType:(int)arg1;
- (id)_chapterMetadataGroupsBestMatchingPreferredLanguages:(id)arg1 containingItemsWithCommonKeys:(id)arg2;
- (id)_chapterMetadataGroupsWithFigChapterGroups:(id)arg1 titleLanguage:(id)arg2 containingItemsWithCommonKeys:(id)arg3;
- (id)_chapterMetadataGroupsWithTitleLanguage:(id)arg1 containingItemsWithCommonKeys:(id)arg2;
- (id)_chapterTracks;
- (Class)_classForTrackInspectors;
- (id)_comparisonToken;
- (struct OpaqueFigFormatReader { }*)_copyFormatReader;
- (struct OpaqueFigAsset { }*)_figAsset;
- (id)_firstTrackGroupWithMediaTypes:(id)arg1;
- (double)_fragmentMindingInterval;
- (void)_handleURLRequest:(id)arg1;
- (bool)_hasResourceLoaderDelegate;
- (bool)_isStreaming;
- (void)_loadChapterInfo;
- (void)_loadValuesSynchronouslyForKeys:(id)arg1 trackKeys:(id)arg2;
- (id)_localizedMediaSelectionOptionDisplayNames;
- (id)_mediaSelectionGroupDictionaries;
- (bool)_mindsFragments;
- (struct OpaqueFigMutableComposition { }*)_mutableComposition;
- (id)_nameForLogging;
- (bool)_needsLegacyChangeNotifications;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (bool)_prefersNominalDurations;
- (void)_registerFormatReaderForAutomaticResourceReclamation;
- (bool)_requiresInProcessOperation;
- (void)_serverHasDied;
- (void)_setFragmentMindingInterval:(double)arg1;
- (void)_setIsAssociatedWithFragmentMinder:(bool)arg1;
- (void)_setLoggingIdentifier:(id)arg1;
- (void)_tracksDidChange;
- (id)_tracksWithClass:(Class)arg1;
- (id)_weakReference;
- (id)allMediaSelections;
- (id)alternateTrackGroups;
- (id)audioAlternatesTrackGroup;
- (id)availableChapterLanguages;
- (id)availableChapterLocales;
- (id)availableMediaCharacteristicsWithMediaSelectionOptions;
- (id)availableMetadataFormats;
- (id)availableVideoDynamicRanges;
- (bool)canContainFragments;
- (void)cancelLoading;
- (id)chapterMetadataGroupsBestMatchingPreferredLanguages:(id)arg1;
- (id)chapterMetadataGroupsWithTitleLocale:(id)arg1 containingItemsWithCommonKeys:(id)arg2;
- (id)commonMetadata;
- (id)compatibleTrackForCompositionTrack:(id)arg1;
- (bool)containsFragments;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (void)findCompatibleTrackForCompositionTrack:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)findUnusedTrackIDWithCompletionHandler:(id /* block */)arg1;
- (id)fragments;
- (bool)hasProtectedContent;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1 contentType:(id)arg2 options:(id)arg3;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (bool)isCompatibleWithAirPlayVideo;
- (bool)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)arg1;
- (bool)isCompatibleWithSavedPhotosAlbum;
- (bool)isComposable;
- (bool)isDefunct;
- (bool)isEqual:(id)arg1;
- (bool)isExportable;
- (bool)isPlayable;
- (bool)isProxy;
- (bool)isReadable;
- (void)loadChapterMetadataGroupsBestMatchingPreferredLanguages:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadChapterMetadataGroupsWithTitleLocale:(id)arg1 containingItemsWithCommonKeys:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)loadMediaSelectionGroupForMediaCharacteristic:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadMetadataForFormat:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadTrackWithTrackID:(int)arg1 completionHandler:(id /* block */)arg2;
- (void)loadTracksWithMediaCharacteristic:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadTracksWithMediaType:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)loggingIdentifier;
- (id)lyrics;
- (id)makePropertyListForProxyWithOptions:(id)arg1;
- (struct CGSize { double x1; double x2; })maximumVideoResolution;
- (id)mediaSelectionGroupForMediaCharacteristic:(id)arg1;
- (id)mediaSelectionGroupForPropertyList:(id)arg1 mediaSelectionOption:(id*)arg2;
- (id)metadata;
- (id)metadataForFormat:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minimumTimeOffsetFromLive;
- (long long)moovAtomSize;
- (struct CGSize { double x1; double x2; })naturalSize;
- (int)naturalTimeScale;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })overallDurationHint;
- (id)preferredDisplayCriteria;
- (id)preferredMediaSelection;
- (float)preferredRate;
- (float)preferredSoundCheckVolumeNormalization;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (float)preferredVolume;
- (id)propertyListForProxy;
- (bool)providesPreciseDurationAndTiming;
- (unsigned long long)referenceRestrictions;
- (void)registerForAutomaticResourceReclamation;
- (long long)statusOfValueForKey:(id)arg1;
- (long long)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (id)subtitleAlternatesTrackGroup;
- (bool)supportsAnalysisReporting;
- (id)trackGroups;
- (id)trackReferences;
- (id)trackWithTrackID:(int)arg1;
- (id)tracks;
- (id)tracksWithMediaCharacteristic:(id)arg1;
- (id)tracksWithMediaCharacteristics:(id)arg1;
- (id)tracksWithMediaType:(id)arg1;
- (int)unusedTrackID;
- (id)valueForUndefinedKey:(id)arg1;

// Image: /System/Library/Frameworks/AVKit.framework/AVKit

- (id)avkit_chapterMetadataGroupsBestMatchingPreferredLanguages:(id)arg1;
- (id)avkit_mediaSelectionGroupForMediaCharacteristic:(id)arg1;
- (id)avkit_metadataForFormat:(id)arg1;
- (id)avkit_tracksWithMediaType:(id)arg1;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (id)createLanguageOptionGroups;

// Image: /System/Library/Frameworks/Photos.framework/Photos

- (bool)canPassthroughExport;
- (id)commonMetadataStringValueForKey:(id)arg1;
- (bool)isMarkedNotSerializable;
- (id)localizedDisplayName;
- (id)mainAudioTrack;
- (id)mainVideoTrack;
- (struct CGSize { double x1; double x2; })mainVideoTrackNaturalSize;
- (float)mainVideoTrackNominalFrameRate;
- (struct CGSize { double x1; double x2; })mainVideoTrackPreferredSize;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })mainVideoTrackPreferredTransform;
- (struct CGSize { double x1; double x2; })scaleFactors;
- (bool)valuesForKeysAreFinishedLoading:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE

- (bool)_rk_hasMediaCharacteristicAudible;

// Image: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI

- (bool)isQTAutoloopVideo;

// Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis

- (id)vcp_assetWithoutAdjustments:(id)arg1 duration:(double)arg2;
- (id)vcp_enabledTracksWithMediaType:(id)arg1;
- (id)vcp_firstEnabledTrackWithMediaType:(id)arg1;
- (bool)vcp_isMontage;
- (bool)vcp_isShortMovie;
- (struct __CVBuffer { }*)vcp_keyFrameWithMaxDimension:(unsigned long long)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })vcp_livePhotoStillDisplayTime;
- (void)vcp_scaleRampWithIntervals:(id)arg1 andRates:(id)arg2 inSlowmoTimerange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 withTimeMapping:(id)arg4 inComposition:(id)arg5;
- (void)vcp_scaleSlowmoTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 withTimeMapping:(id)arg2 inComposition:(id)arg3;

// Image: /System/Library/PrivateFrameworks/NotesSupport.framework/NotesSupport

- (struct CGImageSource { }*)newPreviewImageSource;
- (id)previewImageDataWithUTType:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (id)ic_previewImage;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (id)plVideoCodecFourCharCodeString;
- (id)plVideoCodecName;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (void)_px_setCachedDuration:(id)arg1;
- (id)px_assetByClampingToDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 error:(id*)arg2;
- (id)px_cachedDuration;
- (struct CGSize { double x1; double x2; })px_dimensionsOfFirstVideoTrack;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })px_duration;
- (void)px_loadDurationWithCompletionHandler:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate

- (bool)_pu_getVitalityTransform:(out struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }*)arg1 dimensions:(out struct CGSize { double x1; double x2; }*)arg2;
- (void)_pu_handleRequiredPropertiesLoadedWithAdditionalNormalizedTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1 completion:(id /* block */)arg2;
- (bool)_pu_isVitalityLimitingAllowed;
- (void)_pu_setCachedDuration:(id)arg1;
- (id)pu_cachedDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })pu_duration;
- (void)pu_loadDurationWithCompletionHandler:(id /* block */)arg1;
- (void)pu_loadNormalizedVitalityPerspectiveTransformWithAdditionalNormalizedTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1 completion:(id /* block */)arg2;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })pu_perspectiveTransformForMetadata:(id)arg1;
- (struct TransformMetadataItemPair { id x1; id x2; })pu_stillAssetTransformMetadataPair;
- (id)pu_stillImageTransformAssetTrack;
- (bool)pu_supportsVitality;

// Image: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation

- (void)pf_loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)pf_metadata;

// Image: /System/Library/PrivateFrameworks/QuickLookUICore.framework/QuickLookUICore

+ (void)assetIsAutoloopMedia:(id)arg1 completionHandler:(id /* block */)arg2;

- (bool)ql_canBeRotated;
- (struct CGSize { double x1; double x2; })ql_imageSizeOfFirstVideoTrack;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

+ (id)keyPathsForValuesAffectingNaturalSizeWithPreferredTransforms;

- (struct CGSize { double x1; double x2; })naturalSizeWithPreferredTransforms;

// Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback

+ (id)tvp_filteredAndSubsortedMainProgramSubtitleOptionsFromOptions:(id)arg1;
+ (id)tvp_groupedAudioAVMediaSelectionOptionsFromOptions:(id)arg1;
+ (id)tvp_sortedAuxSubtitleOptionsFromOptions:(id)arg1;

- (long long)tvp_maximumVideoRange;
- (long long)tvp_maximumVideoResolution;
- (id)tvp_mediaSelectionGroupForMediaCharacteristic:(id)arg1;
- (id)tvp_sortedAudioAVMediaSelectionOptions;
- (id)tvp_sortedSubtitleAVMediaSelectionOptions;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

+ (bool)rc_updateMetadataInFile:(id)arg1 withMetadata:(id)arg2 error:(id*)arg3;
+ (bool)rc_updateMetadataInFile:(id)arg1 withRecordingMetadata:(id)arg2 error:(id*)arg3;

- (id)rc_audioTrack;
- (id)rc_audioTracks;
- (id)rc_composedAVURL;
- (double)rc_durationInSeconds;
- (id)rc_playbackFormat;
- (id)rc_recordingMetadata;
- (void)rc_setComposedAVURL:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility

+ (id)keyPathsForValuesAffectingNaturalSizeWithPreferredTransforms;
+ (id)keyPathsForValuesAffectingTsu_isPlayable;
+ (id)tsu_codecTypesForProRes;
+ (id)tsu_containsHDRContentKeys;
+ (id)tsu_playableKeysWithKeys:(id)arg1;

- (struct CGSize { double x1; double x2; })naturalSizeWithPreferredTransforms;
- (bool)p_doesTrack:(id)arg1 matchCodecTypes:(id)arg2;
- (bool)tsu_containsHDRContent;
- (bool)tsu_containsTrackWithMediaType:(id)arg1 matchingCodecTypes:(id)arg2;
- (bool)tsu_containsVideoTrackWithDimensionsGreaterThan:(struct { int x1; int x2; })arg1;
- (bool)tsu_isPlayable;
- (void)tsu_loadValuesAsynchronouslyForKeys:(id)arg1 completionQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)tsu_trackWithTrackID:(int)arg1;
- (id)tsu_tracksWithMediaType:(id)arg1;

@end
