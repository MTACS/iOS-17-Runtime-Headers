
@interface CKAudioMediaObject : CKAVMediaObject <CKMediaObjectMetadataPreview> {
    double  _durationFromMetadata;
    NSArray * _powerLevelsFromMetadata;
    NSURL * _temporaryFileURL;
    long long  _totalPacketsCount;
}

@property (getter=isAudioMessage, nonatomic, readonly) bool audioMessage;
@property (nonatomic) double durationFromMetadata;
@property (nonatomic, retain) NSArray *powerLevels;
@property (nonatomic, retain) NSArray *powerLevelsFromMetadata;
@property (nonatomic, readonly, copy) NSString *previewMetadataFilenameExtension;
@property (nonatomic, readonly) bool supportsPreviewMetadata;
@property (nonatomic, retain) NSURL *temporaryFileURL;
@property (nonatomic) long long totalPacketsCount;

+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;
+ (void)_cachePowerLevels:(id)arg1 forKey:(id)arg2;
+ (id)_cachedPowerLevelsForKey:(id)arg1;
+ (id)fallbackFilenamePrefix;
+ (id)generateThumbnailForPowerLevelsFromMetadata:(id)arg1 color:(id)arg2;
+ (id)generateThumbnailForWidth:(double)arg1 color:(id)arg2 powerLevels:(id)arg3 fileURL:(id)arg4;
+ (id)generateWaveformFromPowerLevels:(double*)arg1 powerLevelsCount:(unsigned long long)arg2 color:(id)arg3;
+ (bool)isPreviewable;
+ (void)normalizedPowerLevelsForPowerValues:(id)arg1 powerLevelsCount:(unsigned long long)arg2 powerLevels:(double*)arg3;
+ (bool)shouldUseTranscoderGeneratedPreviewSize;

- (void).cxx_destruct;
- (id)attachmentSummary:(unsigned long long)arg1;
- (Class)balloonViewClass;
- (bool)canExport;
- (id)composeWaveformForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)composeWaveformForWidth:(double)arg1 orientation:(BOOL)arg2 withColor:(id)arg3;
- (double)duration;
- (double)durationFromMetadata;
- (id)generatePlaceholderThumbnailForWidth:(double)arg1;
- (id)generatePlaceholderThumbnailForWidth:(double)arg1 withColor:(id)arg2;
- (id)generatePreviewFromThumbnail:(id)arg1 width:(double)arg2 orientation:(BOOL)arg3;
- (id)generatePreviewFromThumbnail:(id)arg1 width:(double)arg2 orientation:(BOOL)arg3 withColor:(id)arg4;
- (id)generateThumbnailForWidth:(double)arg1;
- (id)generateThumbnailForWidth:(double)arg1 withColor:(id)arg2;
- (bool)isAudioMessage;
- (bool)isPreviewable;
- (int)mediaType;
- (id)metricsCollectorMediaType;
- (id)powerLevels;
- (id)powerLevelsFromMetadata;
- (id)previewFilenameExtension;
- (id)previewItemTitle;
- (id)previewMetadataFilenameExtension;
- (id)previewMetadataWithContentsOfURL:(id)arg1 error:(out id*)arg2;
- (void)restorePreviewMetadataFromDict:(id)arg1;
- (void)savePreview:(id)arg1 toURL:(id)arg2 forOrientation:(BOOL)arg3;
- (id)savedPreviewFromURL:(id)arg1 forOrientation:(BOOL)arg2;
- (void)setDurationFromMetadata:(double)arg1;
- (void)setPowerLevels:(id)arg1;
- (void)setPowerLevelsFromMetadata:(id)arg1;
- (void)setTemporaryFileURL:(id)arg1;
- (void)setTotalPacketsCount:(long long)arg1;
- (bool)shouldBeQuickLooked;
- (bool)shouldSuppressPreview;
- (bool)supportsPreviewMetadata;
- (bool)supportsUnknownSenderPreview;
- (id)temporaryFileURL;
- (id)temporaryWaveformWithWidth:(double)arg1 orientation:(BOOL)arg2;
- (long long)totalPacketsCount;
- (id)waveformForOrientation:(BOOL)arg1;
- (bool)writePreviewMetadata:(id)arg1 toURL:(id)arg2 error:(out id*)arg3;

@end
