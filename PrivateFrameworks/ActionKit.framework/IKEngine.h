
@interface IKEngine : NSObject {
    NSString * _OAuthToken;
    NSString * _OAuthTokenSecret;
    NSMutableDictionary * _connections;
    <IKEngineDelegate> * _delegate;
}

@property (nonatomic, copy) NSString *OAuthToken;
@property (nonatomic, copy) NSString *OAuthTokenSecret;
@property (nonatomic) <IKEngineDelegate> *delegate;

+ (void)setOAuthConsumerKey:(id)arg1 andConsumerSecret:(id)arg2;

- (id)OAuthToken;
- (id)OAuthTokenSecret;
- (id)_signatureWithKey:(id)arg1 baseString:(id)arg2;
- (id)_startConnectionWithAPIPath:(id)arg1 bodyArguments:(id)arg2 type:(int)arg3 userInfo:(id)arg4 context:(id)arg5;
- (id)addBookmarkWithURL:(id)arg1 title:(id)arg2 description:(id)arg3 folder:(id)arg4 resolveFinalURL:(bool)arg5 userInfo:(id)arg6;
- (id)addBookmarkWithURL:(id)arg1 userInfo:(id)arg2;
- (id)addFolderWithTitle:(id)arg1 userInfo:(id)arg2;
- (id)archiveBookmark:(id)arg1 userInfo:(id)arg2;
- (id)authTokenForUsername:(id)arg1 password:(id)arg2 userInfo:(id)arg3;
- (id)bookmarksInFolder:(id)arg1 limit:(unsigned long long)arg2 existingBookmarks:(id)arg3 userInfo:(id)arg4;
- (id)bookmarksWithUserInfo:(id)arg1;
- (void)cancelAllConnections;
- (void)cancelConnection:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)connectionForIdentifier:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)deleteBookmark:(id)arg1 userInfo:(id)arg2;
- (id)deleteFolder:(id)arg1 userInfo:(id)arg2;
- (id)foldersWithUserInfo:(id)arg1;
- (id)identifierForConnection:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)moveBookmark:(id)arg1 toFolder:(id)arg2 userInfo:(id)arg3;
- (unsigned long long)numberOfConnections;
- (id)orderFolders:(id)arg1 userInfo:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setOAuthToken:(id)arg1;
- (void)setOAuthTokenSecret:(id)arg1;
- (id)starBookmark:(id)arg1 userInfo:(id)arg2;
- (id)textOfBookmark:(id)arg1 userInfo:(id)arg2;
- (id)unarchiveBookmark:(id)arg1 userInfo:(id)arg2;
- (id)unstarBookmark:(id)arg1 userInfo:(id)arg2;
- (id)updateReadProgressOfBookmark:(id)arg1 toProgress:(double)arg2 userInfo:(id)arg3;
- (id)verifyCredentialsWithUserInfo:(id)arg1;

@end
