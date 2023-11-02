
@protocol SBSystemNotesPresentationRequestServerDelegate <NSObject>

@required

- (void)server:(SBSystemNotesPresentationRequestServer *)arg1 connectionDidInvalidate:(BSServiceConnection *)arg2;
- (<SBSSystemNotesPresentationClientToServerInterface> *)server:(SBSystemNotesPresentationRequestServer *)arg1 targetForNewClientConnection:(BSServiceConnection *)arg2;

@end
