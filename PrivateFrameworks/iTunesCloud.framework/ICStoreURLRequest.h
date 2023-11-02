
@interface ICStoreURLRequest : ICURLRequest {
    ICJSSignConfiguration * _JSSignConfiguration;
    NSDictionary * _additionalHTTPCookies;
    NSArray * _additionalQueryItems;
    long long  _anisetteVersion;
    NSString * _machineDataSyncState;
    bool  _shouldParseBodyData;
    bool  _shouldRequireURLBag;
    bool  _shouldUseMescalSigning;
}

@property (nonatomic, copy) ICJSSignConfiguration *JSSignConfiguration;
@property (nonatomic, copy) NSDictionary *additionalHTTPCookies;
@property (nonatomic, copy) NSArray *additionalQueryItems;
@property (nonatomic) long long anisetteVersion;
@property (nonatomic, copy) NSString *machineDataSyncState;
@property (nonatomic) bool shouldParseBodyData;
@property (nonatomic) bool shouldRequireURLBag;
@property (nonatomic) bool shouldUseMescalSigning;
@property (nonatomic, readonly, copy) ICStoreRequestContext *storeRequestContext;

+ (unsigned long long)_defaultMaxRetryCountForReason:(id)arg1;
+ (Class)_responseHandlerClass;
+ (bool)_shouldPersonalizeRequestForRequestContext:(id)arg1 personalizationStyle:(long long)arg2;
+ (id)currentConnectionTypeHeader;

- (void).cxx_destruct;
- (id)JSSignConfiguration;
- (void)_getSignatureDataForRequest:(id)arg1 urlBag:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)_shouldPersonalizeRequest;
- (id)_stringForCachePolicy:(unsigned long long)arg1;
- (id)additionalHTTPCookies;
- (id)additionalQueryItems;
- (long long)anisetteVersion;
- (void)buildStoreURLRequestWithURLRequest:(id)arg1 builderProperties:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)buildURLRequestWithCompletionHandler:(id /* block */)arg1;
- (id)description;
- (id)initWithURL:(id)arg1 requestContext:(id)arg2;
- (id)initWithURLRequest:(id)arg1 requestContext:(id)arg2;
- (id)initWithURLRequest:(id)arg1 requestContext:(id)arg2 resumeData:(id)arg3;
- (id)machineDataSyncState;
- (void)setAdditionalHTTPCookies:(id)arg1;
- (void)setAdditionalQueryItems:(id)arg1;
- (void)setAnisetteVersion:(long long)arg1;
- (void)setJSSignConfiguration:(id)arg1;
- (void)setMachineDataSyncState:(id)arg1;
- (void)setShouldParseBodyData:(bool)arg1;
- (void)setShouldRequireURLBag:(bool)arg1;
- (void)setShouldUseMescalSigning:(bool)arg1;
- (bool)shouldParseBodyData;
- (bool)shouldRequireURLBag;
- (bool)shouldUseMescalSigning;
- (id)storeRequestContext;

@end
