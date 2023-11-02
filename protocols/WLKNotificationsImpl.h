
@protocol WLKNotificationsImpl

@required

- (<WLKNotificationCenterDelegate> *)delegate;
- (void)getNotificationSettings:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UNNotificationSettings *, void*
- (bool)isCategoryBadgeSettingEnabledByUser:(long long)arg1;
- (bool)isCategoryEnabledByUser:(long long)arg1;
- (void)post:(NSString *)arg1 title:(NSString *)arg2 body:(NSString *)arg3 options:(NSDictionary *)arg4;
- (void)setBadgeNumber:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setBadgeString:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setDelegate:(id <WLKNotificationCenterDelegate>)arg1;

@end
