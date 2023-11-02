
@interface CNContactListActionExecutor : NSObject <CNUIEditAuthorizationControllerDelegate> {
    CNContactListActionAuthorizationContext * _authorizationContext;
    CNUIEditAuthorizationController * _editAuthorizationController;
    NSUndoManager * _undoManager;
}

@property (nonatomic, retain) CNContactListActionAuthorizationContext *authorizationContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNUIEditAuthorizationController *editAuthorizationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) NSUndoManager *undoManager;

- (void).cxx_destruct;
- (id)authorizationContext;
- (id)editAuthorizationController;
- (void)editAuthorizationController:(id)arg1 authorizationDidFinishWithResult:(long long)arg2;
- (void)executeAction:(id)arg1;
- (void)executeUndoableAction:(id)arg1;
- (id)initWithUndoManager:(id)arg1;
- (void)setAuthorizationContext:(id)arg1;
- (void)setEditAuthorizationController:(id)arg1;
- (void)showEditAuthorizationPane:(id)arg1 animated:(bool)arg2 forAction:(id)arg3;
- (bool)showEditAuthorizationPaneForAction:(id)arg1 withActionType:(long long)arg2;
- (void)undoAction:(id)arg1;
- (id)undoManager;

@end
