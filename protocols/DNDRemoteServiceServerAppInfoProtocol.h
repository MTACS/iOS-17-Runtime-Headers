
@protocol DNDRemoteServiceServerAppInfoProtocol <NSObject>

@required

- (void)getAppInfoForBundleIdentifier:(void *)arg1 withRequestDetails:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DNDAppInfo *, NSError *, void*
- (void)getAppInfoForBundleIdentifiers:(void *)arg1 withRequestDetails:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSArray<__NSString__> *, DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray<__DNDAppInfo__> *, NSError *, void*

@end
