
@protocol SFBrowserKeyCommandSharedMethods <NSObject>

@required

- (void)autoFillFormKeyPressed;
- (void)cancelKeyPressed;
- (void)emailCurrentPage;
- (void)navigateBackKeyPressed;
- (void)navigateForwardKeyPressed;
- (void)reloadFromOriginKeyPressed;
- (void)reloadKeyPressed;
- (void)resetPageZoomLevelAndFontSize;
- (void)saveKeyPressed;
- (void)saveWebpageAlternativeKeyPressed;
- (void)takeFindStringKeyPressed;
- (void)toggleReaderKeyPressed;

@end
