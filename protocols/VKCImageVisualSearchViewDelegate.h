
@protocol VKCImageVisualSearchViewDelegate <VKCVisualSearchResultItemViewDelegate>

@required

- (void)addMetadataToVSFeedbackItem:(RVItem *)arg1;
- (void)visualSearchView:(VKCImageVisualSearchView *)arg1 analyticsEventOccured:(VKAnalyticsEvent *)arg2;
- (UIBezierPath *)visualSearchView:(VKCImageVisualSearchView *)arg1 normalizedPathForSubjectAtNormalizedPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)visualSearchView:(VKCImageVisualSearchView *)arg1 shouldShowDotForItem:(VKCVisualSearchResultItem *)arg2 allItems:(NSArray *)arg3;

@end
