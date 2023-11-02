
@protocol NCNotificationSummaryContentProviding <NSObject>

@required

- (bool)hideSummaryIconViews;
- (bool)isIconViewLeading;
- (void)setSummaryDate:(NSDate *)arg1;
- (void)setSummaryIconSymbolName:(NSString *)arg1;
- (void)setSummaryTitle:(NSString *)arg1;
- (void)setSummaryTitleFontName:(NSString *)arg1;
- (NSString *)summary;
- (NSDate *)summaryDate;
- (NSString *)summaryIconSymbolName;
- (NSArray *)summaryIconViews;
- (NSString *)summaryTitle;
- (NSString *)summaryTitleFontName;

@end
