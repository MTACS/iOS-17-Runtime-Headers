
@protocol INUIVoiceShortcutRemoteViewControllerDelegate <NSObject>

@required

- (void)remoteViewControllerDidCancel;

@optional

- (void)remoteViewControllerDidCreateVoiceShortcut:(INVoiceShortcut *)arg1 error:(NSError *)arg2;
- (void)remoteViewControllerDidDeleteVoiceShortcutWithIdentifier:(NSUUID *)arg1;
- (void)remoteViewControllerDidUpdateVoiceShortcut:(INVoiceShortcut *)arg1 error:(NSError *)arg2;

@end
