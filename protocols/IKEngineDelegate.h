
@protocol IKEngineDelegate <NSObject>

@optional

- (void)engine:(IKEngine *)arg1 connection:(IKURLConnection *)arg2 didAddBookmark:(IKBookmark *)arg3;
- (void)engine:(IKEngine *)arg1 connection:(IKURLConnection *)arg2 didAddFolder:(IKFolder *)arg3;
- (void)engine:(IKEngine *)arg1 connection:(IKURLConnection *)arg2 didArchiveBookmark:(IKBookmark *)arg3;
- (void)engine:(IKEngine *)arg1 connection:(IKURLConnection *)arg2 didDeleteBookmarkWithBookmarkID:(long long)arg3;
- (void)engine:(IKEngine *)arg1 connection:(IKURLConnection *)arg2 didDeleteFolderWithFolderID:(long long)arg3;
- (void)engine:(IKEngine *)arg1 connection:(IKURLConnection *)arg2 didMoveBookmark:(IKBookmark *)arg3 toFolderWithFolderID:(long long)arg4;
- (void)engine:(IKEngine *)arg1 connection:(IKURLConnection *)arg2 didOrderFolders:(NSArray *)arg3;
- (void)engine:(IKEngine *)arg1 connection:(IKURLConnection *)arg2 didReceiveAuthToken:(NSString *)arg3 andTokenSecret:(NSString *)arg4;
- (void)engine:(IKEngine *)arg1 connection:(IKURLConnection *)arg2 didReceiveBookmarks:(NSArray *)arg3 ofUser:(IKUser *)arg4 forFolder:(IKFolder *)arg5;
- (void)engine:(IKEngine *)arg1 connection:(IKURLConnection *)arg2 didReceiveFolders:(NSArray *)arg3;
- (void)engine:(IKEngine *)arg1 connection:(IKURLConnection *)arg2 didReceiveText:(NSString *)arg3 ofBookmarkWithBookmarkID:(long long)arg4;
- (void)engine:(IKEngine *)arg1 connection:(IKURLConnection *)arg2 didStarBookmark:(IKBookmark *)arg3;
- (void)engine:(IKEngine *)arg1 connection:(IKURLConnection *)arg2 didUnarchiveBookmark:(IKBookmark *)arg3;
- (void)engine:(IKEngine *)arg1 connection:(IKURLConnection *)arg2 didUnstarBookmark:(IKBookmark *)arg3;
- (void)engine:(IKEngine *)arg1 connection:(IKURLConnection *)arg2 didUpdateReadProgressOfBookmark:(IKBookmark *)arg3;
- (void)engine:(IKEngine *)arg1 connection:(IKURLConnection *)arg2 didVerifyCredentialsForUser:(IKUser *)arg3;
- (void)engine:(IKEngine *)arg1 didCancelConnection:(IKURLConnection *)arg2;
- (void)engine:(IKEngine *)arg1 didFailConnection:(IKURLConnection *)arg2 error:(NSError *)arg3;
- (void)engine:(IKEngine *)arg1 didFinishConnection:(IKURLConnection *)arg2;
- (void)engine:(IKEngine *)arg1 willStartConnection:(IKURLConnection *)arg2;

@end
