
@interface CNUICoreMainWhitelistedContactsController : NSObject <CNUICoreFamilyMemberWhitelistedContactsDataSource> {
    CNFuture * _addContactsToWhitelistFuture;
    <CNCancelable> * _contactStoreDidChangeToken;
    CNFuture * _deleteContactsFromWhitelistFuture;
    <CNDowntimeWhitelistContainerFetching> * _downtimeContainerFetcher;
    NSArray * _familyMemberContactItems;
    CNFuture * _familyMemberContactItemsFuture;
    <CNUICoreContactStoreFacade> * _mainContactStoreFacade;
    <CNUICoreFamilyMemberContactsModelFetching> * _modelFetcher;
    <CNUICoreFamilyMemberContactsObserver> * _observer;
    <CNSchedulerProvider> * _schedulerProvider;
    CNFuture * _updateContactsInWhitelistFuture;
}

@property (nonatomic, retain) CNFuture *addContactsToWhitelistFuture;
@property (nonatomic, readonly) <CNScheduler> *backgroundOrImmediateScheduler;
@property (nonatomic, readonly) <CNCancelable> *contactStoreDidChangeToken;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) CNFuture *deleteContactsFromWhitelistFuture;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <CNDowntimeWhitelistContainerFetching> *downtimeContainerFetcher;
@property (nonatomic, retain) NSArray *familyMemberContactItems;
@property (nonatomic, retain) CNFuture *familyMemberContactItemsFuture;
@property (nonatomic, readonly) bool familyMemberContainerIsEmpty;
@property (nonatomic, readonly) long long fetchStatus;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CNUICoreContactStoreFacade> *mainContactStoreFacade;
@property (nonatomic, readonly) <CNUICoreFamilyMemberContactsModelFetching> *modelFetcher;
@property (nonatomic) <CNUICoreFamilyMemberContactsObserver> *observer;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;
@property (readonly) Class superclass;
@property (nonatomic, retain) CNFuture *updateContactsInWhitelistFuture;

+ (id)controllerWithOptions:(id)arg1 schedulerProvider:(id)arg2;

- (void).cxx_destruct;
- (id)addContactsToWhitelistFuture;
- (id)backgroundOrImmediateScheduler;
- (void)cancelContactItemsFetch;
- (id)contactItemFutureFromFetcher;
- (id)contactRepresentingItem:(id)arg1;
- (id)contactStoreDidChangeToken;
- (void)dealloc;
- (id)deleteContactsFromWhitelistFuture;
- (id)downtimeContainerFetcher;
- (id)familyMemberContactItems;
- (id)familyMemberContactItemsFuture;
- (bool)familyMemberContainerIsEmpty;
- (long long)fetchStatus;
- (void)finishWhitelistedContactsTasks;
- (id)init;
- (id)initWithModelFetcher:(id)arg1 mainContactStoreFacade:(id)arg2 downtimeContainerFetcher:(id)arg3 schedulerProvider:(id)arg4;
- (id)initWiththOptions:(id)arg1 mainContactStoreFacade:(id)arg2 schedulerProvider:(id)arg3;
- (id)mainContactStoreFacade;
- (id)modelFetcher;
- (id)observer;
- (id)schedulerProvider;
- (void)setAddContactsToWhitelistFuture:(id)arg1;
- (void)setDeleteContactsFromWhitelistFuture:(id)arg1;
- (void)setFamilyMemberContactItems:(id)arg1;
- (void)setFamilyMemberContactItemsFuture:(id)arg1;
- (void)setObserver:(id)arg1;
- (void)setUpdateContactsInWhitelistFuture:(id)arg1;
- (void)setupChangeNotificationResponse;
- (void)triggerContactItemsFetch;
- (id)updateContactsInWhitelistFuture;
- (void)updateWhitelistByAddingContacts:(id)arg1;
- (void)updateWhitelistByRemovingContacts:(id)arg1;
- (void)updateWhitelistByUpdatingContacts:(id)arg1;

@end
