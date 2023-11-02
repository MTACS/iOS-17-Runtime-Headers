
@protocol ICDocCamZoomablePageContentDelegate <NSObject>

@required

- (void)hideBarsForZoomablePageContentViewController:(ICDocCamZoomablePageContentViewController *)arg1;
- (bool)isShowingBarsForZoomablePageContentViewController:(ICDocCamZoomablePageContentViewController *)arg1;
- (void)showBarsForZoomablePageContentViewController:(ICDocCamZoomablePageContentViewController *)arg1;
- (void)switchBarVisibilityForZoomablePageContentViewController:(ICDocCamZoomablePageContentViewController *)arg1;

@optional

- (void)pencilDownInZoomablePageContentViewController:(ICDocCamZoomablePageContentViewController *)arg1;

@end
