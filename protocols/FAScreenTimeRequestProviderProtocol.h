
@protocol FAScreenTimeRequestProviderProtocol <NSObject>

@required

- (void)cacheScreenTimeSettingToDiskWithDSID:(void *)arg1 screentimeObject:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSNumber *, FAScreentimeSettingsObjectCache *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)enableScreenTimeSettingsForDSID:(void *)arg1 screentimeObject:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSNumber *, FAScreentimeSettingsObjectCache *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)updateScreenTimeServerFlagSettingsForDSID:(void *)arg1 ephemeralAuthResults:(void *)arg2 enabled:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSNumber *, NSDictionary *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
