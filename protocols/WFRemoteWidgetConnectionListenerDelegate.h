
@protocol WFRemoteWidgetConnectionListenerDelegate

@required

- (void)remoteWidgetConnection:(void *)arg1 didReceiveData:(void *)arg2 responseHandler:(void *)arg3; // needs 3 arg types, found 8: WFRemoteWidgetConnection *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)remoteWidgetConnectionConnectionLost:(WFRemoteWidgetConnection *)arg1;

@end
