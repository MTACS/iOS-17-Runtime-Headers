
@protocol SUCoreConnectClientDelegate <NSObject>

@optional

- (void)connectionClosed;
- (void)handleMessage:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: SUCoreConnectMessage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SUCoreConnectMessage *, NSError *, void*
- (void)handleResponse:(SUCoreConnectMessage *)arg1 error:(NSError *)arg2;

@end
