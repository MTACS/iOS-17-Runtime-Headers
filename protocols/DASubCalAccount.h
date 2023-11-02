
@protocol DASubCalAccount <NSObject>

@required

- (NSString *)calendarExternalId;
- (double)refreshInterval;
- (void)setRefreshInterval:(double)arg1;
- (void)setShouldRemoveAlarms:(bool)arg1;
- (void)setShouldRemoveAttachments:(bool)arg1;
- (void)setUseFTP:(bool)arg1;
- (bool)shouldRemoveAlarms;
- (bool)shouldRemoveAttachments;
- (NSURL *)subscriptionURL;
- (bool)useFTP;

@end
