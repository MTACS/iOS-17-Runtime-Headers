
@interface MCMClientFactory : NSObject <MCMClientFactory, MCMClientFactoryWithXPC> {
    <MCMClientCodeSignInfoCache> * _clientCodeSignInfoCache;
    <MCMClientIdentityCache> * _clientIdentityCache;
    MCMUserIdentityCache * _userIdentityCache;
}

@property (nonatomic, readonly) <MCMClientCodeSignInfoCache> *clientCodeSignInfoCache;
@property (nonatomic, readonly) <MCMClientIdentityCache> *clientIdentityCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MCMUserIdentityCache *userIdentityCache;

- (void).cxx_destruct;
- (id)_clientIdentityWithClient:(struct container_client { char *x1; unsigned int x2; char *x3; unsigned int x4; unsigned int x5; struct { unsigned int x_6_1_1[8]; } x6; int x7; bool x8; bool x9; bool x10; id x11; }*)arg1 realAuditToken:(struct { unsigned int x1[8]; })arg2 extension:(bool)arg3 error:(id*)arg4;
- (id)_clientIdentityWithClientMessageContext:(id)arg1 error:(id*)arg2;
- (id)_codeSignInfoWithClient:(struct container_client { char *x1; unsigned int x2; char *x3; unsigned int x4; unsigned int x5; struct { unsigned int x_6_1_1[8]; } x6; int x7; bool x8; bool x9; bool x10; id x11; }*)arg1 CDHash:(id)arg2 identifier:(id)arg3 error:(id*)arg4;
- (id)clientCodeSignInfoCache;
- (id)clientIdentityCache;
- (id)clientIdentityWithClientMessageContext:(id)arg1 xpcMessage:(id)arg2 error:(id*)arg3;
- (id)initWithUserIdentityCache:(id)arg1 clientCodeSignInfoCache:(id)arg2 clientIdentityCache:(id)arg3;
- (id)userIdentityCache;

@end
