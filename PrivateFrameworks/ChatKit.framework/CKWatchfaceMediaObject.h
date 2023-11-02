
@interface CKWatchfaceMediaObject : CKMediaObject {
    BOOL  _cachedOrientation;
    double  _cachedWidth;
    LPLinkMetadata * _linkMetadata;
}

@property (nonatomic) BOOL cachedOrientation;
@property (nonatomic) double cachedWidth;
@property (nonatomic, retain) LPLinkMetadata *linkMetadata;

+ (id)UTITypes;
+ (bool)canGeneratePreviewInMVSHostProcess;
+ (bool)isPreviewable;
+ (bool)shouldUseTranscoderGeneratedPreviewSize;

- (void).cxx_destruct;
- (bool)_isCachedFileLocationValid;
- (id)attachmentSummary:(unsigned long long)arg1;
- (BOOL)cachedOrientation;
- (double)cachedWidth;
- (id)generatePreviewFromThumbnail:(id)arg1 width:(double)arg2 orientation:(BOOL)arg3;
- (bool)generatePreviewOutOfProcess;
- (id)generateThumbnailForWidth:(double)arg1 orientation:(BOOL)arg2;
- (bool)hasOutOfProcessPreviewGenerator;
- (id)linkMetadata;
- (id)linkMetadataForWidth:(double)arg1 orientation:(BOOL)arg2;
- (int)mediaType;
- (id)metricsCollectorMediaType;
- (Class)placeholderBalloonViewClass;
- (Class)previewBalloonViewClass;
- (void)setCachedOrientation:(BOOL)arg1;
- (void)setCachedWidth:(double)arg1;
- (void)setLinkMetadata:(id)arg1;

@end
