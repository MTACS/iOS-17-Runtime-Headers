
@protocol MGRemoteQueryClientDelegate <NSObject>

@required

- (void)clientInvalidated:(MGRemoteQueryClient *)arg1 withError:(NSError *)arg2;

@end
