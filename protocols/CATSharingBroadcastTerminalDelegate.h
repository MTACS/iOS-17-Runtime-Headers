
@protocol CATSharingBroadcastTerminalDelegate <NSObject>

@required

- (void)broadcastTerminal:(CATSharingBroadcastTerminal *)arg1 didActivateWithError:(NSError *)arg2;
- (void)broadcastTerminal:(CATSharingBroadcastTerminal *)arg1 hasError:(NSError *)arg2;
- (void)broadcastTerminal:(CATSharingBroadcastTerminal *)arg1 hasPairedDeviceConnection:(id <CATSharingConnection>)arg2;
- (void)broadcastTerminal:(CATSharingBroadcastTerminal *)arg1 needsToDisplayPin:(NSString *)arg2;
- (void)broadcastTerminal:(CATSharingBroadcastTerminal *)arg1 stoppedWithError:(NSError *)arg2;
- (void)broadcastTerminalNeedsToDismissPin:(CATSharingBroadcastTerminal *)arg1;

@end
