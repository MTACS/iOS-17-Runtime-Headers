
@interface BSPortDeathWatcher : BSPortDeathSentinel

- (id)initWithPort:(unsigned int)arg1 queue:(id)arg2 deathHandler:(id /* block */)arg3;
- (id)initWithSendRight:(id)arg1 queue:(id)arg2 deathHandler:(id /* block */)arg3;

@end
