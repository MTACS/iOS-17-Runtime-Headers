
@protocol MBConnectionDelegate

@required

- (void)connection:(MBConnection *)arg1 didReceiveMessage:(MBMessage *)arg2;
- (void)connectionWasInterrupted:(MBConnection *)arg1;
- (void)connectionWasInvalidated:(MBConnection *)arg1;

@end
