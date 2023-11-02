
@protocol MUPlaceCardAnalyticsProvider <GEOLogContextDelegate>

@required

- (NSArray *)analyticModules;
- (int)defaultTargetForPlaceCardAnalytics;
- (NSArray *)generateAvailableActionForAnalytics;
- (NSArray *)generateUnactionableUIElementsForAnalytics;
- (int)getPlaceCardTypeForAnalytics;
- (<_MKPlaceItem> *)placeItem;
- (void)requestHostToLogFeedbackTypeIfNeeded:(int)arg1;
- (NSArray *)revealedModules;

@end
