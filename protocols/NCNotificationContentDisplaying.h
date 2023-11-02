
@protocol NCNotificationContentDisplaying <MTVisualStylingRequiring, PLContentSizeCategoryAdjusting>

@required

- (NSString *)primarySubtitleText;
- (unsigned long long)primarySubtitleTextMaximumNumberOfLines;
- (NSString *)primaryText;
- (unsigned long long)primaryTextMaximumNumberOfLines;
- (bool)screenCaptureProhibited;
- (NSString *)secondaryText;
- (unsigned long long)secondaryTextMaximumNumberOfLines;
- (void)setPrimarySubtitleText:(NSString *)arg1;
- (void)setPrimarySubtitleTextMaximumNumberOfLines:(unsigned long long)arg1;
- (void)setPrimaryText:(NSString *)arg1;
- (void)setPrimaryTextMaximumNumberOfLines:(unsigned long long)arg1;
- (void)setScreenCaptureProhibited:(bool)arg1;
- (void)setSecondaryText:(NSString *)arg1;
- (void)setSecondaryTextMaximumNumberOfLines:(unsigned long long)arg1;
- (void)setThumbnail:(UIImage *)arg1;
- (UIImage *)thumbnail;

@optional

- (bool)alignContentToBottom;
- (NSDate *)date;
- (long long)dateFormatStyle;
- (BSUIFontProvider *)fontProvider;
- (NSString *)footerText;
- (NSAttributedString *)importantAttributedText;
- (NSString *)importantText;
- (UIImageConfiguration *)importantTextImageConfiguration;
- (MTVisualStylingProvider *)importantTextVisualStylingProvider;
- (UIAction *)inlineAction;
- (bool)isDateAllDay;
- (UIImage *)prominentIcon;
- (UIView *)prominentIconView;
- (void)setAlignContentToBottom:(bool)arg1;
- (void)setDate:(NSDate *)arg1;
- (void)setDateAllDay:(bool)arg1;
- (void)setDateFormatStyle:(long long)arg1;
- (void)setFontProvider:(BSUIFontProvider *)arg1;
- (void)setFooterText:(NSString *)arg1;
- (void)setImportantAttributedText:(NSAttributedString *)arg1;
- (void)setImportantText:(NSString *)arg1;
- (void)setImportantTextVisualStylingProvider:(MTVisualStylingProvider *)arg1;
- (void)setInlineAction:(UIAction *)arg1;
- (void)setProminentIcon:(UIImage *)arg1;
- (void)setProminentIconView:(UIView *)arg1;
- (void)setSubordinateIcon:(UIImage *)arg1;
- (void)setSummaryText:(NSString *)arg1;
- (void)setTimeZone:(NSTimeZone *)arg1;
- (UIImage *)subordinateIcon;
- (NSString *)summaryText;
- (NSTimeZone *)timeZone;

@end
