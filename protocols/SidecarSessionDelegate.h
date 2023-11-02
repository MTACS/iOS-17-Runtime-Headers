
@protocol SidecarSessionDelegate

@required

- (void)sidecarServiceTerminate;
- (void)sidecarSession:(SidecarSession *)arg1 closedWithError:(NSError *)arg2;
- (void)sidecarSession:(SidecarSession *)arg1 invalidatedWithError:(NSError *)arg2;
- (void)sidecarSession:(SidecarSession *)arg1 receivedMessage:(id <SidecarMessage>)arg2;
- (void)sidecarSessionStarted:(SidecarSession *)arg1;

@end
