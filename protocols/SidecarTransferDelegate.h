
@protocol SidecarTransferDelegate

@required

- (void)sidecarTransfer:(SidecarTransfer *)arg1 didComplete:(NSError *)arg2;
- (void)sidecarTransfer:(SidecarTransfer *)arg1 receivedItems:(NSArray *)arg2 messageType:(long long)arg3;

@end
