
@protocol CSRemoteContentSessionHostDelegate <NSObject>

@required

- (double)remoteContentComplicationHeightInset;
- (void)remoteContentDidUpdateStyle;
- (void)remoteContentSession:(CSRemoteContentSession *)arg1 didInvalidateWithError:(NSError *)arg2;
- (bool)remoteContentSession:(void *)arg1 dismissWithReason:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: CSRemoteContentSession *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)remoteContentSession:(CSRemoteContentSession *)arg1 presentViewController:(CSCoverSheetViewControllerBase<CSRemoteContentViewControllerProtocol> *)arg2;
- (bool)shouldActivateRemoteContentSession:(CSRemoteContentSession *)arg1;

@end
