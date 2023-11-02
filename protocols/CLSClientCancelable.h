
@protocol CLSClientCancelable <NSObject>

@required

- (oneway void)clientRemote_invalidate;

@end
