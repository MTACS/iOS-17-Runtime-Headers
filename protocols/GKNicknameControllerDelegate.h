
@protocol GKNicknameControllerDelegate <NSObject>

@optional

- (void)keyboardWillHide:(NSNotification *)arg1;
- (void)keyboardWillShow:(NSNotification *)arg1;
- (void)nicknameDidBecomeFirstResponder;
- (void)nicknameDidResignFirstResponder;
- (bool)nicknameShouldBeginEditing;
- (void)nicknameTextDidChangeWithMessage:(NSString *)arg1;
- (void)nicknameUpdateAvatarImage:(NSString *)arg1;
- (void)nicknameUpdateRequestCompletedWithStatus:(NSString *)arg1 error:(NSError *)arg2;
- (void)nicknameWillbeginUpdating;

@end
