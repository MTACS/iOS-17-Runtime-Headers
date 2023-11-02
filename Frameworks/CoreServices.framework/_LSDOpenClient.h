
@interface _LSDOpenClient : _LSDClient <_LSDOpenProtocol>

- (void)canOpenURL:(id)arg1 publicSchemes:(bool)arg2 privateSchemes:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)failedToOpenApplication:(id)arg1 withURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getURLOverrideForURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getiCloudHostNamesWithCompletionHandler:(id /* block */)arg1;
- (void)invokeServiceInvocation:(id)arg1 isReply:(bool)arg2;
- (void)openAppLink:(id)arg1 state:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)openApplicationWithIdentifier:(id)arg1 options:(id)arg2 useClientProcessHandle:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)openURL:(id)arg1 fileHandle:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)openUserActivityWithUniqueIdentifier:(id)arg1 activityData:(id)arg2 activityType:(id)arg3 bundleIdentifier:(id)arg4 options:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)performOpenOperationWithURL:(id)arg1 fileHandle:(id)arg2 bundleIdentifier:(id)arg3 documentIdentifier:(id)arg4 isContentManaged:(bool)arg5 sourceAuditToken:(const struct { unsigned int x1[8]; }*)arg6 userInfo:(id)arg7 options:(id)arg8 delegate:(id)arg9 completionHandler:(id /* block */)arg10;
- (bool)serviceSelectorRequiresDatabaseContext:(SEL)arg1;
- (void)updateRestrictionKnowledgeWithCompletionHandler:(id /* block */)arg1;
- (void)willHandleInvocation:(id)arg1 isReply:(bool)arg2;

@end
