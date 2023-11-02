
@interface SXProxyAuthenticationKeyProvider : NSObject <SXProxyAuthenticationKeyProvider> {
    NSString * _identifier;
    NSString * _secret;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *secret;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 secret:(id)arg2;
- (void)requestAuthenticationKeyWithCompletion:(id /* block */)arg1;
- (id)secret;

@end
