
@interface CNContactListUndoableAction : CNContactListAction <CNContactListUndoableAction>

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNContactListActionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)performUndoAction;
- (bool)shouldReloadListOnCompletion;

@end
