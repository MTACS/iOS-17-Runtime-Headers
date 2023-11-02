
@interface WFTodoistSessionManager : NSObject {
    NSURL * _baseURL;
    WFOAuth2Credential * _credential;
    NSURLSession * _session;
    NSString * _syncToken;
}

@property (nonatomic, readonly, copy) NSURL *baseURL;
@property (nonatomic, copy) WFOAuth2Credential *credential;
@property (nonatomic, readonly) NSURLSession *session;
@property (nonatomic, copy) NSString *syncToken;

- (void).cxx_destruct;
- (id)baseURL;
- (void)createFileOnItemWithId:(long long)arg1 withFile:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)createItemInProject:(id)arg1 content:(id)arg2 dueDateString:(id)arg3 reminderDateString:(id)arg4 reminderService:(long long)arg5 priority:(long long)arg6 note:(id)arg7 completionHandler:(id /* block */)arg8;
- (id)credential;
- (void)getProjectsWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithSessionConfiguration:(id)arg1;
- (void)requestWithCommands:(id)arg1 resourceTypes:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)session;
- (void)setCredential:(id)arg1;
- (void)setSyncToken:(id)arg1;
- (id)syncToken;

@end
