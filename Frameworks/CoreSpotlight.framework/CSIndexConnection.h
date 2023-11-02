
@interface CSIndexConnection : CSXPCConnection

+ (id)sharedConnectionForUser:(unsigned int)arg1;

- (void)handleError:(id)arg1;
- (void)sendMessageAsync:(id)arg1 completion:(id /* block */)arg2;

@end
