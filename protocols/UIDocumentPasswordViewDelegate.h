
@protocol UIDocumentPasswordViewDelegate

@required

- (void)userDidEnterPassword:(NSString *)arg1 forPasswordView:(UIDocumentPasswordView *)arg2;

@optional

- (void)didBeginEditingPassword:(UITextField *)arg1 inView:(UIDocumentPasswordView *)arg2;
- (void)didEndEditingPassword:(UITextField *)arg1 inView:(UIDocumentPasswordView *)arg2;

@end
