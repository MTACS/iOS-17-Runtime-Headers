
@interface CalReminderMigrationContext : NSObject {
    NSMutableDictionary * _accountChangeItemsForAccountIdentifiers;
    NSDictionary * _accountsForAccountIdentifiers;
    bool  _accountsLoaded;
    REMObjectID * _defaultListMigratedIdentifier;
    NSString * _defaultListOriginalIdentifier;
    REMAccount * _localAccount;
    REMAccountChangeItem * _localAccountChangeItem;
    NSMutableArray * _orderedListChangeItemsStack;
    bool  _recordedAnyFatalFailures;
    <CalReminderKitDatabaseMigrationContext> * _remDatabaseMigrationContext;
    <CalReminderKitProvider> * _reminderKitProvider;
    REMStore * _reminderStore;
    REMSaveRequest * _saveRequest;
}

@property (nonatomic, readonly) REMObjectID *defaultListMigratedIdentifier;
@property (nonatomic, retain) NSString *defaultListOriginalIdentifier;
@property (nonatomic, readonly) bool isCurrentOrderedListItemsContextEmpty;
@property (nonatomic, readonly) REMAccountChangeItem *localAccountChangeItem;
@property (nonatomic, readonly) <CalReminderKitProvider> *reminderKitProvider;
@property (nonatomic, readonly) REMSaveRequest *saveRequest;
@property (nonatomic, readonly) bool shouldDeleteMigratedData;
@property (nonatomic, readonly) bool shouldPerformMigration;

- (void).cxx_destruct;
- (void)_didEndMigrationWithSuccess:(bool)arg1;
- (id)_initWithReminderKitProvider:(id)arg1;
- (void)_loadAccountsIfNeeded;
- (bool)_setup;
- (void)_sortAddedReminderListsInAccountChangeItem:(id)arg1;
- (id)_sortedAddedListChangeItems;
- (bool)_tryBeginMigration;
- (void)_verifyAccountHasNoLists:(id)arg1 withAccountIdentifier:(id)arg2;
- (void)_willBeginMigration;
- (id)accountsForAccountIdentifiers;
- (id)defaultListMigratedIdentifier;
- (id)defaultListOriginalIdentifier;
- (bool)ensureAccountsExist:(id)arg1;
- (id)existingAccountChangeItemWithAccountIdentifier:(id)arg1;
- (bool)finishMigrationWithSave:(bool)arg1;
- (bool)isCurrentOrderedListItemsContextEmpty;
- (id)localAccountChangeItem;
- (void)popOrderedListItemsContextAndSortListsInAccountChangeItem:(id)arg1;
- (void)pushOrderedListItemsContext;
- (void)recordAddedListChangeItem:(id)arg1 withOriginalIdentifier:(id)arg2 order:(id)arg3;
- (void)recordMigrationFailureWithDescription:(id)arg1 inStage:(unsigned long long)arg2 underlyingError:(id)arg3;
- (void)recordMigrationFailureWithDescription:(id)arg1 inStage:(unsigned long long)arg2 underlyingError:(id)arg3 relatedTo:(id)arg4;
- (void)recordMigrationFailureWithDescription:(id)arg1 inStage:(unsigned long long)arg2 underlyingError:(id)arg3 relatedTo:(id)arg4 isFatal:(bool)arg5;
- (id)reminderKitProvider;
- (id)reminderStore;
- (id)saveRequest;
- (void)setDefaultListOriginalIdentifier:(id)arg1;
- (bool)shouldDeleteMigratedData;
- (bool)shouldPerformMigration;

@end
