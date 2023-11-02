
@interface CNUICoreFamilyInfoRetriever : NSObject <CNUICoreFamilyInfoFetching> {
    CNFuture * _familyFuture;
    FAFetchFamilyCircleRequest * _fetchFamilyCircleRequest;
    <CNUICoreContactStoreFacade> * _mainContactStore;
    bool  _matchFamilyMembersWithContacts;
    <CNSchedulerProvider> * _schedulerProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNFuture *familyFuture;
@property (nonatomic, readonly) FAFetchFamilyCircleRequest *fetchFamilyCircleRequest;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CNUICoreContactStoreFacade> *mainContactStore;
@property (nonatomic, readonly) bool matchFamilyMembersWithContacts;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;
@property (readonly) Class superclass;

+ (id)contactsMatchingFamilyMember:(id)arg1 inContactStore:(id)arg2;
+ (id)familyCircleFromRequest:(id)arg1 schedulerProvider:(id)arg2;
+ (id)familyInfoWithFamilyMembers:(id)arg1 meContact:(id)arg2;
+ (id)familyInfoWithFamilyMembers:(id)arg1 meContact:(id)arg2 matchedWithContactsInContactStore:(id)arg3;
+ (id)keysToFetch;
+ (id)meContactFromStore:(id)arg1 schedulerProvider:(id)arg2;

- (void).cxx_destruct;
- (id)createFamilyFuture;
- (id)familyFuture;
- (id)familyInfo;
- (id)fetchFamilyCircleRequest;
- (id)init;
- (id)initWithMainContactStoreFacade:(id)arg1 fetchFamilyCircleRequest:(id)arg2 matchFamilyMembersWithContacts:(bool)arg3 schedulerProvider:(id)arg4;
- (id)initWithMainContactStoreFacade:(id)arg1 matchFamilyMembersWithContacts:(bool)arg2 schedulerProvider:(id)arg3;
- (id)mainContactStore;
- (bool)matchFamilyMembersWithContacts;
- (id)schedulerProvider;
- (void)setFamilyFuture:(id)arg1;

@end
