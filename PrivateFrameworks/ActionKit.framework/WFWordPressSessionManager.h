
@interface WFWordPressSessionManager : NSObject {
    NSNumber * _blogId;
    NSURL * _endpointURL;
    NSString * _password;
    NSURLSession * _session;
    NSString * _username;
}

@property (nonatomic, copy) NSNumber *blogId;
@property (nonatomic, copy) NSURL *endpointURL;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, readonly) NSURLSession *session;
@property (nonatomic, copy) NSString *username;

- (void).cxx_destruct;
- (id)blogId;
- (void)createPostWithContent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)createPostWithTitle:(id)arg1 content:(id)arg2 type:(id)arg3 date:(id)arg4 format:(id)arg5 status:(id)arg6 allowingComments:(bool)arg7 name:(id)arg8 excerpt:(id)arg9 template:(id)arg10 tags:(id)arg11 categories:(id)arg12 thumbnailId:(id)arg13 customFields:(id)arg14 completionHandler:(id /* block */)arg15;
- (id)endpointURL;
- (void)getBlogsWithCompletionHandler:(id /* block */)arg1;
- (void)getPageTemplatesWithCompletionHandler:(id /* block */)arg1;
- (void)getPost:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getPostFormatsWithCompletionHandler:(id /* block */)arg1;
- (void)getPostStatusesWithCompletionHandler:(id /* block */)arg1;
- (void)getPostTypesWithCompletionHandler:(id /* block */)arg1;
- (void)getTermsForTaxonomy:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithSessionConfiguration:(id)arg1;
- (id)password;
- (void)sendRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)sendRequestWithMethod:(id)arg1 parameters:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)session;
- (void)setBlogId:(id)arg1;
- (void)setEndpointURL:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (void)uploadFile:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)username;

@end
