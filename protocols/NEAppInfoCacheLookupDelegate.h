
@protocol NEAppInfoCacheLookupDelegate

@required

- (void)fetchAppInfoForPID:(void *)arg1 UUID:(void *)arg2 bundleID:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: int, NSUUID *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NEAppInfo *, void*

@end
