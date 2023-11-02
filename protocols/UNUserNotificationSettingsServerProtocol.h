
@protocol UNUserNotificationSettingsServerProtocol <NSObject>

@required

- (void)authorizationWithOptions:(void *)arg1 forNotificationSourceIdentifier:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)getAllNotificationSourcesWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)getNotificationSource:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UNNotificationSource *, void*
- (void)getNotificationSources:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)getNotificationSystemSettingsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UNNotificationSystemSettings *, void*
- (void)replaceNotificationSettings:(UNNotificationSettings *)arg1 forNotificationSourceIdentifier:(NSString *)arg2;
- (void)replaceNotificationTopicSettings:(UNNotificationSettings *)arg1 forNotificationSourceIdentifier:(NSString *)arg2 topicIdentifier:(NSString *)arg3;
- (void)resetScheduledDeliverySetting;
- (void)setNotificationSystemSettings:(UNNotificationSystemSettings *)arg1;

@end
