
@interface _TtCV12GameCenterUIP33_71E88C93E9376CB5FC37AECD01F72ACD17NicknameTextField11Coordinator : NSObject <GKNicknameControllerDelegate> {
    void cancellableSubcriber;
    void nicknameController;
    void parent;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)nicknameDidBecomeFirstResponder;
- (void)nicknameDidResignFirstResponder;
- (bool)nicknameShouldBeginEditing;
- (void)nicknameTextDidChangeWithMessage:(id)arg1;
- (void)nicknameUpdateRequestCompletedWithStatus:(id)arg1 error:(id)arg2;
- (void)nicknameWillbeginUpdating;

@end
