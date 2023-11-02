
@interface AARequest : NSObject <NSURLSessionDataDelegate> {
    struct OpaqueCFHTTPCookieStorage { } * _cookieStorage;
    NSDictionary * _customHeaders;
    bool  _flushCache;
    id /* block */  _handler;
    NSString * _initialURLString;
    NSString * _machineId;
    NSString * _oneTimePassword;
}

@property (nonatomic, copy) NSDictionary *customHeaders;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool flushCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) NSURLRequest *urlRequest;

+ (id)protocolVersion;
+ (id)redactedHeadersFromHTTPHeaders:(id)arg1;
+ (Class)responseClass;

- (void).cxx_destruct;
- (void)_handleDataTaskCompletionWithData:(id)arg1 response:(id)arg2 error:(id)arg3;
- (id)bodyDictionary;
- (id)customHeaders;
- (void)dealloc;
- (bool)flushCache;
- (id)initWithURLString:(id)arg1;
- (void)performPinnedOnlyRequestWithHandler:(id /* block */)arg1;
- (void)performPinnedRequestWithHandler:(id /* block */)arg1;
- (void)performRequestForDevice:(id)arg1 anisetteDataProvider:(id)arg2 withHandler:(id /* block */)arg3;
- (void)performRequestForDevice:(id)arg1 withHandler:(id /* block */)arg2;
- (void)performRequestWithHandler:(id /* block */)arg1;
- (void)performRequestWithSession:(id)arg1 withHandler:(id /* block */)arg2;
- (void)performSignedRequestWithHandler:(id /* block */)arg1;
- (id)redactedBodyStringWithPropertyList:(id)arg1;
- (void)setCookieStorage:(struct OpaqueCFHTTPCookieStorage { }*)arg1;
- (void)setCustomHeaders:(id)arg1;
- (void)setDeviceProvisioningMachineId:(id)arg1;
- (void)setDeviceProvisioningOneTimePassword:(id)arg1;
- (void)setFlushCache:(bool)arg1;
- (id)urlCredential;
- (id)urlRequest;
- (id)urlString;

@end
