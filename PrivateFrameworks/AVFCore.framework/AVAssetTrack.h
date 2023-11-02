
@interface AVAssetTrack : NSObject <AVAsynchronousKeyValueLoading, AVIntegrityChecking, AVResourceReclaimable, AVResourceReclaimablePrivate, NSCopying> {
    AVAssetTrackInternal * _track;
}

@property (nonatomic, readonly) AVAsset *asset;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDefunct, nonatomic, readonly) bool defunct;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int trackID;

// Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore

+ (bool)expectsPropertyRevisedNotifications;
+ (id)keyPathsForValuesAffectingTimeRange;
+ (id)mediaCharacteristicsForMediaTypes;

- (id)_assetTrackInspector;
- (id)_fallbackTrack;
- (struct OpaqueFigAssetTrack { }*)_figAssetTrack;
- (struct OpaqueFigTrackReader { }*)_figTrackReader;
- (id)_firstAssociatedTrackWithAssociationType:(id)arg1;
- (bool)_firstFormatDescriptionIsLPCM;
- (bool)_hasEmptyEdits;
- (bool)_hasMultipleDistinctFormatDescriptions;
- (bool)_hasMultipleEdits;
- (bool)_hasScaledEdits;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;
- (id)_initWithAsset:(id)arg1 trackIndex:(long long)arg2;
- (id)_pairedForcedOnlySubtitlesTrack;
- (void)_startListeningToFigAssetTrackNotifications;
- (void)_stopListeningToFigAssetTrackNotifications;
- (bool)_subtitleFormatDescriptionMatchesTextDisplayFlags:(unsigned int)arg1 flagsMask:(unsigned int)arg2;
- (id)_trackReferences;
- (id)_weakReference;
- (long long)alternateGroupID;
- (id)asset;
- (id)associatedTracksOfType:(id)arg1;
- (id)availableMetadataFormats;
- (id)availableTrackAssociationTypes;
- (bool)canProvideSampleCursors;
- (id)commonMetadata;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (long long)defaultAlternateGroupID;
- (id)description;
- (struct CGSize { double x1; double x2; })dimensions;
- (float)estimatedDataRate;
- (id)extendedLanguageTag;
- (id)formatDescriptions;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })gaplessSourceTimeRange;
- (bool)hasAudibleBooksContent;
- (bool)hasAudioSampleDependencies;
- (bool)hasMediaCharacteristic:(id)arg1;
- (bool)hasMediaCharacteristics:(id)arg1;
- (bool)hasProtectedContent;
- (bool)hasSeamSamples;
- (unsigned long long)hash;
- (id)init;
- (bool)isAudibleBooksContentAuthorized;
- (bool)isDecodable;
- (bool)isDefunct;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isExcludedFromAutoselectionInTrackGroup;
- (bool)isPlayable;
- (bool)isSelfContained;
- (id)languageCode;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })latentBaseDecodeTimeStampOfFirstTrackFragment;
- (long long)layer;
- (void)loadAssociatedTracksOfType:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadMetadataForFormat:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)loadSamplePresentationTimeForTrackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 completionHandler:(id /* block */)arg2;
- (void)loadSegmentForTrackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 completionHandler:(id /* block */)arg2;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)locale;
- (id)loudnessInfo;
- (id)makeSampleCursorAtFirstSampleInDecodeOrder;
- (id)makeSampleCursorAtLastSampleInDecodeOrder;
- (id)makeSampleCursorWithPresentationTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)mediaCharacteristics;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })mediaDecodeTimeRange;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })mediaPresentationTimeRange;
- (id)mediaType;
- (id)metadata;
- (id)metadataForFormat:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minFrameDuration;
- (struct CGSize { double x1; double x2; })naturalSize;
- (int)naturalTimeScale;
- (float)nominalFrameRate;
- (float)peakDataRate;
- (int)playabilityValidationResult;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (float)preferredVolume;
- (long long)provisionalAlternateGroupID;
- (void)registerForAutomaticResourceReclamation;
- (bool)requiresFrameReordering;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })samplePresentationTimeForTrackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)segmentForTrackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)segments;
- (id)segmentsAsPresented;
- (bool)segmentsExcludeAudioPrimingAndRemainderDurations;
- (long long)statusOfValueForKey:(id)arg1;
- (long long)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (long long)totalSampleDataLength;
- (int)trackID;

// Image: /System/Library/Frameworks/AVKit.framework/AVKit

- (struct { long long x1; int x2; unsigned int x3; long long x4; })_avkit_findTimeForFrameUsingFrameRateSteppedByFrameCount:(long long)arg1 fromFrameAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (bool)_avkit_frameRateIsValid:(float)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_avkit_timeForFrameUsingSampleCursorSteppedByFrameCount:(long long)arg1 fromFrameAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)avkit_associatedTracksOfType:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })avkit_timeForFrameSteppedByFrameCount:(long long)arg1 fromFrameAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;

// Image: /System/Library/Frameworks/Photos.framework/Photos

- (id)commonMetadataStringValueForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })vcp_cleanApertureRect;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })vcp_endTime;
- (struct CGSize { double x1; double x2; })vcp_fullFrameSize;
- (unsigned int)vcp_imageOrientation;
- (long long)vcp_orientation;
- (unsigned long long)vcp_sampleCountForTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })vcp_startTime;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })px_changeTranslationOfTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 forAssetSize:(struct CGSize { double x1; double x2; })arg2;

- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })px_preferredTransformBasedOnNaturalSize;
- (struct CGSize { double x1; double x2; })px_transformedNaturalSize;

@end
