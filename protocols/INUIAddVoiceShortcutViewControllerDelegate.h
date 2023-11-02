
@protocol INUIAddVoiceShortcutViewControllerDelegate <NSObject>

@required

- (void)addVoiceShortcutViewController:(INUIAddVoiceShortcutViewController *)arg1 didFinishWithVoiceShortcut:(INVoiceShortcut *)arg2 error:(NSError *)arg3;
- (void)addVoiceShortcutViewControllerDidCancel:(INUIAddVoiceShortcutViewController *)arg1;

@end
