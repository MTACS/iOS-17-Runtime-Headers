
@interface ICMusicKitURLRequest : ICURLRequest {
    NSDictionary * _additionalHTTPCookies;
    NSString * _cachedDescription;
    NSString * _developerToken;
    ICStoreURLRequest * _pendingEquivalentStoreURLRequest;
}

@property (nonatomic, readonly, copy) NSString *_developerToken;
@property (nonatomic, readonly) ICStoreURLRequest *_pendingEquivalentStoreURLRequest;
@property (nonatomic, copy) NSDictionary *additionalHTTPCookies;
@property (nonatomic, readonly, copy) ICMusicKitRequestContext *requestContext;

+ (unsigned long long)_defaultMaxRetryCountForReason:(id)arg1;
+ (Class)_responseClass;
+ (Class)_responseHandlerClass;

- (void).cxx_destruct;
- (void)_buildEquivalentStoreURLRequestWithDeveloperToken:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_buildMusicKitURLRequestWithBaseURLRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_buildUserTokenBasedMusicKitURLRequestWithBaseURLRequest:(id)arg1 developerToken:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_description;
- (id)_developerToken;
- (id)_pendingEquivalentStoreURLRequest;
- (void)_setDeveloperToken:(id)arg1;
- (void)_updateURLSessionManagedPropertiesForEquivalentStoreURLRequest:(id)arg1;
- (id)additionalHTTPCookies;
- (void)buildURLRequestWithCompletionHandler:(id /* block */)arg1;
- (id)description;
- (id)initWithURL:(id)arg1 requestContext:(id)arg2;
- (id)initWithURLRequest:(id)arg1 requestContext:(id)arg2;
- (id)initWithURLRequest:(id)arg1 requestContext:(id)arg2 resumeData:(id)arg3;
- (id)requestContext;
- (void)setAdditionalHTTPCookies:(id)arg1;

@end
