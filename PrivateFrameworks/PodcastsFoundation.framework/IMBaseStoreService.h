
@interface IMBaseStoreService : NSObject {
    IMURLSession * _amsUrlSession;
    id /* block */  _callback;
    NSURLSessionConfiguration * _configuration;
    unsigned long long  _encodingType;
    bool  _personalizeRequests;
    bool  _wantsJSSignature;
}

@property (nonatomic, retain) IMURLSession *amsUrlSession;
@property (nonatomic, copy) id /* block */ callback;
@property (nonatomic, retain) NSURLSessionConfiguration *configuration;
@property (nonatomic) unsigned long long encodingType;
@property (nonatomic) bool personalizeRequests;
@property (nonatomic) bool wantsJSSignature;

+ (bool)isValidResponseJson:(id)arg1 response:(id)arg2 error:(id)arg3;
+ (bool)shouldFollowRedirects;
+ (id)signatureQueryParams;

- (void).cxx_destruct;
- (id)amsUrlSession;
- (id)bag;
- (id /* block */)callback;
- (void)cancelAllRequests;
- (id)configuration;
- (unsigned long long)encodingType;
- (id)init;
- (id)initWithConcurrentOperationCount:(long long)arg1 requestEncodingType:(unsigned long long)arg2;
- (void)performDataRequest:(id)arg1 account:(id)arg2 callback:(id /* block */)arg3;
- (void)performDataRequest:(id)arg1 callback:(id /* block */)arg2;
- (void)performRequest:(id /* block */)arg1;
- (void)performUrlRequest:(id)arg1 callback:(id /* block */)arg2;
- (bool)personalizeRequests;
- (void)setAmsUrlSession:(id)arg1;
- (void)setCallback:(id /* block */)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setEncodingType:(unsigned long long)arg1;
- (void)setPersonalizeRequests:(bool)arg1;
- (void)setURLProtocolDelegate:(id)arg1;
- (void)setWantsJSSignature:(bool)arg1;
- (void)signRequest:(id)arg1;
- (bool)wantsJSSignature;

@end
