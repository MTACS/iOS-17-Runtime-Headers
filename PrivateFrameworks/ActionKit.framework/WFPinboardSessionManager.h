
@interface WFPinboardSessionManager : NSObject {
    NSString * _apiToken;
    NSURL * _baseURL;
    NSDateFormatter * _dateTimeFormatter;
    NSString * _password;
    NSURLSession * _session;
    NSString * _username;
}

@property (nonatomic, copy) NSString *apiToken;
@property (nonatomic, readonly) NSURL *baseURL;
@property (nonatomic, readonly) NSDateFormatter *dateTimeFormatter;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, readonly) NSURLSession *session;
@property (nonatomic, copy) NSString *username;

- (void).cxx_destruct;
- (void)addBookmark:(id)arg1 withTitle:(id)arg2 parameters:(id)arg3 completion:(id /* block */)arg4;
- (id)apiToken;
- (id)authenticatedTaskWithURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)baseURL;
- (id)dateTimeFormatter;
- (void)getBookmarksWithTags:(id)arg1 limit:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)getModifiedDateWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithSession:(id)arg1;
- (id)initWithSessionConfiguration:(id)arg1;
- (id)password;
- (id)session;
- (void)setApiToken:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;

@end
