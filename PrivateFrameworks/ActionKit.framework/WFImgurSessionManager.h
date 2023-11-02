
@interface WFImgurSessionManager : NSObject <NSURLSessionDataDelegate> {
    NSURL * _baseURL;
    NSString * _clientID;
    WFOAuth2Credential * _credential;
    NSMapTable * _progressTable;
    NSURLSession * _session;
}

@property (nonatomic, readonly) NSURL *baseURL;
@property (nonatomic, readonly, copy) NSString *clientID;
@property (nonatomic, copy) WFOAuth2Credential *credential;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMapTable *progressTable;
@property (nonatomic, readonly) NSURLSession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (id)baseURL;
- (id)clientID;
- (void)createAlbumWithIDs:(id)arg1 title:(id)arg2 description:(id)arg3 layout:(id)arg4 privacy:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)credential;
- (void)getAlbumLinkFromID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithClientID:(id)arg1;
- (id)initWithClientID:(id)arg1 configuration:(id)arg2;
- (id)progressTable;
- (void)sendRequest:(id)arg1 progress:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)session;
- (void)setCredential:(id)arg1;
- (void)uploadImage:(id)arg1 title:(id)arg2 description:(id)arg3 progress:(id)arg4 completionHandler:(id /* block */)arg5;

@end
