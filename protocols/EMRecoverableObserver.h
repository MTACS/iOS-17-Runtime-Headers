
@protocol EMRecoverableObserver <EFCancelable>

@required

- (void)performWithRemoteConnection:(EMRemoteConnection *)arg1;
- (void)recoverWithRemoteConnection:(EMRemoteConnection *)arg1;

@end
