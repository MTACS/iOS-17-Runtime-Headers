
@interface ABRequestHandler : NSObject <AuthBrokerQuery> {
    void * authenticator;
}

- (void)fetchProxyCredential:(id)arg1 reply:(id /* block */)arg2;
- (id)init;

@end
