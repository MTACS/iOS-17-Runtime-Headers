
@protocol HKAuthorizationStoreWriteServer <NSObject>

@required

- (void)remote_setAuthorizationStatuses:(void *)arg1 authorizationModes:(void *)arg2 forBundleIdentifier:(void *)arg3 options:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: NSDictionary *, NSDictionary *, NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_setObjectAuthorizationStatuses:(void *)arg1 forBundleIdentifier:(void *)arg2 sessionIdentifier:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSDictionary *, NSString *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_setRequestedAuthorizationForBundleIdentifier:(void *)arg1 shareTypes:(void *)arg2 readTypes:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSSet *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
