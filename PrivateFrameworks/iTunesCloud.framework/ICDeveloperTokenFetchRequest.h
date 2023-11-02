
@interface ICDeveloperTokenFetchRequest : ICRemoteRequestOperation <NSSecureCoding> {
    ICClientInfo * _clientInfo;
    long long  _clientType;
    AMSMediaTokenService * _mediaTokenService;
    unsigned long long  _options;
}

@property (nonatomic) long long clientType;

+ (id)_createMediaTokenServiceForClientInfo:(id)arg1 clientType:(long long)arg2 requester:(id)arg3;
+ (void)_invalidateCachedDeveloperTokenForClientInfo:(id)arg1 requester:(id)arg2 usingMediaTokenService:(id)arg3;
+ (void)invalidateCachedDeveloperTokenForClientInfo:(id)arg1 clientType:(long long)arg2 requester:(id)arg3 completionHandler:(id /* block */)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_didFetchMediaToken:(id)arg1 withError:(id)arg2;
- (long long)clientType;
- (void)encodeWithCoder:(id)arg1;
- (void)execute;
- (id)initWithClientInfo:(id)arg1;
- (id)initWithClientInfo:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (void)performRequestOnOperationQueue:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (void)performRequestWithResponseHandler:(id /* block */)arg1;
- (void)setClientType:(long long)arg1;

@end
