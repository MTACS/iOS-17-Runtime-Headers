
@interface IMDExposureNotificationManager : NSObject

+ (id)sharedInstance;

- (id)_allowedDomains;
- (bool)_bagDisabled;
- (id)_enManager;
- (id)_enTextMessageForMessageBody:(id)arg1;
- (id)_enURLsForMessageBody:(id)arg1;
- (bool)_isMessageItemEligibleForEN:(id)arg1;
- (void)processMessageItemForENURL:(id)arg1 withCompletionHandler:(id /* block */)arg2;

@end
