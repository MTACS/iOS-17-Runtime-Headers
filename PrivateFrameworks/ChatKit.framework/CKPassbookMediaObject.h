
@interface CKPassbookMediaObject : CKMediaObject {
    PKPass * _pass;
}

@property (nonatomic, retain) PKPass *pass;
@property (getter=isSupported, nonatomic, readonly) bool supported;

+ (id)UTITypes;
+ (id)fallbackFilenamePrefix;
+ (bool)isPreviewable;

- (void).cxx_destruct;
- (id)attachmentSummary:(unsigned long long)arg1;
- (id)generateThumbnailForWidth:(double)arg1 orientation:(BOOL)arg2;
- (bool)isSupported;
- (int)mediaType;
- (id)metricsCollectorMediaType;
- (id)pass;
- (Class)previewBalloonViewClass;
- (id)previewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)previewItemTitle;
- (void)setPass:(id)arg1;
- (bool)shouldBeQuickLooked;
- (bool)shouldShowDisclosure;
- (bool)shouldShowViewer;

@end
