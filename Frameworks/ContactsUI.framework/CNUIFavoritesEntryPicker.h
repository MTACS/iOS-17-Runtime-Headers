
@interface CNUIFavoritesEntryPicker : NSObject <CNContactActionsControllerDelegate> {
    CNActionMenuHelper * _actionMenuHelper;
    CNContactActionsController * _actionsController;
    UIAlertController * _alertController;
    CNContact * _contact;
    UIContextMenuInteraction * _contextMenuInteraction;
    <CNUIFavoritesEntryPickerDelegate> * _delegate;
}

@property (nonatomic, retain) CNActionMenuHelper *actionMenuHelper;
@property (nonatomic, retain) CNContactActionsController *actionsController;
@property (nonatomic, retain) UIAlertController *alertController;
@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, retain) UIContextMenuInteraction *contextMenuInteraction;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNUIFavoritesEntryPickerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)descriptorForRequiredKeys;
+ (id)log;

- (void).cxx_destruct;
- (id)actionMenuHelper;
- (id)actionsController;
- (id)alertController;
- (id)contact;
- (void)contactActionsController:(id)arg1 didSelectAction:(id)arg2;
- (void)contactActionsController:(id)arg1 didUpdateWithMenu:(id)arg2;
- (id)contextMenuInteraction;
- (id)delegate;
- (id)initWithContact:(id)arg1;
- (id /* block */)menuProviderForContextMenuInteraction:(id)arg1;
- (void)setActionMenuHelper:(id)arg1;
- (void)setActionsController:(id)arg1;
- (void)setAlertController:(id)arg1;
- (void)setContextMenuInteraction:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)viewController;

@end
