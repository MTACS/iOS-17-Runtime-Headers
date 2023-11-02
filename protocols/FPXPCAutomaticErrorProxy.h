
@protocol FPXPCAutomaticErrorProxy

@required

- (id)remoteObjectProxy;
- (void)setTimeoutState:(unsigned long long)arg1;
- (id)synchronousRemoteObjectProxy;
- (unsigned long long)timeoutState;

@end
