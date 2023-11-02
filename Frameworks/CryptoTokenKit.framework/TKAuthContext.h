
@interface TKAuthContext : NSObject {
    NSData * _ACMHandle;
    LAContext * _authContext;
    TKSharedResource * _sharedResource;
}

@property (nonatomic, readonly) NSData *ACMHandle;
@property (nonatomic, readonly) LAContext *authContext;
@property (nonatomic, readonly) TKSharedResource *sharedResource;

- (void).cxx_destruct;
- (id)ACMHandle;
- (id)authContext;
- (id)initWithLAContext:(id)arg1 ACMHandle:(id)arg2 sharedResource:(id)arg3;
- (id)sharedResource;

@end
