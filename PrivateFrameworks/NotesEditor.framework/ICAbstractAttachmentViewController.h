
@interface ICAbstractAttachmentViewController : UIViewController {
    bool  _forManualRendering;
    double  _foregroundAlpha;
    UIColor * _highlightColor;
    ICSearchResultRegexMatchFinder * _highlightPatternRegexFinder;
    bool  _isInResponderChain;
}

@property (readonly) bool forManualRendering;
@property (nonatomic) double foregroundAlpha;
@property (nonatomic, copy) UIColor *highlightColor;
@property (nonatomic, retain) ICSearchResultRegexMatchFinder *highlightPatternRegexFinder;
@property (nonatomic, readonly) bool isInResponderChain;

- (void).cxx_destruct;
- (void)contentSizeCategoryDidChange;
- (bool)forManualRendering;
- (double)foregroundAlpha;
- (id)highlightColor;
- (id)highlightPatternRegexFinder;
- (bool)isInResponderChain;
- (void)prepareForPrinting;
- (void)setForegroundAlpha:(double)arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setHighlightPatternRegexFinder:(id)arg1;
- (void)zoomFactorOrInsetsDidChange;

@end
