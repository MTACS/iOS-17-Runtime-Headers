
@protocol NCNotificationSummaryContentDisplaying <MTVisualStylingRequiring, PLContentSizeCategoryAdjusting>

@required

- (bool)isIconViewLeading;
- (void)setIconViewLeading:(bool)arg1;
- (void)setSummary:(NSString *)arg1;
- (void)setSummaryDate:(NSDate *)arg1;
- (void)setSummaryIconSymbolName:(NSString *)arg1;
- (void)setSummaryIconViews:(NSArray *)arg1;
- (void)setSummaryTitle:(NSString *)arg1;
- (void)setSummaryTitleFontName:(NSString *)arg1;
- (NSString *)summary;
- (NSDate *)summaryDate;
- (NSString *)summaryIconSymbolName;
- (NSArray *)summaryIconViews;
- (NSString *)summaryTitle;
- (NSString *)summaryTitleFontName;

@end
