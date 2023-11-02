
@protocol MGRemoteQueryServerClientDelegate <NSObject>

@required

- (void)clientInvalidated:(MGRemoteQueryServerClient *)arg1;
- (void)clientLostTransaction:(MGRemoteQueryServerClient *)arg1;

@end
