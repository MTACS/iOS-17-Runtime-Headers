
@interface JXHTTPOperation : JXURLConnectionOperation {
    NSURLAuthenticationChallenge * _authenticationChallenge;
    NSObject<OS_dispatch_queue> * _blockQueue;
    NSURLCredential * _credential;
    NSObject<JXHTTPOperationDelegate> * _delegate;
    id /* block */  _didFailBlock;
    id /* block */  _didFinishLoadingBlock;
    id /* block */  _didReceiveDataBlock;
    id /* block */  _didReceiveResponseBlock;
    id /* block */  _didSendDataBlock;
    id /* block */  _didStartBlock;
    NSNumber * _downloadProgress;
    NSDate * _finishDate;
    NSString * _password;
    bool  _performsBlocksOnMainQueue;
    NSObject<JXHTTPRequestBody> * _requestBody;
    NSString * _responseDataFilePath;
    NSDate * _startDate;
    bool  _trustAllHosts;
    NSArray * _trustedHosts;
    NSString * _uniqueString;
    bool  _updatesNetworkActivityIndicator;
    NSNumber * _uploadProgress;
    bool  _useCredentialStorage;
    id  _userObject;
    NSString * _username;
    id /* block */  _willCacheResponseBlock;
    id /* block */  _willNeedNewBodyStreamBlock;
    id /* block */  _willSendRequestForAuthenticationChallengeBlock;
    id /* block */  _willSendRequestRedirectBlock;
    id /* block */  _willStartBlock;
}

@property (retain) NSURLAuthenticationChallenge *authenticationChallenge;
@property (retain) NSObject<OS_dispatch_queue> *blockQueue;
@property (retain) NSURLCredential *credential;
@property NSObject<JXHTTPOperationDelegate> *delegate;
@property (copy) id /* block */ didFailBlock;
@property (copy) id /* block */ didFinishLoadingBlock;
@property (copy) id /* block */ didReceiveDataBlock;
@property (copy) id /* block */ didReceiveResponseBlock;
@property (copy) id /* block */ didSendDataBlock;
@property (copy) id /* block */ didStartBlock;
@property (retain) NSNumber *downloadProgress;
@property (readonly) double elapsedSeconds;
@property (retain) NSDate *finishDate;
@property (copy) NSString *password;
@property bool performsBlocksOnMainQueue;
@property (retain) NSObject<JXHTTPRequestBody> *requestBody;
@property (nonatomic) unsigned long long requestCachePolicy;
@property (nonatomic, retain) NSDictionary *requestHeaders;
@property (nonatomic, retain) NSURL *requestMainDocumentURL;
@property (nonatomic, retain) NSString *requestMethod;
@property (nonatomic) unsigned long long requestNetworkServiceType;
@property (nonatomic) bool requestShouldHandleCookies;
@property (nonatomic) bool requestShouldUsePipelining;
@property (nonatomic) double requestTimeoutInterval;
@property (nonatomic, retain) NSURL *requestURL;
@property (nonatomic, copy) NSString *responseDataFilePath;
@property (retain) NSDate *startDate;
@property bool trustAllHosts;
@property (copy) NSArray *trustedHosts;
@property (retain) NSString *uniqueString;
@property bool updatesNetworkActivityIndicator;
@property (retain) NSNumber *uploadProgress;
@property bool useCredentialStorage;
@property (retain) id userObject;
@property (copy) NSString *username;
@property (copy) id /* block */ willCacheResponseBlock;
@property (copy) id /* block */ willNeedNewBodyStreamBlock;
@property (copy) id /* block */ willSendRequestForAuthenticationChallengeBlock;
@property (copy) id /* block */ willSendRequestRedirectBlock;
@property (copy) id /* block */ willStartBlock;

+ (id)withURLString:(id)arg1;
+ (id)withURLString:(id)arg1 queryParameters:(id)arg2;

- (void).cxx_destruct;
- (void)addValue:(id)arg1 forRequestHeader:(id)arg2;
- (id)authenticationChallenge;
- (id /* block */)blockForSelector:(SEL)arg1;
- (id)blockQueue;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (id)connection:(id)arg1 needNewBodyStream:(id)arg2;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (bool)connectionShouldUseCredentialStorage:(id)arg1;
- (id)credential;
- (void)dealloc;
- (id)delegate;
- (id /* block */)didFailBlock;
- (id /* block */)didFinishLoadingBlock;
- (id /* block */)didReceiveDataBlock;
- (id /* block */)didReceiveResponseBlock;
- (id /* block */)didSendDataBlock;
- (id /* block */)didStartBlock;
- (id)downloadProgress;
- (double)elapsedSeconds;
- (void)finalizeRequestBody;
- (id)finishDate;
- (id)init;
- (void)main;
- (id)password;
- (void)performDelegateMethod:(SEL)arg1;
- (bool)performsBlocksOnMainQueue;
- (id)requestBody;
- (unsigned long long)requestCachePolicy;
- (id)requestHeaders;
- (id)requestMainDocumentURL;
- (id)requestMethod;
- (unsigned long long)requestNetworkServiceType;
- (bool)requestShouldHandleCookies;
- (bool)requestShouldUsePipelining;
- (double)requestTimeoutInterval;
- (id)requestURL;
- (id)responseData;
- (id)responseDataFilePath;
- (long long)responseExpectedContentLength;
- (id)responseExpectedFileName;
- (id)responseHeaders;
- (id)responseJSON;
- (id)responseMIMEType;
- (long long)responseStatusCode;
- (id)responseStatusString;
- (id)responseString;
- (id)responseTextEncodingName;
- (id)responseURL;
- (void)setAuthenticationChallenge:(id)arg1;
- (void)setBlockQueue:(id)arg1;
- (void)setCredential:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidFailBlock:(id /* block */)arg1;
- (void)setDidFinishLoadingBlock:(id /* block */)arg1;
- (void)setDidReceiveDataBlock:(id /* block */)arg1;
- (void)setDidReceiveResponseBlock:(id /* block */)arg1;
- (void)setDidSendDataBlock:(id /* block */)arg1;
- (void)setDidStartBlock:(id /* block */)arg1;
- (void)setDownloadProgress:(id)arg1;
- (void)setFinishDate:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setPerformsBlocksOnMainQueue:(bool)arg1;
- (void)setRequestBody:(id)arg1;
- (void)setRequestCachePolicy:(unsigned long long)arg1;
- (void)setRequestHeaders:(id)arg1;
- (void)setRequestMainDocumentURL:(id)arg1;
- (void)setRequestMethod:(id)arg1;
- (void)setRequestNetworkServiceType:(unsigned long long)arg1;
- (void)setRequestShouldHandleCookies:(bool)arg1;
- (void)setRequestShouldUsePipelining:(bool)arg1;
- (void)setRequestTimeoutInterval:(double)arg1;
- (void)setRequestURL:(id)arg1;
- (void)setResponseDataFilePath:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTrustAllHosts:(bool)arg1;
- (void)setTrustedHosts:(id)arg1;
- (void)setUniqueString:(id)arg1;
- (void)setUpdatesNetworkActivityIndicator:(bool)arg1;
- (void)setUploadProgress:(id)arg1;
- (void)setUseCredentialStorage:(bool)arg1;
- (void)setUserObject:(id)arg1;
- (void)setUsername:(id)arg1;
- (void)setValue:(id)arg1 forRequestHeader:(id)arg2;
- (void)setWillCacheResponseBlock:(id /* block */)arg1;
- (void)setWillNeedNewBodyStreamBlock:(id /* block */)arg1;
- (void)setWillSendRequestForAuthenticationChallengeBlock:(id /* block */)arg1;
- (void)setWillSendRequestRedirectBlock:(id /* block */)arg1;
- (void)setWillStartBlock:(id /* block */)arg1;
- (id)startDate;
- (bool)trustAllHosts;
- (id)trustedHosts;
- (id)uniqueString;
- (bool)updatesNetworkActivityIndicator;
- (id)uploadProgress;
- (bool)useCredentialStorage;
- (id)userObject;
- (id)username;
- (id /* block */)willCacheResponseBlock;
- (void)willFinish;
- (id /* block */)willNeedNewBodyStreamBlock;
- (id /* block */)willSendRequestForAuthenticationChallengeBlock;
- (id /* block */)willSendRequestRedirectBlock;
- (id /* block */)willStartBlock;

@end
