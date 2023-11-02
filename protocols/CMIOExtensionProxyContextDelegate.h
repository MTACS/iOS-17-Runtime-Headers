
@protocol CMIOExtensionProxyContextDelegate <NSObject>

@required

- (void)proxyContextHasBeenInvalidated:(CMIOExtensionProxyContext *)arg1;
- (void)proxyStreamHasStarted;
- (void)proxyStreamsHaveStopped:(int)arg1;

@end
