
@protocol TRTransferBrowserDelegate <NSObject>

@optional

- (void)browser:(void *)arg1 didReceiveData:(void *)arg2 replyHandler:(void *)arg3; // needs 3 arg types, found 8: TRTransferBrowser *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)browser:(void *)arg1 didStartTransferWithSendDataHandler:(void *)arg2; // needs 2 arg types, found 7: TRTransferBrowser *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)browserDidDisconnect:(TRTransferBrowser *)arg1;

@end
