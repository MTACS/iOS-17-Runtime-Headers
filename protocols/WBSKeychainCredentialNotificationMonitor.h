
@protocol WBSKeychainCredentialNotificationMonitor <NSObject>

@required

- (id)addObserverWithBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)removeObserverForToken:(id)arg1;
- (void)triggerExternalNotification;

@end
