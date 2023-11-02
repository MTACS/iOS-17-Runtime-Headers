
@interface ASAuthorizationProviderExtensionAuthorizationRequest : NSObject {
    SOAuthorizationRequest * _authorizationRequest;
}

@property (nonatomic, readonly) NSDictionary *authorizationOptions;
@property (nonatomic, readonly) SOAuthorizationRequest *authorizationRequest;
@property (nonatomic, readonly, copy) NSString *callerBundleIdentifier;
@property (getter=isCallerManaged, nonatomic, readonly) bool callerManaged;
@property (nonatomic, readonly) NSString *callerTeamIdentifier;
@property (nonatomic, readonly) NSDictionary *extensionData;
@property (nonatomic, readonly) NSData *httpBody;
@property (nonatomic, readonly) NSDictionary *httpHeaders;
@property (nonatomic, readonly) NSString *localizedCallerDisplayName;
@property (nonatomic, readonly, copy) NSString *realm;
@property (nonatomic, readonly) NSString *requestedOperation;
@property (nonatomic, readonly) NSURL *url;
@property (getter=isUserInterfaceEnabled, nonatomic, readonly) bool userInterfaceEnabled;

- (void).cxx_destruct;
- (id)authorizationOptions;
- (id)authorizationRequest;
- (id)callerBundleIdentifier;
- (id)callerTeamIdentifier;
- (void)cancel;
- (void)complete;
- (void)completeWithAuthorizationResult:(id)arg1;
- (void)completeWithError:(id)arg1;
- (void)completeWithHTTPAuthorizationHeaders:(id)arg1;
- (void)completeWithHTTPResponse:(id)arg1 httpBody:(id)arg2;
- (void)doNotHandle;
- (id)extensionData;
- (id)httpBody;
- (id)httpHeaders;
- (id)initWithAuthorizationRequest:(id)arg1;
- (bool)isCallerManaged;
- (bool)isUserInterfaceEnabled;
- (id)localizedCallerDisplayName;
- (void)presentAuthorizationViewControllerWithCompletion:(id /* block */)arg1;
- (id)realm;
- (id)requestedOperation;
- (id)url;

@end
