
@interface ASAuthorizationProviderExtensionAuthorizationResult : NSObject {
    SOAuthorizationResult * _authorizationResult;
}

@property (nonatomic, readonly) SOAuthorizationResult *authorizationResult;
@property (nonatomic, retain) NSDictionary *httpAuthorizationHeaders;
@property (nonatomic, retain) NSData *httpBody;
@property (nonatomic, copy) NSHTTPURLResponse *httpResponse;
@property (nonatomic, retain) NSArray *privateKeys;

- (void).cxx_destruct;
- (id)authorizationResult;
- (id)httpAuthorizationHeaders;
- (id)httpBody;
- (id)httpResponse;
- (id)init;
- (id)initWithHTTPAuthorizationHeaders:(id)arg1;
- (id)initWithHTTPResponse:(id)arg1 httpBody:(id)arg2;
- (id)privateKeys;
- (void)setHttpAuthorizationHeaders:(id)arg1;
- (void)setHttpBody:(id)arg1;
- (void)setHttpResponse:(id)arg1;
- (void)setPrivateKeys:(id)arg1;

@end
