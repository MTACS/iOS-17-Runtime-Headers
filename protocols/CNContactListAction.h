
@protocol CNContactListAction <NSObject>

@required

- (<CNContactListActionDelegate> *)delegate;
- (bool)editRequiresAuthorization;
- (void)performAction;
- (void)setDelegate:(id <CNContactListActionDelegate>)arg1;
- (bool)shouldReloadListOnCompletion;

@end
