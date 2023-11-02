
@protocol VKCCornerLookupButtonDelegate <NSObject>

@required

- (void)addMetadataToVSFeedbackItem:(RVItem *)arg1;
- (void)generateVisualSearchResultForItems:(void *)arg1 queryID:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 10: NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, VKCVisualSearchResult *, NSError *, void*
- (void)lookupButton:(VKCCornerLookupButton *)arg1 didProcessResultWithDuration:(double)arg2;
- (void)lookupButton:(VKCCornerLookupButton *)arg1 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)lookupButtonDidDismissController:(VKCCornerLookupButton *)arg1;
- (void)submitVisualSearchUserFeedbackForReportIdentifier:(NSString *)arg1 userFeedbackPayload:(NSData *)arg2 sfReportData:(NSData *)arg3;

@end
