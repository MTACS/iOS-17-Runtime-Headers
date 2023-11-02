
@interface MCLURLDataLoaderTask : NSObject {
    bool  _background;
    bool  _cachedResponse;
    bool  _cancelled;
    NSString * _category;
    id /* block */  _completion;
    NSError * _error;
    NSURLRequest * _originalRequest;
    float  _progress;
    id /* block */  _receiveDataHandler;
    id /* block */  _redirectHandler;
    NSURLRequest * _request;
    NSHTTPURLResponse * _response;
    NSMutableData * _responseData;
    NSString * _targetPath;
    id  _userInfo;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) bool background;
@property (nonatomic, readonly) bool cachedResponse;
@property (nonatomic, readonly) bool cancelled;
@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) bool download;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSURLRequest *originalRequest;
@property (nonatomic, readonly) float progress;
@property (nonatomic, copy) id /* block */ redirectHandler;
@property (nonatomic, readonly) NSURLRequest *request;
@property (nonatomic, readonly) NSHTTPURLResponse *response;
@property (nonatomic, readonly) bool responseClientError;
@property (nonatomic, readonly) NSData *responseData;
@property (nonatomic, readonly) bool responseOk;
@property (nonatomic, readonly) bool responseTimeout;
@property (nonatomic, readonly) NSString *targetPath;
@property (nonatomic, retain) id userInfo;

- (void).cxx_destruct;
- (id)URL;
- (void)applyFileExtension:(id)arg1;
- (void)applyMimeType;
- (bool)background;
- (bool)cachedResponse;
- (bool)cancelled;
- (id)category;
- (id /* block */)completion;
- (id)contentType;
- (id)description;
- (void)dispatchCompletion:(id)arg1;
- (bool)download;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithURLRequest:(id)arg1 targetPath:(id)arg2 category:(id)arg3 completionHandler:(id /* block */)arg4 receiveData:(id /* block */)arg5;
- (id)originalRequest;
- (float)progress;
- (id /* block */)receiveDataHandler;
- (id /* block */)redirectHandler;
- (id)request;
- (id)response;
- (bool)responseClientError;
- (id)responseData;
- (bool)responseOk;
- (bool)responseTimeout;
- (void)setCachedResponse:(bool)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setCategory:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setRedirectHandler:(id /* block */)arg1;
- (void)setRequest:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setResponseData:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)targetPath;
- (id)userInfo;

@end