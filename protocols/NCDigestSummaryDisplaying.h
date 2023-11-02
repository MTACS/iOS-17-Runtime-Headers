
@protocol NCDigestSummaryDisplaying

@required

- (<NCNotificationSummaryContentProviding> *)appsSummaryContentProvider;
- (UIView *)clearControlView;
- (<NCNotificationSummaryContentProviding> *)communicationsSummaryContentProvider;
- (unsigned long long)count;
- (NSDate *)date;
- (long long)dateFormatStyle;
- (NSArray *)featuredNotificationContentProviders;
- (NSString *)heading;
- (bool)presentFeaturedNotificationsInline;
- (void)setAppsSummaryContentProvider:(id <NCNotificationSummaryContentProviding>)arg1;
- (void)setClearControlView:(UIView *)arg1;
- (void)setCommunicationsSummaryContentProvider:(id <NCNotificationSummaryContentProviding>)arg1;
- (void)setCount:(unsigned long long)arg1;
- (void)setDate:(NSDate *)arg1;
- (void)setDateFormatStyle:(long long)arg1;
- (void)setFeaturedNotificationContentProviders:(NSArray *)arg1;
- (void)setHeading:(NSString *)arg1;
- (void)setPresentFeaturedNotificationsInline:(bool)arg1;
- (void)setSubheading:(NSString *)arg1;
- (void)setTimeZone:(NSTimeZone *)arg1;
- (NSString *)subheading;
- (NSTimeZone *)timeZone;

@end
