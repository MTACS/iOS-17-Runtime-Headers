
@interface CNAccessAuthorization : NSObject {
    CNAuthorizationContext * _authorizer;
}

@property (nonatomic, readonly) CNAuthorizationContext *authorizer;

+ (id)allAuthorizationKeys;
+ (id)allAuthorizationKeysVector;
+ (bool)canSetContactProperty:(id)arg1;
+ (id)new;
+ (void)removeUnavailableKeysFromContactKeyVector:(id)arg1;
+ (id)unauthorizedKeysVectorWithAuthorizer:(id)arg1;
+ (id)unauthorizedKeysWithAuthorizer:(id)arg1;

- (void).cxx_destruct;
- (bool)authorizeFetchRequest:(id)arg1 accessError:(id*)arg2;
- (id)authorizedKeysForContactKeys:(id)arg1;
- (id)authorizer;
- (id)init;
- (id)initWithAuditToken:(id)arg1;
- (id)initWithAuditToken:(id)arg1 assumedIdentity:(id)arg2;
- (id)initWithAuthorizer:(id)arg1;
- (void)performWork:(id /* block */)arg1 authorizingFetchRequest:(id)arg2 failureHandler:(id /* block */)arg3;
- (void)resetUnauthorizedKeysForFetchRequest:(id)arg1;
- (id)unauthorizedKeysVector;

@end
