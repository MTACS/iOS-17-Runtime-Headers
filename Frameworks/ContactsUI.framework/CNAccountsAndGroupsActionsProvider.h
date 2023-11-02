
@interface CNAccountsAndGroupsActionsProvider : NSObject {
    CNAccountsAndGroupsDataSource * _dataSource;
    <CNAccountsAndGroupsActionsProviderDelegate> * _delegate;
    CNUIGroupsAndContainersSaveManager * _groupsAndContainersSaveManager;
    NSMutableArray * _issuedSaveRequestIdentifiers;
}

@property (nonatomic, retain) CNAccountsAndGroupsDataSource *dataSource;
@property (nonatomic) <CNAccountsAndGroupsActionsProviderDelegate> *delegate;
@property (nonatomic, retain) CNUIGroupsAndContainersSaveManager *groupsAndContainersSaveManager;
@property (nonatomic, retain) NSMutableArray *issuedSaveRequestIdentifiers;

- (void).cxx_destruct;
- (id)actionsForItem:(id)arg1 cell:(id)arg2;
- (bool)addGroupToStoreForGroupItem:(id)arg1 withName:(id)arg2;
- (void)authorizedCreateGroupActionForContainerItem:(id)arg1;
- (bool)authorizedDeleteGroupForItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)authorizedEditGroupNameForCell:(id)arg1;
- (id)contextMenuConfigurationForItem:(id)arg1 cell:(id)arg2 atIndexPath:(id)arg3;
- (void)createGroupActionForContainerItem:(id)arg1 isCollectionViewEditing:(bool)arg2;
- (id)dataSource;
- (id)delegate;
- (bool)deleteGroupActionForItem:(id)arg1 sourceView:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteGroupForItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)editGroupNameActionForItem:(id)arg1 cell:(id)arg2;
- (bool)emailGroupForItem:(id)arg1;
- (bool)exportGroupForItem:(id)arg1 sourceView:(id)arg2;
- (id)groupsAndContainersSaveManager;
- (id)initWithDataSource:(id)arg1 saveManager:(id)arg2;
- (bool)isAuthorizedToEditItem:(id)arg1;
- (id)issuedSaveRequestIdentifiers;
- (id)leadingActionsForItem:(id)arg1 cell:(id)arg2;
- (bool)messageGroupForItem:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGroupsAndContainersSaveManager:(id)arg1;
- (void)setIssuedSaveRequestIdentifiers:(id)arg1;
- (id)trailingActionsForItem:(id)arg1 cell:(id)arg2 isCollectionViewEditing:(bool)arg3;
- (void)updateItem:(id)arg1 withNewName:(id)arg2;

@end
