
@protocol ICSharedListeningConnectionControllerDelegate <NSObject>

@required

- (void)connectionController:(ICSharedListeningConnectionController *)arg1 connectionDidEndWithError:(NSError *)arg2;
- (void)connectionController:(ICSharedListeningConnectionController *)arg1 connectionDidReceiveMessage:(_ICLLProtocolMessage *)arg2;
- (void)connectionController:(ICSharedListeningConnectionController *)arg1 didEncounterFatalError:(NSError *)arg2;
- (void)connectionControllerConnectionDidStart:(ICSharedListeningConnectionController *)arg1;

@end
