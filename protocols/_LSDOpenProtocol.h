
@protocol _LSDOpenProtocol

@required

- (void)canOpenURL:(void *)arg1 publicSchemes:(void *)arg2 privateSchemes:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSURL *, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)failedToOpenApplication:(void *)arg1 withURL:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)getURLOverrideForURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (void)getiCloudHostNamesWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)openAppLink:(void *)arg1 state:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: LSAppLink *, _LSAppLinkOpenState *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)openApplicationWithIdentifier:(void *)arg1 options:(void *)arg2 useClientProcessHandle:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSDictionary *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)openURL:(void *)arg1 fileHandle:(void *)arg2 options:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSURL *, NSFileHandle *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)openUserActivityWithUniqueIdentifier:(void *)arg1 activityData:(void *)arg2 activityType:(void *)arg3 bundleIdentifier:(void *)arg4 options:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 12: NSUUID *, NSData *, NSString *, NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)performOpenOperationWithURL:(void *)arg1 fileHandle:(void *)arg2 bundleIdentifier:(void *)arg3 documentIdentifier:(void *)arg4 isContentManaged:(void *)arg5 sourceAuditToken:(void *)arg6 userInfo:(void *)arg7 options:(void *)arg8 delegate:(void *)arg9 completionHandler:(void *)arg10; // needs 10 arg types, found 16: NSURL *, NSFileHandle *, NSString *, NSString *, bool, const struct { unsigned int x1[8]; }*, NSDictionary *, NSDictionary *, <LSOpenResourceOperationDelegate> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)updateRestrictionKnowledgeWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
