
@interface CNAccountsAndGroupsAuthorizationContext : NSObject {
    id /* block */  _actionCompletionHandler;
    CNAccountsAndGroupsCell * _cell;
    NSArray * _contactsToAddToDropDestination;
    CNContainerPickerItem * _containerItem;
    CNAccountsAndGroupsItem * _item;
    long long  _type;
}

@property (nonatomic, copy) id /* block */ actionCompletionHandler;
@property (nonatomic, retain) CNAccountsAndGroupsCell *cell;
@property (nonatomic, retain) NSArray *contactsToAddToDropDestination;
@property (nonatomic, retain) CNContainerPickerItem *containerItem;
@property (nonatomic, retain) CNAccountsAndGroupsItem *item;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id /* block */)actionCompletionHandler;
- (id)cell;
- (id)contactsToAddToDropDestination;
- (id)containerItem;
- (id)item;
- (void)setActionCompletionHandler:(id /* block */)arg1;
- (void)setCell:(id)arg1;
- (void)setContactsToAddToDropDestination:(id)arg1;
- (void)setContainerItem:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
