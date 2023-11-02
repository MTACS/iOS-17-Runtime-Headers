
@protocol STPersistenceSource <NSObject>

@required

- (void)saveCommunicationSafetySettingsForDSID:(void *)arg1 checkForUnsafePhotos:(void *)arg2 communicationSafetyNotificationEnabled:(void *)arg3 communicationSafetyAnalyticsEnabled:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: NSString *, bool, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (STUserData *)userDataWithIdentifier:(NSString *)arg1;

@end
