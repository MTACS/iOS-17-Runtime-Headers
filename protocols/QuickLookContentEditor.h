
@protocol QuickLookContentEditor <MarkupViewControllerPrivateProtocol>

@required

+ (struct CGSize { double x1; double x2; })suggestedContentSizeForData:(NSData *)arg1;
+ (struct CGSize { double x1; double x2; })suggestedContentSizeForURL:(NSURL *)arg1;

- (bool)acceptSingleTouch:(UITouch *)arg1;
- (bool)canEncryptDocument;
- (<QuickLookContentEditorDelegate> *)delegate;
- (bool)documentIsLocked;
- (NSString *)filledInfoButtonGlyphName;
- (UIFindInteraction *)findInteraction;
- (void)flattenImageForAnalysis;
- (bool)hasResultsForVisualSearch;
- (NSString *)infoButtonGlyphName;
- (void)infoButtonTapped;
- (bool)isInteractionActive;
- (bool)isVisualSearchEnabled;
- (void)loadWithData:(void *)arg1 archivedModelData:(void *)arg2 placeholderImage:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSData *, NSData *, UIImage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)loadWithURL:(void *)arg1 archivedModelData:(void *)arg2 placeholderImage:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSURL *, NSData *, UIImage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (unsigned long long)presentationMode;
- (void)setDelegate:(id <QuickLookContentEditorDelegate>)arg1;
- (void)setPresentationMode:(unsigned long long)arg1;
- (void)setShouldEnterVisualSearchAfterNextAnalysis:(bool)arg1;
- (void)setShouldHighlightTextAndDDAfterNextAnalysis:(bool)arg1;
- (void)setShouldUpliftSubjectAfterNextAnalysis:(bool)arg1;
- (void)setupAndStartImageAnalysisIfNeeded;
- (bool)shouldEnterVisualSearchAfterNextAnalysis;
- (void)shouldHideMarkupOverlays:(bool)arg1 animated:(bool)arg2;
- (bool)shouldHighlightTextAndDDAfterNextAnalysis;
- (bool)shouldUpliftSubjectAfterNextAnalysis;
- (void)stopImageAnalysis;
- (UIView *)transitioningView;
- (void)updateForFullScreen:(bool)arg1 animated:(bool)arg2;
- (void)updateThumbnailView;

@optional

- (void)hideBanner;
- (void)showBannerWithConfiguration:(QuickLookContentEditorBannerConfiguration *)arg1;
- (void)showBannerWithConfiguration:(id <MUBannerConfiguration>)arg1 primaryAction:(UIAction *)arg2 dismissAction:(UIAction *)arg3;

@end
