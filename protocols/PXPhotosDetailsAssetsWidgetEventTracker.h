
@protocol PXPhotosDetailsAssetsWidgetEventTracker

@required

- (bool)isDisplayingCuratedContent;
- (void)logContentViewDidDisappear;
- (void)logContentViewWillAppear;
- (void)setIsDisplayingCuratedContent:(bool)arg1;

@end
