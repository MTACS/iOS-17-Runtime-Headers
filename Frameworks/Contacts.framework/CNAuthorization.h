
@interface CNAuthorization : NSObject {
    CNAuthorizationContext * _authorizationContext;
}

@property (nonatomic, readonly) CNAuthorizationContext *authorizationContext;

+ (id)logger;

- (void).cxx_destruct;
- (id)authorizationContext;
- (long long)authorizationStatusForEntityType:(long long)arg1;
- (id)init;
- (id)initWithAssumedIdentity:(id)arg1;
- (id)initWithAuthorizationContext:(id)arg1;
- (bool)isAccessRestrictedForEntityType:(long long)arg1;
- (void)requestAccessForEntityType:(long long)arg1 completionHandler:(id /* block */)arg2;
- (bool)requestAccessForEntityType:(long long)arg1 error:(id*)arg2;

@end
