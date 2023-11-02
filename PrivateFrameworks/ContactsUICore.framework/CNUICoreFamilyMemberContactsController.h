
@interface CNUICoreFamilyMemberContactsController : NSObject <CNUICoreFamilyMemberContactsDataSource> {
    <CNCancelable> * _contactStoreDidChangeToken;
    NSNumber * _countOfFamilyMemberContacts;
    CNFuture * _countOfFamilyMemberContactsFuture;
    FAFamilyMember * _familyMember;
    <CNUICoreFamilyMemberContactsUpdating> * _familyMemberContactsUpdator;
    <CNUICoreFamilyMemberContactsModelFetching> * _modelFetcher;
    <CNUICoreFamilyMemberContactsObserver> * _observer;
    <CNSchedulerProvider> * _schedulerProvider;
    CNFuture * _updateContactListByAddingContactsFuture;
    CNFuture * _updateContactListByRemovingContactsFuture;
}

@property (nonatomic, retain) <CNCancelable> *contactStoreDidChangeToken;
@property (nonatomic, retain) NSNumber *countOfFamilyMemberContacts;
@property (nonatomic, retain) CNFuture *countOfFamilyMemberContactsFuture;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FAFamilyMember *familyMember;
@property (nonatomic, readonly) <CNUICoreFamilyMemberContactsUpdating> *familyMemberContactsUpdator;
@property (nonatomic, readonly) long long fetchStatus;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CNUICoreFamilyMemberContactsModelFetching> *modelFetcher;
@property (nonatomic) <CNUICoreFamilyMemberContactsObserver> *observer;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;
@property (readonly) Class superclass;
@property (nonatomic, retain) CNFuture *updateContactListByAddingContactsFuture;
@property (nonatomic, retain) CNFuture *updateContactListByRemovingContactsFuture;

+ (id)contactByRemovingSensitiveDataFromContact:(id)arg1;
+ (id)propertyKeysContainingSenstiveData;

- (void).cxx_destruct;
- (void)cancelCountOfFamilyMemberContactsFetch;
- (id)contactStoreDidChangeToken;
- (id)countOfFamilyMemberContacts;
- (id)countOfFamilyMemberContactsFuture;
- (id)countOfFamilyMemberContactsFutureFromFetcher;
- (void)dealloc;
- (id)familyMember;
- (id)familyMemberContactsUpdator;
- (long long)fetchStatus;
- (id)init;
- (id)initWithFamilyMember:(id)arg1 modelFetcher:(id)arg2 familyMemberContactsUpdator:(id)arg3 schedulerProvider:(id)arg4;
- (id)initWithFamilyMember:(id)arg1 schedulerProvider:(id)arg2;
- (id)modelFetcher;
- (id)observer;
- (id)schedulerProvider;
- (void)setContactStoreDidChangeToken:(id)arg1;
- (void)setCountOfFamilyMemberContacts:(id)arg1;
- (void)setCountOfFamilyMemberContactsFuture:(id)arg1;
- (void)setObserver:(id)arg1;
- (void)setUpdateContactListByAddingContactsFuture:(id)arg1;
- (void)setUpdateContactListByRemovingContactsFuture:(id)arg1;
- (void)setupChangeNotificationResponse;
- (void)triggerCountOfFamilyMemberContactsFetch;
- (id)updateContactListByAddingContactsFuture;
- (id)updateContactListByRemovingContactsFuture;
- (void)updateListByAddingContacts:(id)arg1;
- (void)updateListByRemovingContacts:(id)arg1;

@end
