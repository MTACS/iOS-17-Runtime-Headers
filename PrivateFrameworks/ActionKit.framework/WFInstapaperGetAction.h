
@interface WFInstapaperGetAction : WFInstapaperAction

- (id)connectionTypes;
- (void)engine:(id)arg1 connection:(id)arg2 didReceiveBookmarks:(id)arg3 ofUser:(id)arg4 forFolder:(id)arg5;
- (bool)includeSpecialFolders;
- (void)runAsynchronouslyWithInput:(id)arg1 selectedFolder:(id)arg2;

@end
