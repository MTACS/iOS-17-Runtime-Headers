
@interface AKAppleIDSession : NSObject <NSURLSessionAppleIDContext> {
    NSLock * _anisetteControllerLock;
    <AKAnisetteServiceProtocol> * _anisetteDataProvider;
    AKAnisetteProvisioningController * _nativeAnisetteController;
    AKDevice * _pairedDevice;
    AKAnisetteProvisioningController * _pairedDeviceAnisetteController;
    AKAnisetteData * _proxiedAnisetteData;
    NSString * _serviceID;
}

@property (nonatomic, retain) <AKAnisetteServiceProtocol> *anisetteDataProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AKDevice *pairedDevice;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 getAppleIDHeadersForResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 getAppleIDRequestOrHeadersForResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)_generateAppleIDHeadersForRequest:(id)arg1 error:(id*)arg2;
- (void)_generateAppleIDHeadersForSessionTask:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)_genericAppleIDHeadersDictionaryForRequest:(id)arg1;
- (void)_handleAnissetteURLResponse:(id)arg1 forRequest:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)_handleURLSwitchingResponse:(id)arg1 forRequest:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)_nativeAnisetteController;
- (id)_pairedDeviceAnisetteController;
- (id)anisetteDataProvider;
- (id)appleIDHeadersForRequest:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)handleResponse:(id)arg1 forRequest:(id)arg2 shouldRetry:(bool*)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)pairedDevice;
- (id)relevantHTTPStatusCodes;
- (void)setAnisetteDataProvider:(id)arg1;
- (void)setPairedDevice:(id)arg1;
- (bool)shouldDenyRequestForURL:(id)arg1 task:(id)arg2;

@end
