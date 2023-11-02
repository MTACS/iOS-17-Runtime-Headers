
@protocol BUContainerProtocol

@required

- (void)close;
- (BUSandboxExtension *)consumeSandboxToken;
- (NSURL *)url;

@end
