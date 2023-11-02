
@interface STLocationStatusDomainPublisher : STUserInteractionHandlingStatusDomainPublisher

+ (id)emptyChangeContext;
+ (id)emptyData;
+ (unsigned long long)statusDomainName;

- (void)setData:(id)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;
- (void)setVolatileData:(id)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;
- (void)updateData:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)updateVolatileData:(id /* block */)arg1 completion:(id /* block */)arg2;

@end
