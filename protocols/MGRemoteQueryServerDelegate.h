
@protocol MGRemoteQueryServerDelegate <NSObject>

@required

- (void)serverInvalidated:(MGRemoteQueryServer *)arg1 withError:(NSError *)arg2;

@end
