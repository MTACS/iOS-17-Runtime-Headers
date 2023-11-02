
@protocol NCNotificationStaticContentAccepting <NSObject>

@required

- (NSDate *)date;
- (long long)dateFormatStyle;
- (bool)isDateAllDay;
- (NSString *)primarySubtitleText;
- (NSString *)primaryText;
- (UIImage *)prominentIcon;
- (bool)screenCaptureProhibited;
- (NSString *)secondaryText;
- (void)setDate:(NSDate *)arg1;
- (void)setDateAllDay:(bool)arg1;
- (void)setDateFormatStyle:(long long)arg1;
- (void)setPrimarySubtitleText:(NSString *)arg1;
- (void)setPrimaryText:(NSString *)arg1;
- (void)setProminentIcon:(UIImage *)arg1;
- (void)setScreenCaptureProhibited:(bool)arg1;
- (void)setSecondaryText:(NSString *)arg1;
- (void)setSubordinateIcon:(UIImage *)arg1;
- (void)setTimeZone:(NSTimeZone *)arg1;
- (UIImage *)subordinateIcon;
- (NSTimeZone *)timeZone;

@optional

- (UIView *)accessoryView;
- (NSString *)footerText;
- (NSAttributedString *)importantAttributedText;
- (NSString *)importantText;
- (UIImageConfiguration *)importantTextImageConfiguration;
- (MTVisualStylingProvider *)importantTextVisualStylingProvider;
- (UIAction *)inlineAction;
- (NSArray *)interfaceActions;
- (unsigned long long)maximumNumberOfPrimaryTextLines;
- (unsigned long long)maximumNumberOfSecondaryTextLines;
- (NSArray *)menuActions;
- (UIView *)prominentIconView;
- (void)setAccessoryView:(UIView *)arg1;
- (void)setFooterText:(NSString *)arg1;
- (void)setImportantAttributedText:(NSAttributedString *)arg1;
- (void)setImportantText:(NSString *)arg1;
- (void)setImportantTextVisualStylingProvider:(MTVisualStylingProvider *)arg1;
- (void)setInlineAction:(UIAction *)arg1;
- (void)setInterfaceActions:(NSArray *)arg1;
- (void)setMaximumNumberOfPrimaryTextLines:(unsigned long long)arg1;
- (void)setMaximumNumberOfSecondaryTextLines:(unsigned long long)arg1;
- (void)setMenuActions:(NSArray *)arg1;
- (void)setProminentIconView:(UIView *)arg1;
- (void)setSummaryText:(NSString *)arg1;
- (void)setThumbnail:(UIImage *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)summaryText;
- (UIImage *)thumbnail;
- (NSString *)title;

@end
