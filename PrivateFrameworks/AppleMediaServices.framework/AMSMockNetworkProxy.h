
@interface AMSMockNetworkProxy : NSURLProtocol {
    AMSMockURLOverride * _currentOverride;
}

@property (nonatomic, retain) AMSMockURLOverride *currentOverride;

+ (id)_executedOverrides;
+ (id)_overrides;
+ (void)_removeAllOverrides;
+ (void)_removeOverride:(id)arg1;
+ (void)_sync:(id /* block */)arg1;
+ (void)addOverride:(id)arg1;
+ (bool)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (void)clearOverrides;
+ (id)executedOverrides;
+ (id)registeredOverrides;
+ (void)removeOverride:(id)arg1;

- (void).cxx_destruct;
- (id)currentOverride;
- (void)finishWithData:(id)arg1;
- (void)finishWithError:(id)arg1;
- (void)performRedirectFromResponse:(id)arg1;
- (void)sendResponse:(id)arg1;
- (void)setCurrentOverride:(id)arg1;
- (void)startLoading;
- (void)stopLoading;

@end
