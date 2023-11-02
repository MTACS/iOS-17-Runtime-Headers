
@protocol TabDocumentRenderingProgressEventObserving <NSObject>

@optional

- (void)webViewDidFirstMeaningfulPaintForTabDocument:(TabDocument *)arg1;
- (void)webViewDidFirstVisuallyNonEmptyLayoutForTabDocument:(TabDocument *)arg1;

@end
