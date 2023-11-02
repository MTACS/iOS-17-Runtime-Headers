
@interface CNUICoreFamilyMemberWhitelistedContactsController : NSObject <CNUICoreFamilyMemberWhitelistedContactsDataSource> {
    CNFuture * _addContactsToWhitelistFuture;
    <CNCancelable> * _contactStoreDidChangeToken;
    CNFuture * _deleteContactsFromWhitelistFuture;
    NSArray * _familyMemberContactItems;
    CNFuture * _familyMemberContactItemsFuture;
    <CNUICoreFamilyMemberContactsUpdating> * _familyMemberContactsUpdator;
    <CNUICoreContactStoreFacade> * _familyMemberScopedContactStore;
    <CNUICoreContactStoreFacade> * _mainContactStoreFacade;
    <CNUICoreFamilyMemberContactsModelFetching> * _modelFetcher;
    <CNUICoreFamilyMemberContactsObserver> * _observer;
    <CNSchedulerProvider> * _schedulerProvider;
    CNFuture * _updateContactsInWhitelistFuture;
}

@property (nonatomic, retain) CNFuture *addContactsToWhitelistFuture;
@property (nonatomic, readonly) <CNCancelable> *contactStoreDidChangeToken;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) CNFuture *deleteContactsFromWhitelistFuture;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *familyMemberContactItems;
@property (nonatomic, retain) CNFuture *familyMemberContactItemsFuture;
@property (nonatomic, readonly) <CNUICoreFamilyMemberContactsUpdating> *familyMemberContactsUpdator;
@property (nonatomic, readonly) bool familyMemberContainerIsEmpty;
@property (nonatomic, readonly) <CNUICoreContactStoreFacade> *familyMemberScopedContactStore;
@property (nonatomic, readonly) long long fetchStatus;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CNUICoreContactStoreFacade> *mainContactStoreFacade;
@property (nonatomic, readonly) <CNUICoreFamilyMemberContactsModelFetching> *modelFetcher;
@property (nonatomic) <CNUICoreFamilyMemberContactsObserver> *observer;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;
@property (readonly) Class superclass;
@property (nonatomic, retain) CNFuture *updateContactsInWhitelistFuture;

+ (id)contactByRemovingSensitiveDataFromContact:(id)arg1;
+ (id)controllerWithFamilyMember:(id)arg1 options:(id)arg2 schedulerProvider:(id)arg3;
+ (id)propertyKeysContainingSenstiveData;

- (void).cxx_destruct;
- (id)addContactsToWhitelistFuture;
- (void)cancelContactItemsFetch;
- (id)contactItemFutureFromFetcher;
- (id)contactRepresentingItem:(id)arg1;
- (id)contactStoreDidChangeToken;
- (void)dealloc;
- (id)deleteContactsFromWhitelistFuture;
- (id)familyMemberContactItems;
- (id)familyMemberContactItemsFuture;
- (id)familyMemberContactsUpdator;
- (bool)familyMemberContainerIsEmpty;
- (id)familyMemberScopedContactStore;
- (long long)fetchStatus;
- (void)finishWhitelistedContactsTasks;
- (id)init;
- (id)initWithFamilyMember:(id)arg1 options:(id)arg2 schedulerProvider:(id)arg3;
- (id)initWithModelFetcher:(id)arg1 familyMemberContactsUpdator:(id)arg2 familyMemberScopedContactStoreFacade:(id)arg3 mainContactStoreFacade:(id)arg4 schedulerProvider:(id)arg5;
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
