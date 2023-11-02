
@interface ASAuthorizationSingleSignOnProvider : NSObject <ASAuthorizationProvider> {
    NSURL * _url;
}

@property (nonatomic, readonly) bool canPerformAuthorization;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *url;

+ (id)authorizationProviderWithIdentityProviderURL:(id)arg1;
+ (id)new;

- (void).cxx_destruct;
- (bool)canPerformAuthorization;
- (id)createRequest;
- (id)init;
- (id)initWithURL:(id)arg1;
- (id)url;

@end
