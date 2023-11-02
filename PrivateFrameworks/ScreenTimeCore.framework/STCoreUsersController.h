
@interface STCoreUsersController : NSObject <NSFetchedResultsControllerDelegate> {
    NSFetchedResultsController * _childUserController;
    NSFetchedResultsController * _localUserController;
    NSManagedObjectContext * _managedObjectContext;
    unsigned long long  _selectedIndex;
    STCoreUser * _selectedUser;
    NSFetchedResultsController * _settingsController;
    NSArray * _users;
}

@property (nonatomic, retain) NSFetchedResultsController *childUserController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) STCoreUser *localUser;
@property (nonatomic, retain) NSFetchedResultsController *localUserController;
@property (readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic) unsigned long long selectedIndex;
@property (nonatomic, retain) STCoreUser *selectedUser;
@property (retain) NSFetchedResultsController *settingsController;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *users;

+ (id)keyPathsForValuesAffectingLocalUser;
+ (id)keyPathsForValuesAffectingSelectedUser;
+ (id)keyPathsForValuesAffectingUsers;

- (void).cxx_destruct;
- (bool)_updateSelectedIndexForDSID:(id)arg1 isManaged:(bool)arg2;
- (id)childUserController;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controllerWillChangeContent:(id)arg1;
- (id)initWithManagedObjectContext:(id)arg1;
- (id)localUser;
- (id)localUserController;
- (id)managedObjectContext;
- (void)notifyServerOfScreenTimeEnabled:(bool)arg1 forUser:(id)arg2;
- (void)refresh;
- (unsigned long long)selectedIndex;
- (id)selectedUser;
- (void)setChildUserController:(id)arg1;
- (void)setLocalUserController:(id)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)setSelectedUser:(id)arg1;
- (void)setSettingsController:(id)arg1;
- (void)setUsers:(id)arg1;
- (id)settingsController;
- (bool)updateSelectedIndexForChildDSID:(id)arg1;
- (bool)updateSelectedIndexForDSID:(id)arg1;
- (id)users;

@end
