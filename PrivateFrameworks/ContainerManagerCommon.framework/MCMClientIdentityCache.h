
@interface MCMClientIdentityCache : NSObject <MCMClientIdentityCache> {
    <MCMCache> * _cache;
}

@property (nonatomic, readonly) <MCMCache> *cache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cache;
- (id)clientIdentityWithAuditToken:(struct { unsigned int x1[8]; })arg1 personaUniqueString:(id)arg2 error:(id*)arg3 generator:(id /* block */)arg4;
- (void)flush;
- (id)init;

@end
