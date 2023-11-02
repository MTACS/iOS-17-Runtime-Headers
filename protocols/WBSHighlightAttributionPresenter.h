
@protocol WBSHighlightAttributionPresenter <NSObject>

@required

- (NSURL *)attributionPresenterURL;
- (void)displayAttributionBannerForHighlightIfNeeded:(SLHighlight *)arg1;

@end
