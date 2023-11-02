
@interface CNUICoreInMemoryWhitelistedContactsDataSourceDecorator : NSObject <CNUICoreFamilyMemberContactsObserver, CNUICoreFamilyMemberWhitelistedContactsDataSource> {
    CNUICoreContactTypeAssessor * _contactTypeAssessor;
    <CNUICoreFamilyMemberWhitelistedContactsDataSource> * _dataSource;
    CNUICoreContactEditingSession * _editingSession;
    <CNCancelable> * _endEditingNotificationToken;
    <CNUICoreFamilyInfoFetching> * _familyInfoRetriever;
    NSArray * _familyMemberContactItemsSnapshot;
    <CNUICoreContactStoreFacade> * _mainContactStore;
    <CNUICoreFamilyMemberContactsObserver> * _observer;
    <CNSchedulerProvider> * _schedulerProvider;
}

@property (nonatomic, readonly) CNUICoreContactTypeAssessor *contactTypeAssessor;
@property (nonatomic, readonly) <CNUICoreFamilyMemberWhitelistedContactsDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNUICoreContactEditingSession *editingSession;
@property (nonatomic, retain) <CNCancelable> *endEditingNotificationToken;
@property (nonatomic, readonly) <CNUICoreFamilyInfoFetching> *familyInfoRetriever;
@property (nonatomic, readonly) NSArray *familyMemberContactItems;
@property (nonatomic, retain) NSArray *familyMemberContactItemsSnapshot;
@property (nonatomic, readonly) bool familyMemberContainerIsEmpty;
@property (nonatomic, readonly) long long fetchStatus;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CNUICoreContactStoreFacade> *mainContactStore;
@property (nonatomic) <CNUICoreFamilyMemberContactsObserver> *observer;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;
@property (readonly) Class superclass;

+ (id)modelBuilderForAddedContacts:(id)arg1 withContactTypeAssessor:(id)arg2;
+ (id)modelBuilderForContacts:(id)arg1 withContactTypeAssessor:(id)arg2;

- (void).cxx_destruct;
- (id)contactRepresentingItem:(id)arg1;
- (id)contactTypeAssesor;
- (id)contactTypeAssessor;
- (id)dataSource;
- (void)dealloc;
- (id)editingSession;
- (id)endEditingNotificationToken;
- (void)executeBlockIfEditingSessionNotInProgress:(id /* block */)arg1;
- (id)familyInfoRetriever;
- (id)familyMemberContactItems;
- (void)familyMemberContactItemsDidChange;
- (id)familyMemberContactItemsFromDataSource;
- (id)familyMemberContactItemsFromDataSourceAugmentedWithInMemoryEdits;
- (id)familyMemberContactItemsSnapshot;
- (bool)familyMemberContainerIsEmpty;
- (long long)fetchStatus;
- (void)finishPersistenceOfInMemoryContactsWhitelistState;
- (void)finishWhitelistedContactsTasks;
- (void)flushEditingSession;
- (id)initWithDataSource:(id)arg1 familyInfoRetriever:(id)arg2 schedulerProvider:(id)arg3;
- (id)initWithDataSource:(id)arg1 schedulerProvider:(id)arg2;
- (id)mainContactStore;
- (void)notifyObserverContactItemsChange;
- (id)observer;
- (void)persistInMemoryContactsWhitelistState;
- (id)schedulerProvider;
- (void)setEditingSession:(id)arg1;
- (void)setEndEditingNotificationToken:(id)arg1;
- (void)setFamilyMemberContactItemsSnapshot:(id)arg1;
- (void)setObserver:(id)arg1;
- (void)startEditingSessionIfNecessary;
- (void)startEditingSessionIfNecessaryWithSnapshotOfItems:(id)arg1;
- (void)startImplicitEditngSessionForAnyItemsNotPersistedInItems:(id)arg1;
- (void)updateWhitelistByAddingContacts:(id)arg1;
- (void)updateWhitelistByRemovingContacts:(id)arg1;
- (void)updateWhitelistByUpdatingContacts:(id)arg1;

@end
