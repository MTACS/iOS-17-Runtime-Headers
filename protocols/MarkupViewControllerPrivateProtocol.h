
@protocol MarkupViewControllerPrivateProtocol <MarkupViewControllerProtocol>

@required

+ (bool)_isInLowMemoryEnvironment;
+ (NSData *)cleanImageMetadataFromData:(NSData *)arg1;
+ (bool)hasPrivateImageMetadata:(NSData *)arg1;

- (UIColor *)_markupBlackColor;
- (void)adjustContentInsetsForBars;
- (struct CGSize { double x1; double x2; })adjustedSourceImageSize;
- (NSUndoManager *)akUndoManager;
- (bool)allowsThumbnailViewPageReordering;
- (bool)centersIgnoringContentInsets;
- (UIScrollView *)contentViewScrollView;
- (unsigned long long)currentPDFPageIndex;
- (<MarkupViewControllerDelegate> *)delegate;
- (bool)encryptPrivateMetadata;
- (bool)fixedThumbnailView;
- (bool)forcesPDFViewTopAlignment;
- (NSString *)hostProcessBundleIdentifier;
- (UIView *)imageViewCombinedContentView;
- (unsigned long long)inkStyle;
- (bool)isShapeDetectionEnabled;
- (bool)isTouchInThumbnailView:(UITouch *)arg1;
- (UIView *)pageLabelView;
- (PDFDocument *)pdfDocument;
- (PDFView *)pdfView;
- (void)resetPageLabelFadeOutTimer;
- (void)setAkUndoManager:(NSUndoManager *)arg1;
- (void)setAllowsThumbnailViewPageReordering:(bool)arg1;
- (void)setCentersIgnoringContentInsets:(bool)arg1;
- (void)setCurrentPDFPageIndex:(unsigned long long)arg1;
- (void)setDelegate:(id <MarkupViewControllerDelegate>)arg1;
- (void)setEncryptPrivateMetadata:(bool)arg1;
- (void)setFixedThumbnailView:(bool)arg1;
- (void)setForcesPDFViewTopAlignment:(bool)arg1;
- (void)setHostProcessBundleIdentifier:(NSString *)arg1;
- (void)setInkStyle:(unsigned long long)arg1;
- (void)setShapeDetectionEnabled:(bool)arg1;
- (void)setShowShareButtonInToolbar:(bool)arg1;
- (void)setThumbnailViewStyle:(long long)arg1;
- (bool)showShareButtonInToolbar;
- (long long)thumbnailViewStyle;

@end
