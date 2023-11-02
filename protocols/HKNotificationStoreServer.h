
@protocol HKNotificationStoreServer <NSObject>

@required

- (void)remote_fetchBadgeForDomain:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKBadge *, NSError *, void*
- (void)remote_postCompanionUserNotificationOfType:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_postNotificationWithRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: UNNotificationRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_setBadge:(void *)arg1 forDomain:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: HKBadge *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
