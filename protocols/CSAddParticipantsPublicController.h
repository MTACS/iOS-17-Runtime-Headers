
@protocol CSAddParticipantsPublicController <NSObject>

@required

- (void)dismissViewControllerWithError:(NSError *)arg1 shareURL:(NSURL *)arg2 ckShare:(CKShare *)arg3;
- (void)showContactPickerFromSourceRect:(NSValue *)arg1;

@end
